#include <stdio.h>
#include <stdlib.h>
// Ingresar N números enteros, informar cuántas veces un número supera al anterior.

int main()
{
    int num, contador, i, anterior;

    //Ingreso numero
    printf("Ingrese un numero o 0 para terminar: "); scanf("%d", &num);
    //Asigo a anterior ese numero que entra
    anterior = num;
    contador = 0;
    while(num != 0){
        printf("Ingrese un numero o 0 para terminar: "); scanf("%d", &num);
        i++;
        //Comparo si el numero que viene es mayor que el anterior,si es asi, asigno y cuento
        if(num > anterior){
            anterior = num;
            contador++;
        }
    }
    printf("%d", contador);
    return 0;
}
