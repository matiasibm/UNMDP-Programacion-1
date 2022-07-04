#include <stdio.h>
#include <stdlib.h>
#define SB 15000
//Se debe liquidar el sueldo de N emple se sabe el nombre y la antigüedad en años. ados, de ellos
//Todos parten de un básico de $15000 y la antigüedad se calcula según la siguiente tabla:
//- Hasta 5 años …………. 5%
//- De 6 a 10 años……….. 8%
//- De 11 a 15 años…….. 12%
//- Más de 15 años …… 20%
//Además se descuenta un 11% por cargas sociales y $500 por seguro obligatorio.
//Calcular e informar:
//a) Nombre y sueldo de cada empleado.
//b) Nombre del empleado que más cobra (suponer que es único).
//c) Monto del sueldo promedio.

int main()
{
    int cantEmpleados, aniosTrabajados, i;
    char nombreEmpleado, nombreSueldMaximo;
    float sueldoBruto, promedioSueldos, sueldoNeto, totalSueldos, sueldoMayor;

    printf("Ingrese cantidad de empleados: "); scanf("%d", &cantEmpleados);

    //Error carga de empleados
    if(cantEmpleados == 0)
        printf("Ingreso una cantidad incorrecta, vuelva a ingresar");
    else{
        totalSueldos = 0;
        sueldoMayor = 0;
        for(i = 0; i < cantEmpleados; i++){
        //Ingreso nombre empleado y anos trabajados
        printf("Ingrese nombre de empleado: "); fflush(stdin); scanf("%c", &nombreEmpleado);
        printf("Ingrese anios trabajados: "); scanf("%d", &aniosTrabajados);
        //Calculo sueldo bruto segun antiguedad
        if(aniosTrabajados <= 5)
            sueldoBruto = (SB + (SB * 0.05));
        else if(aniosTrabajados > 5 && aniosTrabajados <= 10)
            sueldoBruto = (SB + (SB * 0.08));
        else if(aniosTrabajados > 10 && aniosTrabajados <= 15)
            sueldoBruto = (SB + (SB * 0.12));
        else
            sueldoBruto = (SB + (SB * 0.20));
        //Calculo sueldo neto
        sueldoNeto = sueldoBruto - 500 - (sueldoBruto * 0.11);
        //Empleado que mas cobra
        if(sueldoNeto > sueldoMayor){
            sueldoMayor = sueldoNeto;
            nombreSueldMaximo = nombreEmpleado;
        }
        //Suma de sueldos
        totalSueldos+= sueldoNeto;
        //Nombre y sueldo de cada empleado
        printf("Empleado: %c\nSueldo: %g \n", nombreEmpleado, sueldoNeto);
        }

    //Promedio sueldos
    promedioSueldos = totalSueldos / cantEmpleados;
    printf("El promedio de sueldos es %g\n", promedioSueldos);
    //Empleado mayor sueldo
    printf("El emplado que mas cobra es: %c\n", nombreSueldMaximo);
    }

    return 0;
}
