/*  ******* programa-principal.c *******  */
/*
 * Programa: main.c
 * Autor: Mario Roberto Samudio Martinez
 *
 * Descripcion: display lcd serial con arduino en el PIC18F4550.
 *
 */

#include <xc.h>
#include "LCD18F.h"

#pragma config PLLDIV = 1 // No divide (4MHz input)
#pragma config FOSC = INTOSC_EC //Internal oscillator,
#pragma config FCMEN = OFF //Disabled
#pragma config IESO = OFF //Disabled
#pragma config PWRT = ON  //Enabled
#pragma config BOR = OFF       //Disabled
#pragma config VREGEN = OFF //Disabled
#pragma config WDT = OFF //HW Disabled - SW Controlled
#pragma config MCLRE = OFF //Disabled
#pragma config LPT1OSC = OFF //Timer1 oscillator configured for high power
#pragma config PBADEN = OFF //PortB<4:0> pins are configured as digital I/O on RESET
#pragma config STVREN = OFF //Disabled
#pragma config LVP = OFF //Disabled
#pragma config ICPRT = OFF //Disabled
#pragma config XINST = OFF //Disabled
#pragma config DEBUG = OFF //Disabled

#pragma config CP0 = OFF //Disabled
#pragma config CP1 = OFF //Disabled
#pragma config CP2 = OFF //Disabled
#pragma config CP3 = OFF //Disabled

#pragma config CPB = OFF //Disabled
#pragma config CPD = OFF //Disabled
#pragma config WRT0 = OFF //Disabled
#pragma config WRT1 = OFF //Disabled
#pragma config WRT2 = OFF //Disabled
#pragma config WRT3 = OFF //Disabled
#pragma config WRTB = OFF //Disabled
#pragma config WRTC = OFF //Disabled
#pragma config WRTD = OFF //Disabled
#pragma config EBTR0 = OFF //Disabled
#pragma config EBTR1 = OFF //Disabled
#pragma config EBTR2 = OFF //Disabled
#pragma config EBTR3 = OFF //Disabled
#pragma config EBTRB = OFF //Disabled

#define dataled LATAbits.LATA0
#define buzzer LATDbits.LATD0

void interrupt isr(){
    dataled =0;
    buzzer = 0;
    char *x;
    x=(char *)RCREG;        //dato recibido
    if(x!="65"){

        for (int i = 0; i <= 5; i++)
            {
                dataled = 1;
                buzzer = 1;
                __delay_ms(190);
                dataled = 0;
                buzzer = 0;
            }

        Lcd_Set_Cursor(1,1);
        Lcd_Write_String((char *) "llego dato");

        Lcd_Set_Cursor(2,1);
        Lcd_Write_String((char *)&x);
        __delay_ms(1000);


    }       //Si es A
    Lcd_Clear();
    PIR1bits.RCIF=0;
}

void main(void) {
    //OScilador
  IRCF2 = 1; IRCF1 = 1; IRCF0 = 0; // ejemplo a 4mhz
  TRISA = 0X00;
  TRISB = 0X00;
  TRISC = 0X00;
  TRISE = 0X00;
  TRISD = 0x00;
     //Puerto
    PORTA=0;
    PORTB=0;
    PORTC=0;
    PORTD=0;
    PORTE=0;

    //*******interrupción
    INTCONbits.GIE=1;       //Interrupción global
    INTCONbits.PEIE=1;      //Interrupción por periférico
    PIR1bits.RCIF=0;        //Limpiamos bandera
    PIE1bits.RCIE=1;        //Habilitamos interrupción
    //********recepción
    RCSTAbits.SPEN=1;   //habilita puerto serie
    RCSTAbits.CREN=1;   //habilita recepción
    TXSTAbits.SYNC=0;   //asincrono
    //*****************Baud Rate
    BRG16=0; //8 bits
    TXSTAbits.BRGH=0;    //Baja velocidad
    SPBRG=25;            // Baud Rate 9600
    //****************************************+
    Lcd_Init();
    while(1);
    return;
}