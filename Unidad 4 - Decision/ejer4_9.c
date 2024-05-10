#include<stdio.h>
#include<ctype.h>

int main() {
    char letra;
    int ascii;

    printf("Ingrese una letra: ");
    scanf("%c", &letra); 
    fflush(stdin);
    ascii = (int)letra;

    if (tolower(letra) == 'a' || tolower(letra) == 'e' || tolower(letra) == 'i' || tolower(letra) == 'o' || tolower(letra) == 'u') {
        printf("VOCAL.\nASCII: %d", ascii);
    }
    

    return 0;
}