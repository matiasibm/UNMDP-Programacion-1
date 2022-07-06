#include <stdio.h>
#include <stdlib.h>
// Ingresar N números enteros, informar cuántas veces un número supera al anterior.

int main()
{
    int num, contador, anterior;

    //Ingreso numero
    printf("Ingrese un numero o 0 para terminar: "); scanf("%d", &num);
    anterior = -9999;
    contador = 0;
    while(num != 0){
        //Comparo si el numero que viene es mayor que el anterior y aumenta contador
        if(num > anterior){
            contador++;
        }
        //El numero que entro ahora es el anterior
        anterior = num;
        //Pido otro numero y repite
        printf("Ingrese un numero o 0 para terminar: "); scanf("%d", &num);
    }
    //Muetro cuantas veces un numero supera al anterior
    printf("%d veces supero al anterior", contador);

    return 0;
}
