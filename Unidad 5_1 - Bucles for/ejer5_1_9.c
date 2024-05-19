#include<stdio.h>

int main() {

    printf("Pares\t\tImpares");
    for (int i = 1; i <= 30; i++) {
        if (i % 2 == 0) printf("%d", i);
        if (i % 2 != 0) printf("\t\t%d", i);
        printf("\n");
    }

    return 0;
}