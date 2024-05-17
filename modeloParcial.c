// PROGRAMACION INICIAL  -  Ejercicio tipo  1er parcial

/*

Se procesan las altas de ingresantes a Ingeniería.

Por cada inscripto se ingresa:

- DNI (7 u 8 dígitos)

- Carrera (char: I informática, E electrónica, C civil, M mecánica)

- Edad (>=15 y <=85)

- 10 notas correspondiente a las notas de evaluaciones obtenidas en el curso de ingreso (cada una entre 0 y 10)
La carga de inscripciones finaliza con un DNI igual a 0.

Todos los datos de ingreso deben estar validados.

Se pide:

    a) Mostar la cantidad de inscriptos separados por rango etario:

        • < a 18

        • entre 18 y <25

        • entre 25 y <40

        • >= a 40

    b) Indicar si alguna carrera no tuvieron inscriptos.

    c) Mostrar el mayor promedio obtenido, con el DNI del alumno.

    d) Mostrar para cada alumno el DNI y el promedio de sus notas.
*/

#include<stdio.h>
#include<ctype.h>

int main() {
    int edad, dni, nota, cantMen18 = 0, cantE18y25 = 0, cantE25y40 = 0, cantM40 = 0, dniMayorPromedio, contInf = 0, contMec = 0, contCiv = 0, contElec = 0, suma = 0, bandCarrera = 0, band = 0, nulo = 0;
    float promedio, mayorProm;
    char carrera;

    do {
        fflush(stdin);
        printf("Ingresar el DNI del alumno (0 para finalizar): ");
        scanf("%d", &dni);

        // while(dni != 0) {
        //     while (dni > 1000000 && dni < 99999999) {
        //         printf("Ingrese que carrera cursa el alumno (I informática, E electrónica, C civil, M mecánica): ");
        //         fflush(stdin);
        //         scanf("%c", &carrera);

        //         if (carrera == 'i' || carrera == 'e' || carrera == 'm' || carrera == 'c') {
        //             bandCarrera = 1;
        //         }
        //         else {
        //             printf("Codigo de carrera invalido.\n");
        //         }

        //         while (bandCarrera == 1) {

        //         }
        //     }
        //     printf("DNI invalido. Debe tener entre 7 y 8 digitos.\n");
        //     printf("Ingresar el DNI del alumno (0 para finalizar): \n");
        //     scanf("%d", &dni);
        // }

        

        if ((dni < 1000000 || dni > 99999999) && dni != 0) {
            printf("DNI invalido. Debe tener entre 7 y 8 digitos.\n");
        }
        else {
            printf("Ingrese que carrera cursa el alumno (I informática, E electrónica, C civil, M mecánica): ");
            fflush(stdin);
            scanf("%c", &carrera);
            if (tolower(carrera) == 'i' || tolower(carrera) == 'c' || tolower(carrera) == 'm' || tolower(carrera) == 'e' ) {

                if (tolower(carrera) == 'i')
                    contInf++;
                if (tolower(carrera) == 'e')
                    contElec++;
                if (tolower(carrera) == 'c')
                    contCiv++;
                if (tolower(carrera) == 'm')
                    contMec++;

                printf("Ingrese la edad del alumno: ");
                scanf("%d", &edad);
                if (edad < 15 || edad > 85) {
                    printf("El alumno no puede ser menor a 15 o mayor a 85 anios de edad");
                }
                else {
                    if (edad < 18)
                        cantMen18++;
                    if (edad > 18 && edad < 25)
                        cantE18y25++;
                    if (edad > 25 && edad < 40)
                        cantE25y40++;
                    if (edad >= 40) 
                        cantM40++;
                    
                    fflush(stdin);

                    for(int i = 0; i < 10; i++) {
                        fflush(stdin);
                        printf("Ingrese 10 notas para el alumno: ");
                        scanf("%d", &nota);

                        if (nota > 10 || nota < 0){
                            printf("Ingrese una nota valida.\n");
                            i--;
                        }
                        else {
                            suma += nota;
                        }
                    }
                    promedio = suma / 10;
                    if (band == 0 || mayorProm < promedio) {
                        band = 1;
                        mayorProm = promedio;
                        dniMayorPromedio = dni;
                    }

                    nulo = 1;
                }
                
            }
            else {
                printf("Error en el ingreso de la carrera.\n");
            }
        }
        
        if(dni != 0 && carrera != 'e' && carrera != 'i' && carrera != 'm' && carrera != 'c') {
            printf("Punto D\n");
            printf("El alumno con DNI: %d tiene un promedio de: %.2f\n", dni, promedio);
        }
        
    } while (dni != 0);

    
    if (nulo > 0) {
        printf("Punto A\n");
        printf("Cantidad de inscriptos por rango etario\n <18: %d\nentre 18 y 25: %d\nentre 25 y 40: %d\nmayores a 40: %d\n", cantMen18, cantE18y25, cantE25y40, cantM40);
        printf("\nPunto B\n");
        if (contCiv < 1)
            printf("La carrera de Ingenieria Civil no tiene inscriptos.\n");
        if (contElec < 1)
            printf("La carrera de Ingenieria Electronica no tiene inscriptos.\n");
        if (contInf < 1)
            printf("La carrera de Ingenieria Informatica no tiene inscriptos.\n");
        if (contMec < 1)
            printf("La carrera de Ingenieria Mecanica no tiene inscriptos.\n");

        printf("\nPunto C:\n");
        printf("El alumno con MAYOR promedio es DNI: %d\nPromedio: %.2f", dniMayorPromedio, mayorProm);
    }

    return 0;
}
