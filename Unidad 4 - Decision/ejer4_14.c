#include<stdio.h>

int main() {
    int total;
    float descuento;

    printf("Ingrese el total de la compra: ");
    scanf("%d", &total);

    if (total > 0) {
        if (total < 55) {
            descuento = total * (4.5 / 100);
            printf("El descuento de %%4.5 es: $%.2f\nEl precio final es $%.2f", descuento, total - descuento);
        }
        
        if (total > 55 && total < 100) {
            descuento = total * (8 / 100);
            printf("El descuento de %%8 es: $%.2f\nEl precio final es $%.2f", descuento, total - descuento);        
            }
        if (total > 100) {
            descuento = total * (10.5 / 100);
            printf("El descuento de %%10.5 es: $%.2f\nEl precio final es $%.2f", descuento, total - descuento);        
            }
    }
    else {
        printf("Precio invalido.");
    }
    return 0;
}