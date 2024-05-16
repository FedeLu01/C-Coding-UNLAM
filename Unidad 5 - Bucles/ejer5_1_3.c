#include<stdio.h>

int main () {

    int promedio = 0, num, cont = 0;
    
    for (int i = 1; i <= 10; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            promedio += num;
            cont++;
        }
    }
    promedio = promedio / cont;

    printf("El promedio de los numeros pares ingresados es: %d", promedio);
    return 0; 
}