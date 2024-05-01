#include<stdio.h>

int main() {
    int num, final, mit1, mit2;

    printf("Ingrese un numero de 4 cifras: ");
    scanf("%d", &num);
    
    // divido en 2 mitades para que me queden dos numeros de 2 cifras
    mit1 = num / 100;
    mit2 = num % 100;
    
    // hago las operaciones para agarrar cada numero individualmente (en los grupos de 2 ) y lo sumoo con el numero que tiene al lado. Lo guardo en esa misma variable
    mit1 = (mit1 / 10) + (mit1 % 10);
    mit2 = (mit2 / 10) + (mit2 % 10);
    final = mit1 + mit2;

    printf("Final: %i", final);
}