#include<stdio.h>

int main() {

    int nota1, nota2;
    float promedio;

    printf("Ingrese la primera nota: ");
    scanf("%i", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%i", &nota2);

    promedio = (nota1 + nota2) / 2;

    printf("El promedio de las notas es: %.2f", promedio);
    
    return 0;
    }