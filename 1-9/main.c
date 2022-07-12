#include <stdio.h>
#include <stdlib.h>
// Una empresa de autos de alquiler posee N vehículos y ha registrado la siguiente información de los
//viajes realizados, por cada uno de ellos:
// Patente
// Total de litros de combustible consumidos
//Y por cada viaje realizado
// - Kilómetros recorridos. (0 indica fin de datos).
//Se pide ingresar los datos e informar:
//a) Por cada vehículo el consumo que tuvo (cantidad de litros por km. recorrido)
//b) Patente del vehículo que más viajes hizo.
//c) Total de litros consumidos por el auto que hizo la menor cantidad de kms.

int main()
{
    int  selecion, i, viajesRealiz, viajeMayor;
    char patente, patenteMayorViajes;
    float combustibleVehic, consumoVehic, kmRecorridos, kmRecorridosFinal, kmMenorRecorrido, totalConsumoMenorKm;

    //Ingreso para comenzar
    printf("1-Vehiculo\n2-Finalizar\n"); scanf("%d", &selecion);

    viajeMayor = 0;
    totalConsumoMenorKm = 0;
    while(selecion != 2){
            //Ingreso de patente ,combustible consumido y cant de viajes por vehiculo
            printf("\n\tIngrese patente: "); fflush(stdin); scanf("%c", &patente);
            printf("\tIngrese combustible consumido: "); scanf("%f", &combustibleVehic);
            printf("\tIngrese cantidad de viajes realizados: "); scanf("%d", &viajesRealiz);
                //Vehiculo con mas cantidad de viajes
                if(viajesRealiz > viajeMayor){
                viajeMayor = viajesRealiz;
                patenteMayorViajes = patente;
                }
            i = 1;
            kmRecorridosFinal = 0;
            kmMenorRecorrido = 9999;
            for(i = 1; i <= viajesRealiz; i++){
                //Ingreso de kilometros recorridos segun cant de viajes
                printf("\tIngrese Kilometros recorridos viaje %d: ", i); scanf("%f", &kmRecorridos);
                kmRecorridosFinal+= kmRecorridos;
                //Consumo vehiculo con menor cant de km
                if(kmRecorridosFinal < kmMenorRecorrido){
                    kmMenorRecorrido = kmRecorridosFinal;
                    totalConsumoMenorKm = combustibleVehic;
                }
            }
            //Calculo de consumo por vehiculo
            consumoVehic =  (combustibleVehic / kmRecorridosFinal ) * 100;
            //Salida patente y consumo de cada vehiculo
            printf("\n\tPatente: %c\n\tConsumo x km: %.2g\n", patente, consumoVehic);
            printf("1-Vehiculo\n2-Finalizar\n"); scanf("%d", &selecion);
        }

    //Salida patente que mas viajes hizo
    printf("Patente que mas viajes hizo: %c\n", patenteMayorViajes);
    //Salida consumo vehiculo con menor cant de km
    printf("Consumo vehiculo con menor km recorrido: %g\n",totalConsumoMenorKm);

    return 0;
}
