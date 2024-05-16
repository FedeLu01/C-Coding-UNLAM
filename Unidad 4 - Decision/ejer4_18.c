#include<stdio.h>
/*
    programa que permite ingresar fecha actual (dia, mes, anio) y la fecha de nacimiento de una persona. con estos datos calcula la edad;
*/
int main() {
    int dia, mes, anio, edad;

    printf("Ingrese la fecha actual: ");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Anio: ");
    scanf("%d", &anio);

    if ((dia > 0 && dia <= 31) && (mes > 0 && mes <= 12) && anio == 2024) {
        int dia1, mes1, anio1;
        printf("Ingrese fecha de nacimiento: ");
        printf("Dia: ");
        scanf("%d", &dia1);
        printf("Mes: ");
        scanf("%d", &mes1);
        printf("Anio: ");
        scanf("%d", &anio1);

        if ((dia1 > 0 && dia1 <= 31) && (mes1 > 0 && mes1 <= 12) && anio1 < 2024) {
            int nAnio = anio - anio1;
            // if (mes >= mes1 && dia >= dia1) {
            //     nAnio += 1;
            // }
            printf("Tu edad es: %d", nAnio);
        }
        else {
            printf("Error en la entrada de datos");
        }
    }
    else {
            printf("Error en la entrada de datos");
    }

    return 0;
}