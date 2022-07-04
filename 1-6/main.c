#include <stdio.h>
#include <stdlib.h>
//Se conoce el saldo inicial de una cuenta bancaria y una serie de movimientos realizados, por cada
//uno:
// - código de movimiento (D=depósito, R=retiro ó F= fin de datos).
// - monto
//Escribir un programa que ingrese dichos datos y determine el saldo exacto de la cuenta después de
//procesar las transacciones. Al final del proceso indique cuantas veces no pudo retirar dinero por
//insuficiencia de fondos.
int main()
{
    int saldoCuenta, numeroIngresado, saldoInsuf;
    char operacion;

    //Ingreso saldo incial
    printf("Ingrese el dinero de la cuenta: "); scanf("%d", &saldoCuenta);
    //Operacion a realizar
    saldoInsuf = 0;
    while(operacion != 'f'){
        printf("\nIngrese opcion\nd = deposito\nr = retiro\nf = fin\n"); fflush(stdin); scanf("%c", &operacion);
        //Depositos
        if(operacion == 'd'){
            printf("Monto: "); scanf("%d", &numeroIngresado);
            saldoCuenta += numeroIngresado;
        }
        //Retiros
        else if(operacion == 'r'){
            printf("Monto "); scanf("%d", &numeroIngresado);
            //Comprueba y suma las veces que no puede retirar
            if(saldoCuenta < numeroIngresado){
                printf("\nFondos insuficientes\n");
                saldoInsuf++;
            }
            //Saldo despues de retirar
            else
                saldoCuenta-= numeroIngresado;
        }
        //Saldo despues de la operacion
        printf("\nSu saldo es: %d\n", saldoCuenta);
    }
    //Comprueba si tuvo saldo insuficiente y lo muestra
    if(saldoInsuf > 0)
        printf("\nUsted no pudo retirar %d veces por saldo insuficiente\n", saldoInsuf);

    return 0;
}
