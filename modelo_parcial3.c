/*
La Universidad desea estudiar la cantidad de alumnos inscriptos en el 
presente año, para lo cual lleva registro de la siguiente información: 

. Numero de Departamento (int 1..8)
. Código de Especialidad ( char A, B o C) 
. Cantidad de alumnos (int >=0)

Finalizando el ingreso de datos al digitar como nÚmero de departamento el  99.

Determinar e informar:
a) El porcentaje de alumnos inscriptos en el departamento 3 sobre el total de inscriptos.
b) El promedio de alumnos inscriptos en la especialidad B del  departamento número 7 sobre el total de dicho departamento. 
c) El número de departamento y especialidad con menor cantidad de  inscriptos de toda la universidad (el menor es único).
Se debe validar el número de departamento y de especialidad no permitiendo  el ingreso de datos fuera de los establecidos, y la cantidad de alumnos no debe ser menor a cero.
*/
#include<stdio.h>
#include<ctype.h>

int main() {
    int nDepartamento, cantAlumnos, bandCantidad = 0, deptoMenorCant = 0, codMenorCant = 0, total = 0, dpto3 = 0, dpto7B = 0;
    int codA = 0, codB = 0, codC = 0, dpto7 = 0, cantMenor;
    float promedioB7 = 0, porcentaje;
    char codEspecialidad;

    printf("Ingrese el numero de departamento (del 1 al 8 - 99 para finalizar): ");
    scanf("%d", &nDepartamento);

    while (nDepartamento != 99) {
        if (nDepartamento >= 1 && nDepartamento <= 8) {
            do {
                printf("Ingrese el codigo de especialidad (A, B o C): ");
                fflush(stdin);
                scanf("%c", &codEspecialidad);
            } while (toupper(codEspecialidad) != 'A' && toupper(codEspecialidad) != 'B' && toupper(codEspecialidad) != 'C');

            do {
                printf("Ingrese la cantidad de alumnos (mayor a 0): ");
                scanf("%d", &cantAlumnos);
            } while (cantAlumnos <= 0);

            if (toupper(codEspecialidad) == 'A') { 
                codA += cantAlumnos;
            }

            if (toupper(codEspecialidad) == 'B') { 
                codB += cantAlumnos;
            }

            if (toupper(codEspecialidad) == 'B' && nDepartamento == 7) { 
                dpto7B += cantAlumnos;
            }

            if (toupper(codEspecialidad) == 'C') { 
                codC += cantAlumnos;
            }

            if (nDepartamento == 3) {
                dpto3 += cantAlumnos;
            }

            if (nDepartamento == 7 && codEspecialidad != 'B') {
                dpto7 += cantAlumnos;
            }

            if (bandCantidad == 0 || cantMenor > cantAlumnos) {
                bandCantidad = 1;
                deptoMenorCant = nDepartamento;
                codMenorCant = codEspecialidad;
                cantMenor = cantAlumnos;
            }

            
            total += cantAlumnos;
        }


        printf("Ingrese el numero de departamento (del 1 al 8 - 99 para finalizar): ");
        scanf("%d", &nDepartamento);
    }

    porcentaje = ((float)dpto3 / total) * 100.;
    promedioB7 = (float)dpto7B / dpto7;
    printf("El porcentaje de alumnos inscriptos en el departamento 3 es: %%%.2f. %d sobre %d\n", porcentaje, dpto3, total);
    printf("El promedio de alumnos inscriptos en la especialidad B del departamento numero 7 es: %.2f\n", promedioB7);
    printf("Departamento con menos inscriptos: %d\nEspecialidad con menos inscriptos: %c\n", deptoMenorCant, codMenorCant);
    printf("\nFinalizando...");
    return 0;
}


// int nDepartamento, cantAlumnos, band = 0, deptoMenorCant, total = 0, dpto3 = 0;
//     float promedioB7 = 0;
//     char codEspecialidad;

//     printf("Ingrese el numero de departamento (del 1 al 8 - 99 para finalizar): ");
//     scanf("%d", &nDepartamento);

//     while (nDepartamento != 99) {
//         if (nDepartamento >= 1 && nDepartamento <= 8) {
//             do {
//                 printf("Ingrese el codigo de especialidad (A, B o C): ");
//                 fflush(stdin);
//                 scanf("%c", &codEspecialidad);
//             } while (toupper(codEspecialidad) != 'A' && toupper(codEspecialidad) != 'B' && toupper(codEspecialidad) != 'C');

//             do {
//                 printf("Ingrese la cantidad de alumnos inscriptos: ");
//                 scanf("%d", &cantAlumnos);
//             } while (cantAlumnos <= 0);
//             total += cantAlumnos;
            
//             if (nDepartamento == 3) {
//                 dpto3 += cantAlumnos;
//             }

//             if (nDepartamento == 7) {
//                 if (toupper(codEspecialidad) == 'B') {
                    
//                 }
//             }
//         }
//         else {
//             printf("Nro de departamento invalido...\n");
//         }
//         printf("Ingrese el numero de departamento (del 1 al 8 - 99 para finalizar): ");
//         scanf("%d", &nDepartamento);
//     }