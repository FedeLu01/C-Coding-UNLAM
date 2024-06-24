/*
Una empresa debe registrar los pedidos recibidos de cada uno de sus 10 productos a lo largo del día. Por cada
pedido se recibe:
• Código de producto (de 1 a 10)
• Cantidad de unidades solicitadas
Se puede recibir más de un pedido por producto.
La carga finaliza cuando se ingresa un producto con código igual a cero.
Al finalizar se debe emitir un listado con código y cantidad de unidades solicitadas de cada producto.
*/
#include <stdio.h>

int Carga(int[], int[]);

int main() {
    int codProductos[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int unidadesProd[10] = {0};
    int validar = 0;
    do {
        validar = Carga(codProductos, unidadesProd);
    } while (validar == 0);

    for(int i = 0; i < 10; i++) {
        printf("Cod. Producto\tUnidades\n  %d\t\t%d\n", codProductos[i], unidadesProd[i]);
    }

    return 0;
}

int Carga(int v1[10], int v2[10]) {
    int cod, unidades;
    do {
        printf("Ingrese el codigo del producto: ");
        scanf("%d", &cod);
    } while ((cod < 1 || cod > 10) && cod != 0);

    if (cod == 0) {
        return 1;
    }
    else{
        do {
            printf("Ingrese la cantidad de unidades encargadas del producto :");
            scanf("%d", &unidades);
        } while (unidades < 0);
    }
    v2[cod - 1] += unidades;
    return 0;
}