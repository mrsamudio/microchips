/*  ******* secuencias.h *******  */

/* Programa: programa-principal.c
 * Autor: Mario Roberto Samudio Martinez
 *
 * Descripcion: Programa principal para  configurar la secuencia de 
 *              los leds conectados al PIC18F4550.
 * maximum limit of 19717 cycles = __delay_ms(16.4199);
 */

#include <xc.h>
#define _XTAL_FREQ 48000000

int i=0,j=0;

void inicializador()
{
    LATAbits.LATA0 = 0;
    LATAbits.LATA1 = 0;
    LATAbits.LATA2 = 0;
    LATAbits.LATA3 = 0;
    LATAbits.LATA4 = 0;
    LATAbits.LATA5 = 0;

    LATB = 0X00;

    LATCbits.LATC0 = 0;
    LATCbits.LATC1 = 0;
    LATCbits.LATC2 = 0;
    LATCbits.LATC6 = 0;
    LATCbits.LATC7 = 0;

    LATDbits.LATD0 = 0;
    LATDbits.LATD1 = 0;
    LATDbits.LATD3 = 0;
    LATDbits.LATD4 = 0;
    LATDbits.LATD5 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD7 = 0;

    LATEbits.LATE0 = 0;
    LATEbits.LATE1 = 0;
    LATEbits.LATE2 = 0;
}

void secini(int x)
{
    for (int i = 0; i <= x; i++)
    {
        centiSegundos(i);
        led6 = 1;//(LED1);
        centiSegundos(i);
        led7 = 1;//(LED2);
        centiSegundos(i);
        led8 = 1;//(LED3);
        centiSegundos(i);
        led9 = 1;//(LED3);
        centiSegundos(i);
        led10 = 1;//(LED5);
        centiSegundos(i);
        led11 = 1;//(LED6);
        centiSegundos(i);
        led12 = 1;//(LED7);
        centiSegundos(i);
        led13 = 1;//(LED8);
        centiSegundos(i);
        led6 = 0;//(LED8);
        centiSegundos(i);
        led7 = 0;//(LED7);
        centiSegundos(i);
        led8 = 0;//(LED6);
        centiSegundos(i);
        led9 = 0;//(LED5);
        centiSegundos(i);
        led10 = 0;//(LED3);
        centiSegundos(i);
        led11 = 0;//(LED3);
        centiSegundos(i);
        led12 = 0;//(LED2);
        centiSegundos(i);
        led13 = 0;//(LED1);

        //se devuelve
        centiSegundos(i);
        led13 = 1;//(LED8);
        centiSegundos(i);
        led12 = 1;//(LED7);
        centiSegundos(i);
        led11 = 1;//(LED6);
        centiSegundos(i);
        led10 = 1;//(LED5);
        centiSegundos(i);
        led9 = 1;//(LED3);
        centiSegundos(i);
        led8 = 1;//(LED3);
        centiSegundos(i);
        led7 = 1;//(LED2);
        centiSegundos(i);
        led6 = 1;//(LED1);
        centiSegundos(i);
        led13 = 0;//(LED1);
        centiSegundos(i);
        led12 = 0;//(LED2);
        centiSegundos(i);
        led11 = 0;//(LED3);
        centiSegundos(i);
        led10 = 0;//(LED3);
        centiSegundos(i);
        led9 = 0;//(LED5);
        centiSegundos(i);
        led8 = 0;//(LED6);
        centiSegundos(i);
        led7 = 0;//(LED7);
        centiSegundos(i);
        led6 = 0;//(LED8);
    }
}

void secuencia1(int x)
{
    for (i=1; i<=x; i++)
    {
        //Encienden los leds  
            //PUERTO A
            centiSegundos(i);
            led1 = 1;
            centiSegundos(i);
            led2 = 1;
            centiSegundos(i);
            led3 = 1;
            centiSegundos(i);
            led4 = 1;
            centiSegundos(i);
            led5 = 1;
            centiSegundos(i);

            //PUERTO B
            led6 = 1;//(LED1);
            centiSegundos(i);
            led7 = 1;//(LED2);
            centiSegundos(i);
            led8 = 1;//(LED3);
            centiSegundos(i);
            led9 = 1;//(LED3);
            centiSegundos(i);
            led10 = 1;//(LED5);
            centiSegundos(i);
            led11 = 1;//(LED6);
            centiSegundos(i);
            led12 = 1;//(LED7);
            centiSegundos(i);
            led13 = 1;//(LED8);
            centiSegundos(i);

            //PUERTO C
            led14 = 1;
            centiSegundos(i);
            led15 = 1;
            centiSegundos(i);
            led16 = 1;
            centiSegundos(i);
            led17 = 1;
            centiSegundos(i);
            led18 = 1;
            centiSegundos(i);

            //PUERTO D
            led19 = 1;
            centiSegundos(i);
            led20 = 1;
            centiSegundos(i);
            led21 = 1;
            centiSegundos(i);
            led22 = 1;
            centiSegundos(i);
            led23 = 1;
            centiSegundos(i);
            led24 = 1;
            centiSegundos(i);
            led25 = 1;
            centiSegundos(i);

            //PUERTO E
            led26 = 1;
            centiSegundos(i);
            led27 = 1;
            centiSegundos(i);
            led28 = 1;
        //

        //Apagan los leds
            //PUERTO A
            centiSegundos(i);
            led1 = 0;
            centiSegundos(i);
            led2 = 0;
            centiSegundos(i);
            led3 = 0;
            centiSegundos(i);
            led4 = 0;
            centiSegundos(i);
            led5 = 0;
            centiSegundos(i);

            //PUERTO B
            led6 = 0;//(LED1);
            centiSegundos(i);
            led7 = 0;//(LED2);
            centiSegundos(i);
            led8 = 0;//(LED3);
            centiSegundos(i);
            led9 = 0;//(LED3);
            centiSegundos(i);
            led10 = 0;//(LED5);
            centiSegundos(i);
            led11 = 0;//(LED6);
            centiSegundos(i);
            led12 = 0;//(LED7);
            centiSegundos(i);
            led13 = 0;//(LED8);
            centiSegundos(i);

            //PUERTO C
            led14 = 0;
            centiSegundos(i);
            led15 = 0;
            centiSegundos(i);
            led16 = 0;
            centiSegundos(i);
            led17 = 0;
            centiSegundos(i);
            led18 = 0;
            centiSegundos(i);

            //PUERTO D
            led19 = 0;
            centiSegundos(i);
            led20 = 0;
            centiSegundos(i);
            led21 = 0;
            centiSegundos(i);
            led22 = 0;
            centiSegundos(i);
            led23 = 0;
            centiSegundos(i);
            led24 = 0;
            centiSegundos(i);
            led25 = 0;
            centiSegundos(i);

            //PUERTO E
            led26 = 0;
            centiSegundos(i);
            led27 = 0;
            centiSegundos(i);
            led28 = 0;
        //
    }
}

//PRENDE Y APAGA TODOS AL TIEMPO
void secuencia2()
{
    retardoSegundos(1);
    led1 = 0;
    led2 = 0;
    led3 = 0;
    led4 = 0;
    led5 = 0;

    led6 = 0;//(LED1);
    led7 = 0;//(LED2);
    led8 = 0;//(LED3);
    led9 = 0;//(LED3);
    led10 = 0;//(LED5);
    led11 = 0;//(LED6);
    led12 = 0;//(LED7);
    led13 = 0;//(LED8);

    led14 = 0;
    led15 = 0;
    led16 = 0;
    led17 = 0;
    led18 = 0;

    led19 = 0;
    led20 = 0;
    led21 = 0;
    led22 = 0;
    led23 = 0;
    led24 = 0;
    led25 = 0;

    led26 = 0;
    led27 = 0;
    led28 = 0;

    retardoSegundos(1);
    led1 = 1;
    led2 = 1;
    led3 = 1;
    led4 = 1;
    led5 = 1;

    led6 = 1;//(LED1);
    led7 = 1;//(LED2);
    led8 = 1;//(LED3);
    led9 = 1;//(LED3);
    led10 = 1;//(LED5);
    led11 = 1;//(LED6);
    led12 = 1;//(LED7);
    led13 = 1;//(LED8);

    led14 = 1;
    led15 = 1;
    led16 = 1;
    led17 = 1;
    led18 = 1;

    led19 = 1;
    led20 = 1;
    led21 = 1;
    led22 = 1;
    led23 = 1;
    led24 = 1;
    led25 = 1;

    led26 = 1;
    led27 = 1;
    led28 = 1;

    retardoSegundos(1);
    led1 = 0;
    led2 = 0;
    led3 = 0;
    led4 = 0;
    led5 = 0;

    led6 = 0;//(LED1);
    led7 = 0;//(LED2);
    led8 = 0;//(LED3);
    led9 = 0;//(LED3);
    led10 = 0;//(LED5);
    led11 = 0;//(LED6);
    led12 = 0;//(LED7);
    led13 = 0;//(LED8);

    led14 = 0;
    led15 = 0;
    led16 = 0;
    led17 = 0;
    led18 = 0;

    led19 = 0;
    led20 = 0;
    led21 = 0;
    led22 = 0;
    led23 = 0;
    led24 = 0;
    led25 = 0;

    led26 = 0;
    led27 = 0;
    led28 = 0;
}

//
void secuencia3(int x)
{
    for (i=0; i<1000; i++)
    {
        buzzer = 1;
        __delay_ms(1);
        buzzer = 0;
        __delay_ms(1);
    }
    centiSegundos(x);

    for (int i = 0; i < 100; ++i)
    {
        buzzer = 1;
        __delay_us(100);
        buzzer = 0;
        __delay_us(10);
    }
}

void porpuertos1(int x)
{
    for (int i = 0; i <= x; i++)
    {
        inicializador();
        deciSegundos(1);
        // PUERTO A
        led1 = 0; 
        led2 = 0; 
        led3 = 0; 
        led4 = 0; 
        led5 = 0; 

        deciSegundos(1);
        led1 = 1; 
        led2 = 1; 
        led3 = 1; 
        led4 = 1; 
        led5 = 1; 

        deciSegundos(1);
        // PUERTO B
        led6 = 0; 
        led7 = 0; 
        led8 = 0; 
        led9 = 0; 
        led10 = 0;
        led11 = 0;
        led12 = 0;
        led13 = 0;

        deciSegundos(1);
        led6 = 1; 
        led7 = 1; 
        led8 = 1; 
        led9 = 1; 
        led10 = 1;
        led11 = 1;
        led12 = 1;
        led13 = 1;

        deciSegundos(1);
        // PUERTO C
        led14 = 0;
        led15 = 0;
        led16 = 0;
        led17 = 0;
        led18 = 0;

        deciSegundos(1);
        led14 = 1;
        led15 = 1;
        led16 = 1;
        led17 = 1;
        led18 = 1;

        deciSegundos(1);
        // PUERTO D
        led19 = 0;
        led20 = 0;
        led21 = 0;
        led22 = 0;
        led23 = 0;
        led24 = 0;
        led25 = 0;

        deciSegundos(1);
        led19 = 1;
        led20 = 1;
        led21 = 1;
        led22 = 1;
        led23 = 1;
        led24 = 1;
        led25 = 1;

        deciSegundos(1);
        // PUERTO E
        led26 = 0;
        led27 = 0;
        led28 = 0;

        deciSegundos(1);
        led26 = 1;
        led27 = 1;
        led28 = 1;
    }
}

void porpuertos2(int x)
{
    for (int i = 0; i <= x; i++)
    {
        deciSegundos(1);
        // PUERTO A
        led1 = 1; 
        led2 = 1; 
        led3 = 1; 
        led4 = 1; 
        led5 = 1; 

        deciSegundos(1);
        led1 = 0; 
        led2 = 0; 
        led3 = 0; 
        led4 = 0; 
        led5 = 0; 

        deciSegundos(1);
        // PUERTO B
        led6 = 1; 
        led7 = 1; 
        led8 = 1; 
        led9 = 1; 
        led10 = 1;
        led11 = 1;
        led12 = 1;
        led13 = 1;

        deciSegundos(1);
        led6 = 0; 
        led7 = 0; 
        led8 = 0; 
        led9 = 0; 
        led10 = 0;
        led11 = 0;
        led12 = 0;
        led13 = 0;

        deciSegundos(1);
        // PUERTO C
        led14 = 1;
        led15 = 1;
        led16 = 1;
        led17 = 1;
        led18 = 1;

        deciSegundos(1);
        led14 = 0;
        led15 = 0;
        led16 = 0;
        led17 = 0;
        led18 = 0;

        deciSegundos(1);
        // PUERTO D
        led19 = 1;
        led20 = 1;
        led21 = 1;
        led22 = 1;
        led23 = 1;
        led24 = 1;
        led25 = 1;

        deciSegundos(1);
        led19 = 0;
        led20 = 0;
        led21 = 0;
        led22 = 0;
        led23 = 0;
        led24 = 0;
        led25 = 0;

        deciSegundos(1);
        // PUERTO E
        led26 = 1;
        led27 = 1;
        led28 = 1;

        deciSegundos(1);
        led26 = 0;
        led27 = 0;
        led28 = 0;
    }
}

void unled(int x)
{
    for (i=1; i<=x; i++)
    {
        centiSegundos(i);
        led1 = 1;
        centiSegundos(i);
        led1 = 0;

        centiSegundos(i);
        led2 = 1;
        centiSegundos(i);
        led2 = 0;

        centiSegundos(i);
        led3 = 1;
        centiSegundos(i);
        led3 = 0;

        centiSegundos(i);
        led4 = 1;
        centiSegundos(i);
        led4 = 0;

        centiSegundos(i);
        led5 = 1;
        centiSegundos(i);
        led5 = 0;

        centiSegundos(i);

        //PUERTO B
        led6 = 1;
        centiSegundos(i);
        led6 = 0;

        centiSegundos(i);
        led7 = 1;
        centiSegundos(i);
        led7 = 0;

        centiSegundos(i);
        led8 = 1;
        centiSegundos(i);
        led8 = 0;

        centiSegundos(i);
        led9 = 1;
        centiSegundos(i);
        led9 = 0;

        centiSegundos(i);
        led10 = 1;
        centiSegundos(i);
        led10 = 0;

        centiSegundos(i);
        led11 = 1;
        centiSegundos(i);
        led11 = 0;

        centiSegundos(i);
        led12 = 1;
        centiSegundos(i);
        led12 = 0;

        centiSegundos(i);
        led13 = 1;
        centiSegundos(i);
        led13 = 0;

        centiSegundos(i);

        //PUERTO C
        led14 = 1;
        centiSegundos(i);
        led14 = 0;

        centiSegundos(i);
        led15 = 1;
        centiSegundos(i);
        led15 = 0;

        centiSegundos(i);
        led16 = 1;
        centiSegundos(i);
        led16 = 0;

        centiSegundos(i);
        led17 = 1;
        centiSegundos(i);
        led17 = 0;

        centiSegundos(i);
        led18 = 1;
        centiSegundos(i);
        led18 = 0;


        centiSegundos(i);

        //PUERTO D
        led19 = 1;
        centiSegundos(i);
        led19 = 0;


        centiSegundos(i);
        led20 = 1;
        centiSegundos(i);
        led20 = 0;

        centiSegundos(i);
        led21 = 1;
        centiSegundos(i);
        led21 = 0;

        centiSegundos(i);
        led22 = 1;
        centiSegundos(i);
        led22 = 0;

        centiSegundos(i);
        led23 = 1;
        centiSegundos(i);
        led23 = 0;

        centiSegundos(i);
        led24 = 1;
        centiSegundos(i);
        led24 = 0;

        centiSegundos(i);
        led25 = 1;
        centiSegundos(i);
        led25 = 0;

        centiSegundos(i);

        //PUERTO E
        led26 = 1;
        centiSegundos(i);
        led26 = 0;

        centiSegundos(i);
        led27 = 1;
        centiSegundos(i);
        led27 = 0;

        centiSegundos(i);
        led28 = 1;
        centiSegundos(i);
        led28 = 0;
    }
}

void gruposde7(int x)
{
    for (int i = 0; i <= x; i++)
    {
        deciSegundos(1);
        // PUERTO A
        led1 = 1; 
        led2 = 1; 
        led3 = 1; 
        led4 = 1; 
        led5 = 1; 
        led6 = 1; 
        led7 = 1; 

        deciSegundos(1);
        led1 = 0; 
        led2 = 0; 
        led3 = 0; 
        led4 = 0; 
        led5 = 0; 
        led6 = 0; 
        led7 = 0; 

        deciSegundos(1);
        // PUERTO B
        led8 = 1; 
        led9 = 1; 
        led10 = 1;
        led11 = 1;
        led12 = 1;
        led13 = 1;
        led14 = 1;

        deciSegundos(1);
        led8 = 0; 
        led9 = 0; 
        led10 = 0;
        led11 = 0;
        led12 = 0;
        led13 = 0;
        led14 = 0;

        deciSegundos(1);
        // PUERTO C
        led15 = 1;
        led16 = 1;
        led17 = 1;
        led18 = 1;
        led19 = 1;
        led20 = 1;
        led21 = 1;

        deciSegundos(1);
        led15 = 0;
        led16 = 0;
        led17 = 0;
        led18 = 0;
        led19 = 0;
        led20 = 0;
        led21 = 0;

        deciSegundos(1);
        // PUERTO D
        led22 = 1;
        led23 = 1;
        led24 = 1;
        led25 = 1;
        led26 = 1;// PUERTO E
        led27 = 1;
        led28 = 1;

        deciSegundos(1);
        led22 = 0;
        led23 = 0;
        led24 = 0;
        led25 = 0;
        led26 = 0;// PUERTO E
        led27 = 0;
        led28 = 0;
    }
}