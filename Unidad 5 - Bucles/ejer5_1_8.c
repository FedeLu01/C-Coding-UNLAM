#include<stdio.h>

int main() {
    int edad, cantMayores, cantAltos;
    float estatura, promedioEdad, promedioEstatura;

    for (int i = 0; i < 5; i++) {
        printf("Ingrese la edad del alumno: ");
        scanf("%d", &edad);
        printf("Ingrese la estatura del alumno: ");
        scanf("%f", &estatura);

        promedioEdad += edad;
        promedioEstatura += estatura;

        if (edad > 10) cantMayores++;
        if (estatura > 1.4) cantAltos++;
    }
    promedioEstatura = promedioEstatura / 5;
    promedioEdad = promedioEdad / 5;

    printf("La edad promedio es: %.2f\n", promedioEdad);
    printf("La estatura promedio es: %.2f\n", promedioEstatura);
    printf("La cantidad de alumnos mayores a 10 anios es: %d\n", cantMayores);
    printf("La cantidad de alumnos mayores a 1.40cm es: %d\n", cantAltos);

    return 0;
}