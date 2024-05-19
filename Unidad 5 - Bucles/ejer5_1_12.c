/*
    Calcular factorial de un numero ingresado por consola
*/

#include<stdio.h>

int main() {
    int num, resul = 1; // Le tuve que dar de valor 1 porque sino me tiraba un numero basura y no le puedo poner 0. Me sirve para lo funcional.

    printf("Ingrese un numero para conseguir el factorial: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        resul *= i;
    }

    printf("El factorial de %d es %d", num, resul);
    return 0;
}