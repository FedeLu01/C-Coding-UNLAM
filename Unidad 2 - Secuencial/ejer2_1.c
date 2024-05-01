#include<stdio.h>

int main(){
    int cant_horas, valor_hora, total;
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%i",&cant_horas);
    printf("Ingrese el valor de la hora: ");
    scanf("%i",&valor_hora);

    total = cant_horas * valor_hora;

    printf("El total por las horas trabajadas es: $%i", total);
    return 0;
}