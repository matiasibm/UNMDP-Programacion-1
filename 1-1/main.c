#include <stdio.h>
#include <stdlib.h>
//Dados N números enteros, calcular e informar:
//a) El máximo, qué lugar ocupa la primera aparición y cuántas ocurrencias tiene.
//b) El mínimo de los impares (informar si no existe)
//Ejemplo: N = 10, 78, 45, 80, 56, 80, 32, 90, 89, 90, 45
//a) 90 - 7º lugar - 2 ocurrencias
//b) 45
int main()
{
    int num, maximo, posicion, contador, i, cantNum, minImpar;

    printf("Ingrese cuantos numeros quiere cargar: "); scanf("%d", &cantNum);

    maximo = -9999;
    minImpar = 9999;
    posicion = -1;
    contador = 0;
    for(i = 1; i <= cantNum; i++){
        printf("Ingrese numero: "); scanf("%d", &num);
        if(num > maximo){
            maximo = num;
            posicion = i;
            contador = 1;
        }
        else if(maximo == num){
            contador++;
        }
        if(num % 2 != 0 && num < minImpar){
            minImpar = num;
        }
    }

    printf("\nMaximo: %d Posicion: %d Ocurrencias: %d\n", maximo, posicion, contador);

    if(minImpar == 9999)
        printf("No hay numeros impares\n");
    else
        printf("Minimo de impares: %d", minImpar);

    return 0;
}
