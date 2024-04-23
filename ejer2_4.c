#include<stdio.h>

void main() {
    int pies, yardas, pulgadas;
    float cm, metros;

    printf("Ingrese el valor en pies: ");
    scanf("%i", &pies);

    yardas = pies * 3;
    pulgadas = pies * 12;
    cm = (float) pulgadas * 2.54;
    metros = (cm * 10) / 100;

    printf("\nLa cantidad de pies en yardas es: %i\n", yardas);
    printf("La cantidad de pies en pulgadas es: %i\n", pulgadas);
    printf("La cantidad de pies en centimetros es: %.2f\n", cm);
    printf("La cantidad de pies en metros es: %.1f\n", metros);
}