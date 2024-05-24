/*
Confeccionar un programa que me permita calcular y mostrar una cantidad de números primos que se
solicita por la pantalla. Los números se calculan a partir del 2. Ejemplo: Si ingreso 6, genero los números: 2 –
3 - 5 - 7 - 11 - 13. El algoritmo para el cálculo de si un número es primo o no, debe estar optimizado para que
si encuentra un divisor no seguir buscando ya que se sabe que no es primo.
*/
#include <stdio.h>

int main() {
    int primos_por_mostrar, n = 2, d;
    int es_primo;

    printf("Cuantos primos desea mostrar: ");
    scanf("%d", &primos_por_mostrar);

    while (primos_por_mostrar > 0) {

        /* determinar si n es primo */
        es_primo = 1;
        for (d = 2; d < n; d++) {
            if (n % d == 0) {
                es_primo = 0;
                break;
            }
        }

        /* mostrar el numero
         * y actualizar el contador */
        if (es_primo) {
            printf("%d - ", n);
            primos_por_mostrar--;
        }
        n++;
    }

    printf("\n");
    return 0;
}

