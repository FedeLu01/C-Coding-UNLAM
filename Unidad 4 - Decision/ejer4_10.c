#include<stdio.h>

int main() {
    int decision, valor;
    float radianes, grados, pi = 3.1416;
    printf("Grados a radianes ingrese 1 | radianes a grados ingrese 2: ");
    scanf("%d", &decision);
    
    if(decision == 1) {
        printf("Ingrese los grados: ");
        scanf("%d", &valor);
        radianes = (180 / pi) * valor;
        printf("%d grados son %.2f radianes", valor, radianes);
    } 

    if (decision == 2) {
        printf("Ingrese los radianes: ");
        scanf("%d", &valor);
        grados = (pi / 180) * valor;
        printf("%d radianes son %.2f grados", valor, grados);
    }
}