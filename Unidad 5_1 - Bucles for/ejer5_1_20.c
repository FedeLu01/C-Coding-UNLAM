/*
Ingresar un número entero mayor a 0. Debe dibujar una pirámide con * con tantas filas como el número
indicado. En cada fila se va incrementando la cantidad de asteriscos de 2 en 2.
Por ejemplo, si se ingresa el número 5 debe mostrar en pantalla:
            *
           ***
          *****
         *******
        *********

*/
#include <stdio.h>

int main() {
    int num;
    char ast = '*';

    printf("Ingrese un numero mayor a 0: ");
    scanf("%d", &num);

    if (num > 0) {  
        for (int i = 1; i <= num; i++) {
            for (int k = 0; k < i; k++) {
                putchar(ast);
            }
            printf("\n");
        }
        
    }
    else {
        printf("El numero debe ser mayor a 0...\n");
    }

    return 0;
}