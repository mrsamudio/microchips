/******************* Directivas-compilador.h *******************/

/* 
 * Programa: Directivas-compilador.h
 * Autor: Mario Roberto Samudio Martinez
 *
 * Descripcion: Archivo de cabecera para configurar los modulos
 * 		del PIC18F4550.
 *
 * Referencias: "PIC18 CONFIGURATION SETTINGS ADDENDUM.pdf",© 2005 Microchip Technology Inc.
 * 				https://www.microchip.com 
 */

/*	1.	96MHz PLL Prescaler:
	#Configuracion PLLDIV = opción

	#pragma config PLLDIV = 1  // No divide (4MHz input)
	#pragma config PLLDIV = 2  // Divide by 2 (8MHz input)
	#pragma config PLLDIV = 3  // Divide by 3 (12MHz input)
	#pragma config PLLDIV = 4  // Divide by 4 (16MHz input)
	#pragma config PLLDIV = 5  // Divide by 5 (20MHz input)
	#pragma config PLLDIV = 6  // Divide by 6 (24MHz input)
	#pragma config PLLDIV = 10 // Divide by 10 (40MHz input)
	#pragma config PLLDIV = 12 // Divide by 12 (48MHz input)
	*/
#pragma config PLLDIV = 1  // No divide (4MHz input)

/*	2.	CPU System Clock Postscaler:
	#Configuracion CPUDIV = opción

	#pragma config CPUDIV = OSC1_PLL2 //[OSC1/OSC2 Src: /1][96MHz PLL Src: /2]
	#pragma config CPUDIV = OSC2_PLL3 //[OSC1/OSC2 Src: /2][96MHz PLL Src: /3]
	#pragma config CPUDIV = OSC3_PLL4 //[OSC1/OSC2 Src: /3][96MHz PLL Src: /4]
	#pragma config CPUDIV = OSC4_PLL6 //[OSC1/OSC2 Src: /4][96MHz PLL Src: /6]
	*/
#pragma config CPUDIV = OSC1_PLL2 //[OSC1/OSC2 Src: /1][96MHz PLL Src: /2]

/*	3.	Full-Speed USB Clock Source Selection:
	#Configuracion USBDIV = opción

	#pragma config USBDIV = 1 //Clock source from OSC1/OSC2
	#pragma config USBDIV = 2 //Clock source from 96MHz PLL/2
	*/
// #pragma config USBDIV = 2 //Clock source from 96MHz PLL/2

/*	4.	Oscillator Selection bits:
	#Configuracion FOSC = opción

	#pragma config FOSC = XT_XT       //XT oscillator, XT used by USB
	#pragma config FOSC = XTPLL_XT    //XT oscillator, PLL enabled, XT used by USB
	#pragma config FOSC = ECIO_EC     //External clock, port function on RA6, EC used by USB
	#pragma config FOSC = EC_EC       //External clock, CLKOUT on RA6, EC used by USB
	#pragma config FOSC = ECPLLIO_EC  //External clock, PLL enabled, port function on RA6, EC used by USB
	#pragma config FOSC = ECPLL_EC    //External clock, PLL enabled, CLKOUT on RA6, EC used by USB
	#pragma config FOSC = INTOSCIO_EC //Internal oscillator, port function on RA6, EC used by USB
	#pragma config FOSC = INTOSC_EC   //Internal oscillator, CLKOUT on RA6, EC used by USB
	#pragma config FOSC = INTOSC_XT   //Internal oscillator, XT used by USB
	#pragma config FOSC = INTOSC_HS   //Internal oscillator, HS used by USB
	#pragma config FOSC = HS          //HS oscillator, HS used by USB
	#pragma config FOSC = HSPLL_HS    //HS oscillator, PLL enabled, HS used by USB
	*/
#pragma config FOSC = XTPLL_XT    //XT oscillator, PLL enabled, XT used by USB

/*	5.	Fail Safe Clock Monitor: (1363) unknown configuration setting/register (FCMEM = OFF) used (error)
	#Configuracion FCMEN = opción

	#pragma config FCMEN = OFF //Disabled
	#pragma config FCMEN = ON  //Enabled
	*/
#pragma config FCMEN = OFF //Disabled

/*	6.	Internal/External Switch Over:
	#Configuracion IESO = opción

	#pragma config IESO = OFF //Disabled
	#pragma config IESO = ON  //Enabled
	*/
#pragma config IESO = OFF //Disabled

/*	7.	Power Up Timer:
	#Configuracion PWRT = opción

	#pragma config PWRT = OFF //Disabled
	#pragma config PWRT = ON  //Enabled
	*/
#pragma config PWRT = ON  //Enabled

/*	8.1	Brown Out Reset:
	#Configuracion BOR = opción

	#pragma config BOR = OFF       //Disabled
	#pragma config BOR = SOFT      //Controlled by SBOREN
	#pragma config BOR = ON_ACTIVE //Enabled when the device is not in SLEEP, SBOREN bit is disabled
	#pragma config BOR = ON        //Enabled, SBOREN bit is disabled
	*/
#pragma config BOR = OFF       //Disabled

/*	8.2	Brown Out Voltage:
	#Configuracion BORV = opción

	#pragma config BORV = 46 //4.6V
	#pragma config BORV = 43 //4.3V
	#pragma config BORV = 28 //2.8V
	#pragma config BORV = 21 //2.1V
	*/
//#pragma config BORV = 46 //4.6V

/*	9.	USB Voltage Regulator Enable:
	#Configuracion VREGEN = opción

	#pragma config VREGEN = OFF //Disabled
	#pragma config VREGEN = ON  //Enabled
	*/
#pragma config VREGEN = OFF //Disabled

/*	10.1	Watchdog Timer:
	#Configuracion WDT = opción

	#pragma config WDT = OFF //HW Disabled - SW Controlled
	#pragma config WDT = ON  //HW Enabled - SW Disabled
	*/
#pragma config WDT = OFF //HW Disabled - SW Controlled

/*	10.2	Watchdog Postscaler:
	#Configuracion WDTPS = opción

	#pragma config WDTPS = 1     //1:1
	#pragma config WDTPS = 2     //1:2
	#pragma config WDTPS = 4     //1:4
	#pragma config WDTPS = 8     //1:8
	#pragma config WDTPS = 16    //1:16
	#pragma config WDTPS = 32    //1:32
	#pragma config WDTPS = 64    //1:64
	#pragma config WDTPS = 128   //1:128
	#pragma config WDTPS = 256   //1:256
	#pragma config WDTPS = 512   //1:512
	#pragma config WDTPS = 1024  //1:1024
	#pragma config WDTPS = 2048  //1:2048
	#pragma config WDTPS = 4096  //1:4096
	#pragma config WDTPS = 8192  //1:8192
	#pragma config WDTPS = 16384 //1:16384
	#pragma config WDTPS = 32768 //1:32768
	*/
//#pragma config WDTPS = 1     //1:1

/*	11.	MCLR Enable:
	#Configuracion MCLRE = opción

	#pragma config MCLRE = OFF //Disabled
	#pragma config MCLRE = ON  //Enabled
	*/
#pragma config MCLRE = OFF //Disabled

/*	12.	Low Power Timer1 Oscillator Enable:
	#Configuracion MCLPT1OSCLRE = opción

	#pragma config LPT1OSC = OFF //Timer1 oscillator configured for high power
	#pragma config LPT1OSC = ON  //Timer1 oscillator configured for low power
	*/
#pragma config LPT1OSC = OFF //Timer1 oscillator configured for high power

/*	13.	Port B A/D Enable:
	#Configuracion PBADEN = opción

	#pragma config PBADEN = OFF //PortB<4:0> pins are configured as digital I/O on RESET
	#pragma config PBADEN = ON  //PortB<4:0> pins are configured as analog input on RESET
	*/
#pragma config PBADEN = OFF //PortB<4:0> pins are configured as digital I/O on RESET

/*	14.	CCP2 Mux bit:
	#Configuracion CCP2MX = opción

	#pragma config CCP2MX = OFF //CCP2 input/output is multiplexed with RB3
	#pragma config CCP2MX = ON  //CCP2 input/output is multiplexed with RC1
	*/
//#pragma config CCP2MX = OFF //CCP2 input/output is multiplexed with RB3

/*	15.	Stack Overflow Reset:
	#Configuracion STVREN = opción

	#pragma config STVREN = OFF //Disabled
	#pragma config STVREN = ON  //Enabled
	*/
#pragma config STVREN = OFF //Disabled

/*	16.	Low Voltage ICSP:
	#Configuracion LVP = opción

	#pragma config LVP = OFF //Disabled
	#pragma config LVP = ON  //Enabled
	*/
#pragma config LVP = OFF //Disabled

/*	17.	Dedicated In-Circuit Debug/Programming Enable:
	#Configuracion ICPRT = opción

	#pragma config ICPRT = OFF //Disabled
	#pragma config ICPRT = ON  //Enabled
	*/
#pragma config ICPRT = OFF //Disabled

/*	18.	Extended Instruction Set Enable:
	#Configuracion XINST = opción

	#pragma config XINST = OFF //Disabled
	#pragma config XINST = ON  //Enabled
	*/
#pragma config XINST = OFF //Disabled


/*	19.	Background Debugger Enable:
	#Configuracion XINST = opción

	#pragma config DEBUG = OFF //Disabled
	#pragma config DEBUG = ON  //Enabled
	*/
#pragma config DEBUG = OFF //Disabled


/*    ***    PROTECCIONES    ***    *
				 x x
				  ^					*/

//Code Protection

/*	20.Code Protection Block 0:
	#Configuracion XINST = opción

	#pragma config CP0 = OFF //Disabled
	#pragma config CP0 = ON  //Enabled
	*/
#pragma config CP0 = OFF //Disabled

/*	21.	Code Protection Block 1:
	#Configuracion XINST = opción

	#pragma config CP1 = OFF //Disabled
	#pragma config CP1 = ON  //Enabled
	*/
#pragma config CP1 = OFF //Disabled

/*	22.	Code Protection Block 2:
	#Configuracion XINST = opción

	#pragma config CP2 = OFF //Disabled
	#pragma config CP2 = ON  //Enabled
	*/
#pragma config CP2 = OFF //Disabled

/*	23.	Code Protection Block 3:
	#Configuracion XINST = opción

	#pragma config CP3 = OFF //Disabled
	#pragma config CP3 = ON  //Enabled
	*/
#pragma config CP3 = OFF //Disabled

/*	24.	Boot Block Code Protection:
	#Configuracion XINST = opción

	#pragma config CPB = OFF //Disabled
	#pragma config CPB = ON  //Enabled
	*/
#pragma config CPB = OFF //Disabled

/*	25.	Data EEPROM Code Protection:
	#Configuracion XINST = opción

	#pragma config CPD = OFF //Disabled
	#pragma config CPD = ON  //Enabled
	*/
#pragma config CPD = OFF //Disabled


//Write Protection

/*	26.	Write Protection Block 0:
	#Configuracion XINST = opción

	#pragma config WRT0 = OFF //Disabled
	#pragma config WRT0 = ON  //Enabled
	*/
#pragma config WRT0 = OFF //Disabled

/*	27.	Write Protection Block 1:
	#Configuracion XINST = opción

	#pragma config WRT1 = OFF //Disabled
	#pragma config WRT1 = ON  //Enabled
	*/
#pragma config WRT1 = OFF //Disabled

/*	28.	Write Protection Block 2:
	#Configuracion XINST = opción

	#pragma config WRT2 = OFF //Disabled
	#pragma config WRT2 = ON  //Enabled
	*/
#pragma config WRT2 = OFF //Disabled

/*	29.	Write Protection Block 3:
	#Configuracion XINST = opción

	#pragma config WRT3 = OFF //Disabled
	#pragma config WRT3 = ON  //Enabled
	*/
#pragma config WRT3 = OFF //Disabled

/*	30.	Boot Block Write Protection:
	#Configuracion XINST = opción

	#pragma config WRTB = OFF //Disabled
	#pragma config WRTB = ON  //Enabled
	*/
#pragma config WRTB = OFF //Disabled

/*	31.	Configuration Register Write Protection:
	#Configuracion XINST = opción

	#pragma config WRTC = OFF //Disabled
	#pragma config WRTC = ON  //Enabled
	*/
#pragma config WRTC = OFF //Disabled

/*	32.	Data EEPROM Write Protection:
	#Configuracion XINST = opción

	#pragma config WRTD = OFF //Disabled
	#pragma config WRTD = ON  //Enabled
	*/
#pragma config WRTD = OFF //Disabled


//TABLE READ PROTECTION

/*	33.	Table Read Protection Block 0:
	#Configuracion XINST = opción

	#pragma config EBTR0 = OFF //Disabled
	#pragma config EBTR0 = ON  //Enabled
	*/
#pragma config EBTR0 = OFF //Disabled

/*	34.	Table Read Protection Block 1:
	#Configuracion XINST = opción

	#pragma config EBTR1 = OFF //Disabled
	#pragma config EBTR1 = ON  //Enabled
	*/
#pragma config EBTR1 = OFF //Disabled

/*	35.	Table Read Protection Block 2:
	#Configuracion XINST = opción

	#pragma config EBTR2 = OFF //Disabled
	#pragma config EBTR2 = ON  //Enabled
	*/
#pragma config EBTR2 = OFF //Disabled

/*	36.	Table Read Protection Block 3:
	#Configuracion XINST = opción

	#pragma config EBTR3 = OFF //Disabled
	#pragma config EBTR3 = ON  //Enabled
	*/
#pragma config EBTR3 = OFF //Disabled

/*	37.	Boot Block Table Read Protection:
	#Configuracion XINST = opción

	#pragma config EBTRB = OFF //Disabled
	#pragma config EBTRB = ON  //Enabled
	*/
#pragma config EBTRB = OFF //Disabled