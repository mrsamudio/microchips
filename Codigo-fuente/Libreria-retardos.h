/*  *******     Libreria-retardos.h *******     */

/* 
 * Programa: Libreria-retardos.h
 * Autor: Mario Roberto Samudio Martinez
 *
 * Descripcion: Archivo de cabecera para configurar los retardos
 *              del PIC18F4550 dependiendo de la velocidad del cristal
 *              interno o externo.
 * 
 */

#define _XTAL_FREQ 48000000

void retardo()
{
    int i, j;
    for(i=0;i<5000;i++)
    {
        for(j=0;j<2;j++)
        {
            /* Well its Just a Timer */
        }    
    }   
}

// Metodo para ingresar retardos en centiSegundos 1x10^(-2)
void centiSegundos(int x)
{
    for (int j = 0; j < x; j++)
        __delay_us(10000);
}

// Metodo para ingresar retardos en deciSegundos 1x10^(-1)
void deciSegundos(int x)
{
    for (int j = 0; j < (x*10); j++)
    {
        __delay_ms(10);
    }
}

// Metodo para ingresar retardos en segundos
void retardoSegundos(int x)
{
    for (int j = 0; j < (x*100); j++)
        __delay_ms(10);
}

// Metodo para ingresar retardos en minutos
void retardoMinutos(int x)
{
    for (int i = 0; i < (x*6000); i++)
    {
        __delay_ms(10);
    }
}

//Metodo para ingresar retardos en horas
void horas(int x)
{
    for (int j = 0; j < (x*360000); j++)
    {
        __delay_ms(10);
    }
}


// ¿Cómo seria con una función recursiva????
// (X(X+1))/2

/*
int segundos(int x)
{
    return(x*segundos(x+1));
}
*/