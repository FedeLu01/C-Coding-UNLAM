#include<stdio.h>

int main() {
    int num, sum;

    printf("Cuantos numeros quiere ingresar?: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        int tempNum;
        printf("Ingrese un numero: ");
        scanf("%d", &tempNum);
        sum += tempNum;
    }

    printf("La suma de los valores ingresados es: %d", sum);
    return 0;
}