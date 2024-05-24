/*
Ingresar diversos quintetos de números positivos de 1 cifra c/u, finalizando cuando las cinco cifras leídas
sean iguales a cero. Determinar e informar cuantos de los quintetos ingresados han formado números
capicúas 'triples' y cuantos 'quíntuples'.
*/

#include <stdio.h>

int main() {
    int num, cont = 0, band = 0, num1, num2, num3, num4, num5;
    printf("Ingrese un numero de una cifra: ");
    scanf("%d", &num);
    while(num <= 0 || num > 9) {

        if (num == 0) {
            cont++;
        }

        if (num > 0 && num <= 9) {
            band++;
            
        }

        if (cont == 5) break;

        printf("Ingrese un numero de una cifra: ");
        scanf("%d", &num);
    }
    return 0;
}