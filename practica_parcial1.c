// Practica para el primer parcial

/*1 Completar la condición de la validación para que:
A: admita el número 100, el -100 y números entre 5000 y 6000. Por cualquier otro número debe volver a 
pedir el ingreso.
B: Agregar un mensaje cuando se ingresa un número erroneo*/

#include  <stdio.h>

int main () 
{  
    int num, band = 0;
    do {
        if (band == 0) 
            band = 1;
        else 
            printf("Ingrese el numero 100, el -100 o numeros entre 5000 y 6000\n");
        
        printf("Ingrese un numero: ");
        scanf("%d",&num);
    } while(num != 100 && num != -100 && (num < 5000 || num > 6000));

return 0;

}