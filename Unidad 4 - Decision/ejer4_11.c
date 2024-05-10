#include<stdio.h>

int main() {
    int mes, anio;
    
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    printf("Ingrese el anio: ");
    scanf("%d", &anio);

    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            printf("El mes %d tiene 31 dias.", mes);
        }
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            printf("El mes %d tiene 30 dias", mes);
        }
        if (mes == 2) {
            printf("El mes %d tiene 29 dias", mes);
        }
    }
    else {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            printf("El mes %d tiene 31 dias.", mes);
        }
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            printf("El mes %d tiene 30 dias", mes);
        }
        if (mes == 2) {
            printf("El mes %d tiene 28 dias", mes);
        }
    }


    return 0;
}