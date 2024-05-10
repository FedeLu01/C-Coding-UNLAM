#include<stdio.h>

int main() {
    int valorH, cantH, total;

    printf("Ingrese el valor de la hora del empleado: ");
    scanf("%d", &valorH);
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &cantH);

    if (valorH > 0 && cantH > 0) {
        if (cantH >= 50 && cantH <= 150) {
            total = 500 + valorH * cantH;
            printf("El total a pagar al empleado es de: $%d\nSe suma un bono de $500", total);
        }

        if (cantH >= 150) {
            total = 1000 + 500 + valorH * cantH;
            printf("El total a pagar al empleado es de: $%d\nSe suma un bono de $1000 y otro de $500", total);
        }

        if (cantH < 50) {
            total = valorH * cantH;
            printf("El total a pagar al empleado es de $%d", total);
        }
    }
    else printf("Los valores son invalidos");
    return 0;
}