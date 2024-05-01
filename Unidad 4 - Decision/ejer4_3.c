#include<stdio.h>

int main() {

    int n1, n2, n3;

    printf("Ingrese un valor: ");
    scanf("%d", &n1);
    printf("Ingrese un valor: ");
    scanf("%d", &n2);
    printf("Ingrese un valor: ");
    scanf("%d", &n3);

    if (n1 == n2 + n3) {
        printf("La suma de los valores 2 y 3 son iguales al primer numero ingresado:");
    }
    else {
        if (n2 == n1 + n3) {
            printf("La suma de los valores 1 y 3 son iguales al segundo numero ingresado:");
        }
        else {
            if (n3 == n1 + n2) {
                printf("La suma de los valores 1 y 2 son iguales al tercer numero ingresado:");
            }
            else {
                printf("No hay sumas que cumplan las caracteristicas");
            }
        }
    }
    return 0;
}