#include <stdio.h>
#include <stdlib.h>
//Ej 7) Dado un conjunto de alumnos, no se sabe cuántos son, de cada uno de ellos se conoce:
//- Nombre (‘***’ indica fin de datos)
//- Nota1, Nota2 y Nota3
//Ingresar la información e informar:
//a) El promedio de cada alumno y su condición:
//− ‘Aprobado’ si su promedio es mayor o igual a 4
//− ‘Desaprobado’ si su promedio es menor a 4
//b) Porcentaje de alumnos Aprobados
int main()
{
    int num, sumaAprob, cantAlumnos, i, nota, sumaNota;
    float promedio, porcAprob;
    char alumno, situacion;

    cantAlumnos = 0;
    sumaAprob = 0;
    do{
        //Decide si ingresa o termina el programa
        printf("1-Ingresar alumno\n0-para terminar\n");
        scanf("%d", &num);
        //Si ingresa, pide nombre de alumno y ultimos 3 parciales
        if(num == 1){
            printf("Nombre: "); fflush(stdin); scanf("%c", &alumno);
            //Ingreso y suma de los 3 parciales
            sumaNota = 0;
            for(i = 0;i < 3; i++){
                printf("Nota: "); scanf("%d", &nota);
                sumaNota+= nota;
            }
            //Calcula promedio del alumno
            promedio = sumaNota / 3;
            //Aprobado (suma cantidad de aprobados)
            if(promedio >= 4){
                situacion = 'A';
                sumaAprob++;
            }
            //Desaprobado
            else
                situacion = 'D';
            //Salida situacion para c / alumno
            printf("\n\tAlumno: %c\n\tPromedio: %g\n\tCondicion: %c\n", alumno, promedio, situacion);
            //Suma en 1 la cantidad de alumnos cargados
            cantAlumnos++;
        }
    }
    while(num != 0);
    //Porcentaje de alumnos aprobados
    porcAprob = sumaAprob * 100 / cantAlumnos;
    //Salida porcentaje de aprobados
    printf("\t\nPorcentaje de alumnos Aprobados: %%%g", porcAprob);

    return 0;
}
