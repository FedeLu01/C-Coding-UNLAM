#include<stdio.h>

/*
    a partir de este ejercicio en adelante comenzare a utilizar los operadores and - or
*/

int main() {
    int n1, n2, n3;

    printf("Ingrese un valor: ");
    scanf("%d", &n1);
    printf("Ingrese un valor: ");
    scanf("%d", &n2);
    printf("Ingrese un valor: ");
    scanf("%d", &n3);

    if (n1 > n3 && n1 > n3) {
        printf("MAYORES AL TERCERO");
    }

    if (n1 == n2 && n2 == n3) {
        printf("TRES IGUALES");
    }

    if (n1 < n3 || n2 < n3) {
        printf("ALGUNO ES MENOR");
    }

    return 0;
}