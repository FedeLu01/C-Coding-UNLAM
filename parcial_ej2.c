/*
    Leer una cantidad N  de numeros e informar:
    A) la cantidad de valores menores a 0
    B) el promedio de los valores multiplos de 3
    c) el producto de los valores ingresados en orden impar
    d) el menor valor ingresado y su orden de ingreso

    Nota: N debe ser mayor a 10 y menor a 200
*/
#include <stdio.h>

int main() {
    int input, producto = 1, cant_menor_cero = 0, menor_ingresado, orden_menor_ingresado, cont = 1, band = 0, num, cont_prom = 0;
    float promedio = 0, sum = 0;

    printf("Ingrese la cantidad de numeros a evaluar (entre 10 y 200): ");
    scanf("%d", &input);

    if(input > 10 && input < 200) {
        while (cont <= input) {
            printf("Ingrese un numero: ");
            scanf("%d", &num);

            if (num < 0) {
                cant_menor_cero++;
            }

            if (num % 3 == 0) {
                cont_prom++;
                sum += num;
            }

            if (cont % 2 != 0) {
                producto *= num;
            }

            if (band == 0 || menor_ingresado > num) {
                band = 1;
                menor_ingresado = num;
                orden_menor_ingresado = cont;
            }

            cont++;
        }
        promedio = sum / (float) cont_prom;
        printf("a)\nCantidad de valores a 0: %d\n", cant_menor_cero);
        printf("b)\nEl promedio de los multiplos de 3 es: %.2f\n", promedio);
        printf("c)\nEl producto de los numeros ingresados en orden impar es: %d\n", producto);
        printf("d)\nEl menor valor ingresado es: %d, en el orden: %d\n", menor_ingresado, orden_menor_ingresado);

    } else {
        printf("El numero ingresado debe estar entre 10 y 200");
    }

    
    return 0;
}