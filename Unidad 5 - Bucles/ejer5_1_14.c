#include<stdio.h>

/*
    Encontrar numeros perfectos del 1 al 9000. Falta terminar
*/

int main() {
    int sum = 0;

    for (int i = 1; i <= 9000; i++) {
        if (i % 2 == 0) {
            int aux;

            for (int k = i; k > 0; k--) {

                if (i % k == 0) {
                    sum += i / k;
                }
            }
            

            if (i == sum) {
                printf("%d es un numero perfecto", sum);
            }
        }
    }
    return 0;
}