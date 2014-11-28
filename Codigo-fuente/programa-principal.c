/*  ******* programa-principal.c *******  */
/* 
 * Programa: programa-principal.c
 * Autor: Mario Roberto Samudio Martinez
 *
 * Descripcion: Programa principal para configurar la secuencia de 
 *    los leds conectados al PIC18F4550.
 * 
 */

#include <xc.h>
#include <htc.h>
#include <p18f4550.h> 
#include "Directivas-compilador.h"
#include "configuracion-leds.h"
#include "Libreria-retardos.h"
#include "secuencias.h"
// #define _XTAL_FREQ 48000000

//Equivalente en #zero_ram de ccs falta por definir


void main ()
{

    // TRISBbits.TRISB0 = 0;       //  Set only pin RB0 to output
    // TRISBbits.TRISB1 = 1;       //  Set only pin RB1 to Input
    
    //TRISA = 0X00; // pin A0= buzzer
    TRISA0 = 0;// pin A0= buzzer
    TRISA1 = 0;
    TRISA2 = 0;
    TRISA3 = 0;
    TRISA4 = 0;
    TRISA5 = 0;

    TRISB = 0X00;
    
    // TRISC = 0X00;
    TRISC0 = 0;
    TRISC1 = 0;
    TRISC2 = 0;
    TRISC6 = 0;
    TRISC7 = 0;

    // TRISD = 0X04; // pin D2= pulsador
    TRISD0 = 0;
    TRISD1 = 0;
    TRISD2 = 1;// pin D2= pulsador
    TRISD3 = 0;
    TRISD4 = 0;
    TRISD5 = 0;
    TRISD6 = 0;
    TRISD7 = 0;

    // TRISE = 0X00; //  puerto a 8 pines (0000)(0000)
    TRISE0 = 0;
    TRISE1 = 0;
    TRISE2 = 0;

    inicializador();

    while(1)
    {
        //TRISDbits.TRISD2  * Corrupted fast interrupt shadow registers
        //LATDbits.LATD2    * Corrupted fast interrupt shadow registers
        //RD2               (1273) Omniscient Code Generation not available in Free mode (warning)
        if(pulsador)
        {
            secuencia1(5);
            secuencia2();

            porpuertos1(1);
            porpuertos2(5);
            unled(3);
            gruposde7(2);
        }
        else
        {
            secuencia3(1);
        } 
    }
}