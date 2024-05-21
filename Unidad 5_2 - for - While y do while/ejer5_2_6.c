/*
Un negocio de perfumería efectúa descuentos en sus ventas según el importe de las mismas, con la
siguiente escala:
• menor a 50 pesos el 3.5 %
• entre 50 y 150 pesos el 10 %
• entre 151 y 300 pesos el 20 %.
• mayor a 300 pesos el 25 %
Confeccionar un programa que:
a. Solicite un importe y calcule el descuento a efectuar y el importe neto a cobrar, con mensajes
aclaratorios.
b. Informe el importe promedio de todas las ventas realizadas.
Se debe contemplar que se puedan ingresar varios importes y para finalizar se ingresa un valor negativo o
cero.
*/

#include <stdio.h>

int main() {
    int cont = 0;
    float monto, total = 0, promedio = 0, descuento;

    printf("Ingrese el monto (0 o valor negativo para finalizar): $");
    scanf("%f", &monto);

    while (monto > 0) {
        
        if (monto < 50) {
            descuento = monto * (3.5 / 100);
            monto -= descuento;
            total += monto;
            cont++;
            printf("Monto: $%.2f\nDescuento: $%.2f\nTotal: $%.2f\n", monto, descuento, total);
        }

        if (monto >= 50 && monto <= 150) {
            descuento = monto * (10. / 100); // si no le agrego el punto para estas divisiones no la hace, porque no lo ve como flotante (supongo) al dato y no lo puede guardar.
            monto -= descuento;
            total += monto;
            cont++;
            printf("Monto: $%.2f\nDescuento: $%.2f\nTotal: $%.2f\n", monto, descuento, total);
        }

        if (monto > 150 && monto < 300) {
            descuento = monto * (20. / 100);
            monto -= descuento;
            total += monto;
            cont++;
            printf("Monto: $%.2f\nDescuento: $%.2f\nTotal: $%.2f\n", monto, descuento, total);
        }

        if (monto >= 300) {
            descuento = monto * (25. / 100);
            monto -= descuento;
            total += monto;
            cont++;
            printf("Monto: $%.2f\nDescuento: $%.2f\nTotal: $%.2f\n", monto, descuento, total);
        }


        printf("Ingrese el monto (0 o valor negativo para finalizar): $");
        scanf("%f", &monto);
    }
    promedio = total / cont;
    printf("El promedio de las ventas es: $%.2f", promedio);

    return 0;
}