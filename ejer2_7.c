#include<stdio.h>

void main() {
    int num, centena, decena, unidad;
    printf("Ingrese un numero de 3 cifras: ");
    scanf("%d", &num);

    centena = num / 100;
    decena = (num / 10) - (centena * 10); // Esta formula es porque detecte un patron en el que la division del numero por 10 me da, si el num fuera 456, el cociente me da 45. Con esto, agarro el digito de la centena, lo multiplico por 10 y se lo resto a esos 45. Con esto consigo el valor de la decena.
    unidad = num % 10;

    printf("\nLa centena es: %i\n", centena);
    printf("La decena es: %i\n", decena);
    printf("La unidad es: %i\n", unidad);

}