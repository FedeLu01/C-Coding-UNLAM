/*
    De los empleados de una empresa, se ingresan los siguientes datos:
    - Legajo (int)
    - Sector (char A: administracion, C: capital humano, P: produccion, V: ventas) validar
    - Sueldo (float > 0) validar

    La carga de datos finaliza con un legajo igual o menor a 0.
    Informar: 
    a) cantidad de empleados que trabajan en administracion
    b) el promedio de sueldo de los empleados que trabajan en produccion
    c) el porcentaje de empleados que trabajan en capital humano sobre el total
    d) sueldo del empleado con legajo mas alto
*/
#include <stdio.h>
#include <ctype.h>

int main() { 
    int legajo, band = 0, cont_prod = 0, cont_administracion = 0, total_empleados = 0, cont_cap = 0, legajo_alto;
    char sector;
    float sueldo, total_prod = 0, sueldo_alto;

    printf("Ingrese el legajo del empleado: ");
    scanf("%d", &legajo);

    while (legajo > 0) {

        do {
            printf("En que sector trabaja el empleado? (A: administracion, C: capital humano, P: produccion, V: ventas): ");
            fflush(stdin);
            scanf("%c", &sector);
        } while (tolower(sector) != 'a' && tolower(sector) != 'c' && tolower(sector) != 'p' && tolower(sector) != 'v');

        do {
            printf("Ingrese el sueldo del empleado: $");
            scanf("%f", &sueldo);
        } while (sueldo < 0);

        switch (tolower(sector)) {

        case 'a':
            cont_administracion++;
            break;
        
        case 'p':
            total_prod += sueldo;
            cont_prod++;
            break;

        case 'c': 
            cont_cap++;
            break;

        default:
            break;
        }

        if (band == 0 || legajo > legajo_alto) {
            band = 1;
            legajo_alto = legajo;
            sueldo_alto = sueldo;
        }

        total_empleados++;
        printf("Ingrese el legajo del empleado: ");
        scanf("%d", &legajo);
    }

    printf("A)\nLa cantidad de empleados que trabajan en administracion es: %d\n", cont_administracion);
    printf("B)\nEl promedio de los sueldos de empleados de produccion es: %.2f\n", total_prod / (float) cont_prod);
    printf("C)\nEl porcentaje de empleados de capital humano es de un %%%.0f sobre el total\n", ((float) cont_cap / total_empleados) * 100);
    printf("D)\nEl empleado con el legajo mas alto: %d tiene un sueldo de %.2f", legajo_alto, sueldo_alto);

    return 0;
}