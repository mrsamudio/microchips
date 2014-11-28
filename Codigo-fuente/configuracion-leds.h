/*	************	configuracion-leds.h	****************	*/

/* 
 * Programa: configuracion-leds.h
 * Autor: Mario Roberto Samudio Martinez
 *
 * Descripcion: Archivo de cabecera para configurar los leds conectados al
 *		PIC18F4550.
 * 
 */

//PUERTO A
#define buzzer LATAbits.LATA0
#define led1 LATAbits.LATA1
#define led2 LATAbits.LATA2
#define led3 LATAbits.LATA3
#define led4 LATAbits.LATA4
#define led5 LATAbits.LATA5

//PUERTO B
#define led6 LATBbits.LATB0
#define led7 LATBbits.LATB1
#define led8 LATBbits.LATB2
#define led9 LATBbits.LATB3
#define led10 LATBbits.LATB4
#define led11 LATBbits.LATB5
#define led12 LATBbits.LATB6
#define led13 LATBbits.LATB7

//PUERTO C
#define led14 LATCbits.LATC0
#define led15 LATCbits.LATC1
#define led16 LATCbits.LATC2
 //DATOS PARA LAS SALIDAS USB
	// #define led17 LATCbits.LATC4
	// #define led18 LATCbits.LATC5
#define led17 LATCbits.LATC6
#define led18 LATCbits.LATC7

//PUERTO D
#define led19 LATDbits.LATD0
#define led20 LATDbits.LATD1
#define pulsador RD2 //LATDbits.LATD2
#define led21 LATDbits.LATD3
#define led22 LATDbits.LATD4
#define led23 LATDbits.LATD5
#define led24 LATDbits.LATD6
#define led25 LATDbits.LATD7

//PUERTO E
#define led26 LATEbits.LATE0
#define led27 LATEbits.LATE1
#define led28 LATEbits.LATE2
// #define led32 LATEbits.LATE3