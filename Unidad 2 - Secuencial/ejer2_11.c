#include<stdio.h>

int main() 
{
    int empanadas, total, docenas;
    printf("Ingrese cuantas empanadas lleva: ");
    scanf("%d", &empanadas);

    docenas = empanadas / 12; // Aca agarro cuantas docenas de empanadas lleva
    empanadas = empanadas % 12; // Aca agarro las empanadas unitarias

    total = empanadas * 30 + docenas * 300; // Hago las respectivas multiplicaciones

    printf("El total es: %d", total);

    return 0;
}