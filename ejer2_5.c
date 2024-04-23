#include<stdio.h>

void main(){
    int cantidad_tarros, t1l, t4l, t20l;

    printf("Ingrese la cantidad de tarros en total: ");
    scanf("%d", &cantidad_tarros);

    t1l = cantidad_tarros * 0.50;
    t4l = (cantidad_tarros + t1l) * 0.30;
    t20l = cantidad_tarros - (t1l + t4l);

    printf("\nLa cantidad de tarros de 1L son: %i\n", t1l); 
    printf("La cantidad de tarros de 4L son: %i\n", t4l); 
    printf("La cantidad de tarros de 20L son: %i", t20l); 
}