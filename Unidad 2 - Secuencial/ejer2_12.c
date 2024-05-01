#include<stdio.h>

void main()
{
    int descuento;
    float precio, final;

    printf("Ingrese el precio del articulo: ");
    scanf("%f", &precio);

    printf("Tiene descuento? (1 por si; 0 si no): ");
    scanf("%f", &descuento);


    final = precio * (1.0 - 0.2 * descuento); // revisar
    printf("Precio: %.2f", final);

}