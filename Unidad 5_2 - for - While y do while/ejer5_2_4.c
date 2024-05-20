/*
Un negocio de venta de granos desea controlar las ventas realizadas. De cada una ingresa el importe total
y un código que indica la forma de pago. El código puede ser:
• C: cheque, 20% de recargo.
• E: efectivo, 10% de descuento.
• T: con tarjeta, 12% de recargo.
Se debe ingresar una F para finalizar el día de venta y arrojar los siguientes totales.
Efectivo en Caja: $ xxxx.xx
Ventas con Tarjeta de Crédito: $ xxxx.xx
Ventas con cheque: $ xxxx.xx
Total de Venta: $ xxxx.xx
Importe del IVA: $ xxxx.xx
Nota: El IVA corresponde al 21% del total de ventas.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char codigo;
    float cheque = 0, efect = 0, tarjeta = 0, iva, importe, total;

    printf("Ingrese el importe a pagar: $");
    scanf("%f", &importe);
    printf("C: cheque - 20%% recargo -\nE: efectivo - 10%% descuento -\nT: con tarjeta - 12%% recargo -\nF para finalizar\nIngrese la forma de pago: ");
    fflush(stdin);
    scanf("%c", &codigo);

    while (tolower(codigo) != 'f') {

        if (tolower(codigo == 't')) {
            tarjeta += importe * 1.12;

        } else if (tolower(codigo) == 'c') {
            cheque += importe * 1.2;

        } else if (tolower(codigo) == 'e') {
            importe = importe - (importe * 0.1);
            efect += importe;
        } else {
            printf("Codigo invalido...");
        }


        printf("Ingrese el importe a pagar: $");
        scanf("%f", &importe);
        printf("C: cheque - 20%% recargo -\nE: efectivo - 10%% descuento -\nT: con tarjeta - 12%% recargo -\nF para finalizar\nIngrese la forma de pago: ");
        fflush(stdin);
        scanf("%c", &codigo);
    }

    iva = (tarjeta + cheque + efect) * 0.21;
    total = tarjeta + cheque + efect;
    printf("Efectivo en caja: $%.2f\nVentas con tarjeta de credito: $%.2f\nVentas con cheque: $%.2f\nTotal de venta: $%.2f\nImporte del IVA: $%.2f\n", efect, tarjeta, cheque, total, iva);
    
    return 0;
}