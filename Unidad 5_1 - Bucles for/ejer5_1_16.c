/*
Se ingresan DNI y la nota promedio de 10 alumnos. Determinar el DNI del alumno de mayor nota promedio (considerar único).
*/

#include <stdio.h>

int main() {
    int dni, dniMayorProm, band = 0;
    float prom, mayorProm;

    for (int i = 1; i <= 10; i++) {
        printf("Ingrese DNI del alumno: ");
        scanf("%d", &dni);
        printf("Ingrese la nota promedio: ");
        scanf("%f", &prom);

        if (band = 0 || prom > mayorProm) {
            band = 1;
            mayorProm = prom;
            dniMayorProm = dni;
        }
    }

    printf("El alumno con mayor promedio es el DNI: %d - Promedio: %.2f", dniMayorProm, mayorProm);
    return 0;
}