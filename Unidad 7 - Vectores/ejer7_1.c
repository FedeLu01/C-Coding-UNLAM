/*
Realizar una función que reciba por parámetro dos vectores enteros de 5 elementos cada uno y genere un
vector de 10 posiciones con el contenido de ambos vectores uno a continuación del otro. Mostrar el vector
generado.
*/
#include <stdio.h>

int fusionVectores(int[], int[]);

int main() {
    int vec1[5], vec2[5];
    fusionVectores(vec1, vec2);
    return 0;
}

int fusionVectores(int vec1[5],int vec2[5]) {
    int i = 0, vectorFusionado[10];

    printf("**Ingrese 5 valores en cada vector**\n");
    for (i; i < 5; i++) {
        printf("Ingrese el valor a guardar en vector 1: ");
        scanf("%d", &vec1[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("Ingrese el valor a guardar en vector 2: ");
        scanf("%d", &vec2[i]);
    }

    for (i = 0; i < 5; i++) {
        vectorFusionado[i] = vec1[i];
        if (i == 4) {
            for (i = 0; i < 5; i ++) {
                vectorFusionado[i + 5] = vec2[i];
            }
        }
    }

    printf("Valores de los vectores fusionados: ");
    for (i = 0; i < 10; i++) {
        printf("%d\t", vectorFusionado[i]);
    }

}