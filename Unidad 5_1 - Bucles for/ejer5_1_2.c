#include<stdio.h>

int main() {    
    int suma;

    for (int i = 100; i >= 50; i -= 5){
        suma += i;
    }
    printf("La sumatoria es: %d", suma);
    return 0;
}