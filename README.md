README..md

###Proyecto Electiva profesional II

###Conmexión serial arduino y pic 18F4550

Se logró realizar la conexión serial comprobando la recepción del dato al microcontrolador pic 18F4550

```
vídeo de funcionamiento
https://youtu.be/fuSoBGbVgzk
```



###Compilar con xc8
Para compilar el código con xc8 en el pic 18f4550 es necesario ingresar la siguiente instrucción así:
```
xc8 --chip=18F4550 programa-principal.c -Eresultado-compilacion.txt --time
```

otras opciones:

    --ERRATA=none
    --errors=100

###.hex al pic

Para pasar el programa .hex al microcontrolador debe instalarse el programa pk2cmd y una vez instalado ingresar la instrucción así:

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

