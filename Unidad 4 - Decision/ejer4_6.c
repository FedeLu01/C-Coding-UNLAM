#include<stdio.h>

int main() {

    int n1, n2, n3, n4, menor, pos;

    printf("Ingrese un valor: ");
    scanf("%d", &n1);
    printf("Ingrese un valor: ");
    scanf("%d", &n2);
    printf("Ingrese un valor: ");
    scanf("%d", &n3);
    printf("Ingrese un valor: ");
    scanf("%d", &n4);

    if (n1 < n2 && n1 < n3 && n1 < n4)  {
        printf("El numero de menor valor ingresado es: %d\nEl numero fue ingresado en posicion 1", n1);
    }
    if (n2 < n1 && n2 < n3 && n2 < n4)  {
        printf("El numero de menor valor ingresado es: %d\nEl numero fue ingresado en posicion 2", n2);
    }
    if (n3 < n1 && n3 < n2 && n3 < n4)  {
        printf("El numero de menor valor ingresado es: %d\nEl numero fue ingresado en posicion 3", n3);
    }
    if (n4 < n1 && n4 < n2 && n4 < n3)  {
        printf("El numero de menor valor ingresado es: %d\nEl numero fue ingresado en posicion 4", n4);
    }

    return 0;
}