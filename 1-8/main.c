#include <stdio.h>
#include <stdlib.h>
// Dado un conjunto de números leídos desde un archivo, informar si están ordenados en forma
//ascendente.

int main()
{
    int num, anterior, ascendente;

    //Ingreso numero
    printf("Ingrese un numero o 0 para terminar: "); scanf("%d", &num);

    anterior = -9999;
    //Ascendente esta en verdadero
    ascendente = 1;
    while(num != 0){
        //Comparo si el anterior es mayor al numero que entro, si es mayor, ascendente ahora es falso
        if(anterior > num){
            ascendente = 0;
        }
        //Ahora el numero que entro es el anterior
        anterior = num;
        //Pido numero y repite
        printf("Ingrese un numero o 0 para terminar: "); scanf("%d", &num);

    }
    printf("1 forma ascendente\n0 si no lo estan\nResultado: %d", ascendente);

    return 0;
}
