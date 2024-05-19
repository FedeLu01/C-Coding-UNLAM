#include<stdio.h>

int main() {

    int cant1, num, sumaM3, cantM5, sumaOrdenPar;

    printf("Cuantos numeros queres ingresar?: ");
    scanf("%d", &cant1);

    for (int i = 1; i <= cant1; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num % 3 == 0) {
            sumaM3 += num;
        }
        if (num % 5 == 0) {
            cantM5++;
        }
        if (i % 2 == 0) {
            sumaOrdenPar += num;
        }
    }

    printf("La sumatoria de los multiplos de 3 es: %d\n", sumaM3);
    printf("La cantidad de valores multiplos de 5 es: %d\n", cantM5);
    printf("La sumatoria de los valores que se ingresan en orden par es: %d\n", sumaOrdenPar);

    return 0;
}