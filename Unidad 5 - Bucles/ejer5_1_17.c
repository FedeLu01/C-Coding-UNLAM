/*
Ingresar N artículos (códigos) y sus correspondientes precios.
Indicar el código del artículo más caro y el precio del más barato. 
NOTA: todos los artículos tienen precios distintos.
*/

#include <stdio.h>

int main() {
    int precio, articulos, caro, barato, codigo, codigoBarato, codigoCaro, bandC = 0, bandB = 0;

    printf("Ingrese la cantidad de articulos a ingresar: ");
    scanf("%d", &articulos);

    for (int i = 0; i < articulos; i++) {
        printf("Ingrese el codigo del articulo: ");
        scanf("%d", &codigo);
        printf("Ingrese el precio: ");
        scanf("%d", &precio);

        if (bandC == 0 || precio > caro) {
            caro = precio;
            codigoCaro = codigo;
            bandC = 1;
        }

        if (bandB == 0 || precio < barato) {
            barato = precio;
            codigoBarato = codigo;
            bandB = 1;
        }
    }

    printf("El articulo con codigo %d es el mas caro: $%d\n", codigoCaro, caro);
    printf("El articulo con codigo %d es el mas barato: $%d", codigoBarato, barato);

    return 0;
}