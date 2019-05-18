/*  ******* programa-principal.c *******  */
/* 
 * Programa: programa-principal.c
 * Autor: Mario Roberto Samudio Martinez
 *
 * Descripcion: display lcd en el PIC18F4550.
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


int main()
{
  
  IRCF2 = 1; IRCF1 = 1; IRCF0 = 0; // ejemplo a 4mhz 
  int a;
  TRISA = 0X00;
  TRISB = 0X00;
  TRISC = 0X00;
  TRISE = 0X00;
  TRISD = 0x00;
  Lcd_Init();
  while(1)
  {
    Lcd_Clear();
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String((char *) "libreria lcd par");
    Lcd_Set_Cursor(2,1);
    Lcd_Write_String((char *) "compilador xc8");
    __delay_ms(2000);
    Lcd_Clear();
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String((char *) "desarrollado por");
    Lcd_Set_Cursor(2,1);
    Lcd_Write_String((char *) "ingsamudio");
    __delay_ms(2000);
    Lcd_Clear();
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String((char *) "https://ingsamudio.co");

    for(a=0;a<15;a++)
    {
        __delay_ms(300);
        Lcd_Shift_Left();
    }

    for(a=0;a<15;a++)
    {
        __delay_ms(300);
        Lcd_Shift_Right();
    }

    Lcd_Clear();
    Lcd_Set_Cursor(1,1);
    customsChars();
    Lcd_Print_Char(0); // Display Custom Character 0
    Lcd_Print_Char(1); // Display Custom Character 1
    Lcd_Print_Char(2); // Display Custom Character 2
    Lcd_Print_Char(3); // Display Custom Character 3
    Lcd_Print_Char(4); // Display Custom Character 4
    Lcd_Print_Char(5); // Display Custom Character 5
    Lcd_Print_Char(6); // Display Custom Character 6
    Lcd_Print_Char(7); // Display Custom Character 7

    Lcd_Print_Char(0b11100000); //binary value of alpha from data-sheet
    __delay_ms(2000);
    Lcd_Clear();

    Lcd_Set_Cursor(2,1);
    Lcd_Write_Char('e');
    Lcd_Write_Char('S');
    __delay_ms(2000);
  }
  return 0;
}