#include<stdio.h>

int main() {

    int num1, num2, num3, suma;

    printf("Ingrese el primer lado: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo lado: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer lado: ");
    scanf("%d", &num3);

    if (num1 > 0 && num2 > 0 && num3 > 0) {
        if (num1 + num2 > num3 || num1 + num3 > num2 || num2 + num3 > num1) {
            printf("Forman un triangulo");
        }
        else {
            printf("No forman un triangulo");
        }
    }

    return 0;
}