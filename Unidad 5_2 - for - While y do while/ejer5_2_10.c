/*
En un proceso de control se evalúan valores de temperatura, finalizando cuando de ingresa un valor
ficticio de temperatura -50. Determinar el valor máximo y mínimo medido y sus posiciones respecto al ingreso.
*/
#include<stdio.h>

int main() {
    int temp, bandMax = 0, bandMin, max, min, posMax, posMin, cont = 0;

    printf("Ingrese una temperatura: ");
    scanf("%d", &temp);

    while (temp != -50) {

        if (bandMax == 0 || max < temp) {
            bandMax = 1;
            max = temp;
            posMax = cont;
        } else if (bandMin == 0 || min > temp) {
            bandMin = 1;
            min = temp;
            posMin = cont;
        }

        printf("Ingrese una temperatura: ");
        scanf("%d", &temp);
        cont++;
    }

    printf("Temperatura maxima: %d grados Celsius - En posicion %d\n", max, posMax);
    printf("Temperatura minima: %d grados Celsius - En posicion %d\n", min, posMin);


    return 0;
}