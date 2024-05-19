/*
Confeccionar un programa que calcule e informe los valores de las potencias de 2 cuyo resultado sean
menores que 600. (1 2 4 8 16 …)
*/
#include <stdio.h>

int main() {
    int sum = 1;
    
    while (sum <= 600) {
        if (sum < 600) {
            printf("%d ", sum);
            sum *= 2;
        }
    }

    return 0;
}