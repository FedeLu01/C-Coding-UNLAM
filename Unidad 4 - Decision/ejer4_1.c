#include<stdio.h>

/* 
    Se ingresan 3 numeros distintos, determinar el mayor
*/

int main() {
    int n1, n2, n3;

    printf("Ingrese un valor: ");
    scanf("%d", &n1);
    printf("Ingrese un valor: ");
    scanf("%d", &n2);
    printf("Ingrese un valor: ");
    scanf("%d", &n3);

    if (n1 > n2) {
        if(n1 > n3) {
            printf("El numero de mayor valor es: %d", n1);
        }
        else {
            printf("El numero de mayor valor es: %d", n3);
        }
    }
    else {
        if (n2 > n3) {
            printf("El numero de mayor valor es: %d", n2);
        }
        else {
            printf("El numero de mayor valor es: %d", n3);
        }
    }

    return 0;
}