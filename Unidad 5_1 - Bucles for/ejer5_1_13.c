/*
    Mostrar los numeros primos entre 1 y 100; Contar y mostrar la cantidad de numeros primos encontrados
*/

#include <stdio.h>

int main() {
    int cont = 0;
    for (int i = 2; i <= 100; i++) {
        int band = 0;

        // ver si i es divisible por un numero menor que el (y mayor que 1)
        for (int div = 2; div * div <= i; div++) {
            if (i % div == 0) {
                band = 1; // si entro aca es porque es divisible, no es primo.
                break; // salgo del for total no necesito seguir comprobando.
            }
        }

        if (band == 0) {
            cont++;
        }
    }
    printf("La cantidad de numeros primos del 1 al 100 es: %d\n", cont);

    return 0;
}