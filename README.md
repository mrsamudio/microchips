

###Compilar con xc8
Para compilar el código con xc8 así:
```
xc8 --chip=18F4550 programa-principal.c -Eerrores-compilacion.txt --time
```
otras opciones:
    --ERRATA=none
    --errors=100

###.hex al pic
Para pasar el programa .hex al microcontrolador así:

*Borrar el contenido programado.
```
pk2cmd -P PIC18F4550 -X -E
```
*Programar el microcontrolador con el archivo .hex
```
pk2cmd -P PIC18F4550 -F prueba.hex -X -M
```

*Verificar si el archivo .hex se programó correctamente.
```
pk2cmd -P PIC18F4550 -Y -F prubea.hex
```

