#include <stdio.h>
#include <stdlib.h>
//Ingresar N n�meros enteros (ordenados en forma descendente), informar cual es la m�xima
//diferencia entre dos n�meros consecutivos y qu� posici�n ocupa ese par de n�meros dentro de la
//secuencia.
//Ejemplo: 25 19 11 9 3 -3, la m�xima diferencia es 8 y corresponde al par 2
//Nota: La diferencia se calcula sobre un par de n�meros, por lo tanto deben estar en memoria dos valores
//consecutivos (Pri y Seg), que se actualizan en cada repetici�n.
int main()
{
    int diferencia, primero, segundo, num, maxDif, posicion, i;

    printf("Ingrese numero: "); scanf("%d", &num);

    maxDif = 0;
    diferencia = 0;
    primero = 0;
    segundo = 0;
    //Variable que va controlando la posicion de la maxima diferencia
    i = 0;
    while(num != 0){
        segundo = num;
        //Resto del primero con el segundo
        diferencia = primero - segundo;
        //Si la diferencia es mayor a la maxima asigno y marco posicion
            if(diferencia > maxDif){
                maxDif = diferencia;
                posicion = i;
            }
        i++;
        primero = num;
        printf("Ingrse numero: "); scanf("%d", &num);
    }

    printf("\nMaxima diferencia: %d\nCorresponde al par: %d\n", maxDif, posicion);

    return 0;
}
