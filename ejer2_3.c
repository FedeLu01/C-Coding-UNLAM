#include<stdio.h>

void main() {
    int val1, val2, suma, multip, resto;
    float div;

    printf("Ingrese el 1er valor: ");
    scanf("%i", &val1);
    printf("Ingrese el 2do valor: ");
    scanf("%i", &val2);

    suma = val1 + val2;
    multip = val1 * val2;
    resto = val1 % val2;
    div = (float) val1 / val2;

    printf("\nLa suma es: %i\n", suma);
    printf("La multiplicacion es: %i\n", multip);
    printf("El resto de la division es: %i\n", resto);
    printf("La division es: %.2f\n", div);
}