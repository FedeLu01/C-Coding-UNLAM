#include<stdio.h>

int main() {
    int n1, n2, n3;

    printf("Ingrese un valor: ");
    scanf("%d", &n1);
    printf("Ingrese un valor: ");
    scanf("%d", &n2);
    printf("Ingrese un valor: ");
    scanf("%d", &n3);

    if (n1 < n2) {
        if (n1 < n3) {
            printf("El primer numero ingresado es menor que los otros dos");
        }
        else {
            printf("El primer numero ingresado no es menor que los otros dos");
        }
    } 
    else {
        printf("El primer numero ingresado no es menor que los otros dos");
    }

    return 0;
}