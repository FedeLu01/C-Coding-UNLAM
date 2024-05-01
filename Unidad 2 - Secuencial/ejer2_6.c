#include<stdio.h>

void main() {
    
    int cantT, cantP;
    int vueloTurista = 8800;
    int vueloPrimera = 8800 * 1.3;
    float total;

    printf("Ingrese la cantidad de vuelos clase turista: ");
    scanf("%d", &cantT);
    printf("Ingrese la cantidad de vuelos primera clase: ");
    scanf("%d", &cantP);
    total = (vueloTurista * cantT) + (vueloPrimera * cantP);
    printf("El total recaudado es: $%.2f\n", total);
    
}