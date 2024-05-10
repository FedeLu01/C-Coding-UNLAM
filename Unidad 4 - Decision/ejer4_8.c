#include<stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese un numero: ");
    scanf("%d", &num1); 
    printf("Ingrese un numero: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0) {
        printf("Es divisible");
    }
    else {
        printf("No es divisible");
    }
}