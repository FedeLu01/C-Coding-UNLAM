#include<stdio.h>
#include<ctype.h>

int main() {

    char letra;
    int cant = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Ingrese una letra: ");
        scanf(" %c", &letra);

        if (tolower(letra) == 'a' 
        || tolower(letra) == 'e' 
        || tolower(letra) == 'i' 
        || tolower(letra) == 'o' 
        || tolower(letra) == 'u') {
            cant++;
        }
        
    }

    printf("La cantidad de vocales ingresadas es: %d", cant);
    return 0;
}