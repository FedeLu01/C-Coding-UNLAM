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

int IngresoDatos(int[], float[]);
void MayorRecaudacion(float[]);
void MenorRecaudacion(float[]);
void VendedoresSinVentas(float[]);

int main() {
    int vecVendedor[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int cont = 0;
    int validar = 0;
    float vecVentas[20] = {0};
    float maxRecaudacion;

    do{
        validar = IngresoDatos(vecVendedor, vecVentas);
        cont++;
    } while (validar == 0);

    if (cont > 1){
        MayorRecaudacion(vecVentas);
        MenorRecaudacion(vecVentas);
        VendedoresSinVentas(vecVentas);
    }

    return 0;
}

int IngresoDatos(int v1[20], float v2[20]) {
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
    return 0;
}

void MayorRecaudacion(float v2[20]) {
    int flag = 0, maxVendedor;
    float max = 0;
    for(int i = 0; i < 20; i++) {
        if (flag == 0 || v2[i] > max) {
            max = v2[i];
            flag = 1;
            maxVendedor = i + 1;
        }
    }

    printf("\nEl vendedor %d cerro el dia con la mayor recaudacion, un total de: $%.2f\n", maxVendedor, max);
}

void MenorRecaudacion(float v2[20]) {
    int vendedorLow, flag = 0;
    float menorRec = 0;
    
    for (int i = 0; i < 20; i++){
        if((flag == 0 || v2[i] < menorRec) && v2[i] > 0) {
            menorRec = v2[i];
            vendedorLow = i + 1;
            flag = 1;
        }
    }

    printf("El vendedor %d fue el que menos recaudo, con un total de $%.2f\n", vendedorLow, menorRec);
}

void VendedoresSinVentas(float v2[20]){
    for(int i = 0; i < 20; i++) {
        if(v2[i] == 0) {
            printf("El vendedor %d no hizo ventas.\n", i + 1);
        }
    }
}