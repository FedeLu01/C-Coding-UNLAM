/*
Realizar una función que reciba por parámetro dos vectores enteros de 5 elementos cada uno y genere un
vector de 10 posiciones con el contenido de ambos vectores intercalados. Mostrar el vector generado.
*/
#include <stdio.h>

int fusionVectores(int[], int[]);

int main() {
    int ve1[5], ve2[5];
    fusionVectores(ve1, ve2);
    return 0;
}

int fusionVectores(int ve1[5], int ve2[5]) {
    int i = 0, vectorFusionado[10], k = 0, j = 0;

    printf("**Ingrese 5 valores en cada vector**\n");
    for (i; i < 5; i++) {
        printf("Ingrese el valor a guardar en vector 1: ");
        scanf("%d", &ve1[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("Ingrese el valor a guardar en vector 2: ");
        scanf("%d", &ve2[i]);
    }
    
    i = 0;
    while(i < 10) {
        if(i == 0 || i % 2 == 0) {
            //printf("i en ve1: %d - ", i);
            vectorFusionado[i] = ve1[k];
            //printf("valor ve1 en pos k ->  %d: %d\n", k, ve1[k]);
            k++;
        }

        if(i == 1 || i % 2 != 0) {
            //printf("i en ve2: %d - ", i);
            vectorFusionado[i] = ve2[j];
            //printf("valor ve2 en pos j -> %d: %d\n", j, ve2[j]);
            j++;
        }

        i++;
    }
    

    for (i = 0; i < 10; i++) {
        printf("%d\t", vectorFusionado[i]);
    }

}