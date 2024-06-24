/*
Construir una función que reciba dos vectores enteros de igual tamaño y retorne un 1 si son guales o un 0
sino lo son.
*/
#include <stdio.h>

int compararVectores(int[], int[]);

int main() {
    int vec1[5], vec2[5];
    for(int i = 0; i < 5; i++) {
        printf("Ingrese el valor %d para el vector 1: ", i);
        scanf("%f", &vec1[i]);
    }
    for(int i = 0; i < 5; i++) {
        printf("Ingrese el valor %d para el vector 2: ", i);
        scanf("%f", &vec2[i]);
    }

    if (compararVectores(vec1, vec2) == 1) {
        printf("Son iguales");
    }
    else {
        printf("Son diferentes");
    }
}

int compararVectores(int v1[5], int v2[5]) {
    int flag = 0;
    for (int i = 0; i < 5; i++) {
        if(v1[i] != v2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        return 1;
    }
    else {
        return 0;
    }
}