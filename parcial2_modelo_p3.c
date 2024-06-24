/*
Se desea estudiar las ventas realizadas durante el día por una empresa donde trabajan 20
vendedores y comercializan varios artículos. Para tal fin, al finalizar el horario laboral, se
nos suministran el número de vendedor que realizó la venta, y el importe de dicha venta.
- Número de vendedor (de 1 a 20)
- Importe
Dichos datos, se ingresarán por teclado en forma desordenada, hasta la lectura de un
número de vendedor 0 (cero).
Los vendedores pueden tener más de una venta por día.
Desarrollar su correspondiente codificación en lenguaje "C" que permita:
a) Validar el ingreso del número de vendedor y artículo, no permitiendo un valor fuera
del rango permitido.
La validación se debe realizar a través de una única función con parámetros.
b) Informar el Número de vendedor, que finalizó con mayor facturación durante el día
(hay un único máximo).
c) Informar el Número de vendedor que, en total, realizó la menor recaudación (puede
haber múltiples mínimos)
d) Informar los vendedores que no registraron ventas durante el día
*/
#include <stdio.h>

int IngresoDatos(int[], int[]);
int MayorFacturacion(int, int);
int MenorRecaudacion(int, int);
int VendedoresSinVentas(int[], int[]);

int main() {
    int vendedor, importe, maxRecaudacion, minRecaudacion, topVendedor, lowVendedor, flag = 0;
    int vecVendedor[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int vecVentas[20] = {0};
    IngresoDatos(vendedor, importe);
    printf("%d - %d", vendedor, importe);
}

int IngresoDatos(int v1[20], int v2[20]) {
    int vendedor;
    float importe;
    do {
        printf("Ingrese el numero de vendedor: ");
        scanf("%d", &vendedor);
    } while ((vendedor < 0 || vendedor > 20) && vendedor != 0);

    if (vendedor == 0){
        return 1;
    }

    do {
        printf("Ingrese el importe de la venta: $");
        scanf("%f", &importe);
    } while (importe < 0);

    v2[vendedor - 1] += importe;
}