//LCD Functions Developed by electroSome

#define RS LATDbits.LATD2
#define EN LATDbits.LATD3
#define D4 LATDbits.LATD4
#define D5 LATDbits.LATD5
#define D6 LATDbits.LATD6
#define D7 LATDbits.LATD7

#define _XTAL_FREQ 4000000

void Lcd_Port(char a)
{
    if(a & 1)
        D4 = 1;
    else
        D4 = 0;

    if(a & 2)
        D5 = 1;
    else
        D5 = 0;

    if(a & 4)
        D6 = 1;
    else
        D6 = 0;

    if(a & 8)
        D7 = 1;
    else
        D7 = 0;
}
void Lcd_Cmd(char a)
{
    RS = 0;             // => RS = 0
    Lcd_Port(a);
    EN  = 1;             // => E = 1
        __delay_ms(4);
        EN  = 0;             // => E = 0
}

Lcd_Clear()
{
    Lcd_Cmd(0);
    Lcd_Cmd(1);
}

void Lcd_Set_Cursor(char a, char b)
{
    char temp,z,y;
    if(a == 1)
    {
      temp = 0x80 + b - 1;
        z = temp>>4;
        y = temp & 0x0F;
        Lcd_Cmd(z);
        Lcd_Cmd(y);
    }
    else if(a == 2)
    {
        temp = 0xC0 + b - 1;
        z = temp>>4;
        y = temp & 0x0F;
        Lcd_Cmd(z);
        Lcd_Cmd(y);
    }
}

void Lcd_Init()
{
  Lcd_Port(0x00);
   __delay_ms(20);
  Lcd_Cmd(0x03);
    __delay_ms(5);
  Lcd_Cmd(0x03);
    __delay_ms(11);
  Lcd_Cmd(0x03);
  /////////////////////////////////////////////////////
  Lcd_Cmd(0x02);
  Lcd_Cmd(0x02);
  Lcd_Cmd(0x08);
  Lcd_Cmd(0x00);
  Lcd_Cmd(0x0C);
  Lcd_Cmd(0x00);
  Lcd_Cmd(0x06);
}

void Lcd_Write_Char(char a)
{
   unsigned char temp,y;
   temp = (unsigned char) a&0x0F;
   y = (unsigned char) a&0xF0;
   RS = 1;             // => RS = 1
   Lcd_Port(y>>4);             //Data transfer
   EN = 1;
   __delay_us(40);
   EN = 0;
   Lcd_Port(temp);
   EN = 1;
   __delay_us(40);
   EN = 0;
}

void Lcd_Write_String(char *a)
{
    int i;
    for(i=0;a[i]!='\0';i++)
       Lcd_Write_Char(a[i]);
}

void Lcd_Shift_Right()
{
    Lcd_Cmd(0x01);
    Lcd_Cmd(0x0C);
}

void Lcd_Shift_Left()
{
    Lcd_Cmd(0x01);
    Lcd_Cmd(0x08);
}


//Prueba de metodo para caracteres personalizados
void Lcd_Print_Char(char data)  //Send 8-bits through 4-bit mode
{
   char Lower_Nibble,Upper_Nibble;
   Lower_Nibble = data&0x0F;
   Upper_Nibble = data&0xF0;
   RS = 1;             // => RS = 1
   Lcd_Port(Upper_Nibble>>4);             //Send upper half by shifting by 4
   EN = 1;
   for(int i=2130483; i<=0; i--)  NOP(); 
   EN = 0;
   Lcd_Port(Lower_Nibble); //Send Lower half
   EN = 1;
   for(int i=2130483; i<=0; i--)  NOP();
   EN = 0;
}


const unsigned short Custom_Char5x8[] = {
  0b01110,0b01110,0b00100,0b01110,0b10101,0b00100,0b01010,0b01010, // Code for CGRAM memory space 1
  0b00000,0b00000,0b01010,0b00100,0b00100,0b10001,0b01110,0b00000, // Code for CGRAM memory space 2
  0b00100,0b01110,0b11111,0b11111,0b01110,0b01110,0b01010,0b01010, // Code for CGRAM memory space 3
  0b01110,0b10001,0b10001,0b11111,0b11011,0b11011,0b11111,0b00000, // Code for CGRAM memory space 4
  0b01110,0b10000,0b10000,0b11111,0b11011,0b11011,0b11111,0b00000, // Code for CGRAM memory space 5
  0b00000,0b10001,0b01010,0b10001,0b00100,0b01110,0b10001,0b00000, // Code for CGRAM memory space 6
  0b00000,0b00000,0b01010,0b10101,0b10001,0b01110,0b00100,0b00000, // Code for CGRAM memory space 7
  0b11111,0b11111,0b10101,0b11011,0b11011,0b11111,0b10001,0b11111  // Code for CGRAM memory space 8
};



void customsChars()
{
        //*** Load custom char into the CGROM***//////
  Lcd_Cmd(0x04);   // Set CGRAM Address
  Lcd_Cmd(0x00);   // .. set CGRAM Address
  for (int i = 0; i <= 63 ; i++) Lcd_Print_Char(Custom_Char5x8[i]);
  Lcd_Cmd(0);      // Return to Home
  Lcd_Cmd(2);      // .. return to Home
  //*** Loading custom char complete***//////
}