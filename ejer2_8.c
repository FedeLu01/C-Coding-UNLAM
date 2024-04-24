#include<stdio.h>

void main(){
    int input_n, anio, mes, dia;
    printf("Ingrese la fecha en formato ddmmaa: ");
    scanf("%d", &input_n);

    anio = input_n % 100;
    mes = (input_n / 100) % 100; // Si divido 111284 / 100 = 1112 -> a este resultado lo divido otra ves por cien pero me quedo con el resto 1112 % 100 = 12
    dia = input_n / 10000; 

    printf("\nEl formato de la fecha ahora es aammdd: %i%02d%02d", anio, mes, dia); // el 02 es para que me muestre 2 digitos con un cero adelante (si es que no hay un digito mayor a 0)
}