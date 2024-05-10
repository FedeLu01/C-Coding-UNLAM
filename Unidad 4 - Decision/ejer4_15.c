#include<stdio.h>

int main() {    
    int cant, total;

    printf("Ingrese la cantidad de DVDs a comprar: ");
    scanf("%d", &cant);

    if (cant > 0 && cant <= 500) {
        if (cant <= 9) {
            total = cant * 15;
            printf("El total a pagar por %d DVDs es: $%d", cant, total);
        }
        if (cant > 9 && cant <= 50) {
            total = cant * 12;
            printf("El total a pagar por %d DVDs es $%d", cant, total);
        }
        if (cant > 50 && cant <= 100) {
            total = cant * 10;
            printf("El total a pagar por %d DVDs es de $%d", cant, total);
        }
        if (cant > 100) {
            float descuento;
            total = cant * 10;
            descuento = total * 0.10;
            total -= descuento;
            printf("El total a pagar por %d DVDs es: $%.2f", cant, (float)total);
        }
    }
    else {
        printf("No se permite la compra del monto ingresado");
    }
    return 0;
}