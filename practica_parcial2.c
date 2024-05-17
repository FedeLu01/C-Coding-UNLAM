/*

2. Codificar un progrema que permita ingresar números enteros hasta ingresar un -100.
Al finalizar el ingreso mostrar:
    a: la cantidad de múltiplos de 3 ingresados
    b: el promedio de los negativos
    c: el mayor número
    d: el menor número y su número de orden
	// Ej del D: 111 56 87 22 23 45 78 23 656 1 5665 -100 --> Menor:1 Orden:10
*/

#include<stdio.h>

int main() {
    int num, cantMult3 = 0, mayor, menor, sum = 0, contNeg = 0, contMen = 0, orden = 1;
    float promNeg;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    while (num != -100) {

        if (num % 3 == 0)
            cantMult3++;
        
        if (num < 0) {
            sum += num;
            contNeg++;
        }

        if (orden == 1 || num > mayor)
            mayor = num;

        if (orden == 1 || num < menor) {
            menor = num;
            contMen = orden;
        }

        printf("Ingrese un numero: ");
        scanf("%d", &num);
    }
    
    promNeg = sum / contNeg;

    printf("Cantidad de multiplos de 3 ingresados: %d\n", cantMult3);
    if (contNeg > 0)
        printf("Promedio negativos: %.2f\n", promNeg);
    else
        printf("No se ingresaron numeros negativos...\n");
    printf("Mayor numero: %d\n", mayor);
    printf("Menor numero: %d en posicion %d\n", menor, contMen);


    return 0;
}