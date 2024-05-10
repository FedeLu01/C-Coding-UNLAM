#include<stdio.h>
#include<ctype.h>

int main() {
    int nro_historia;
    char codigo;

    printf("Ingrese el Nro de historia: ");
    scanf("%d", &nro_historia);
    if (nro_historia > 0 && nro_historia < 1000000000) {
        printf("Ingrese el codigo de prestacion: ");
        fflush(stdin);
        codigo = getchar();

        if (toupper(codigo) == 'A') {
            printf("Nro de historia: %d\nCodigo de prestacion medica: %c\nImporte a pagar: %d", nro_historia, toupper(codigo), 20);
        }
        if (toupper(codigo) == 'D') {
            printf("Nro de historia: %d\nCodigo de prestacion medica: %c\nImporte a pagar: %d", nro_historia, toupper(codigo), 40);
        }
        if (toupper(codigo) == 'F') {
            printf("Nro de historia: %d\nCodigo de prestacion medica: %c\nImporte a pagar: %d", nro_historia, toupper(codigo), 60);
        }
        if (toupper(codigo) == 'M') {
            printf("Nro de historia: %d\nCodigo de prestacion medica: %c\nImporte a pagar: %d", nro_historia, toupper(codigo), 150);
        }
        if (toupper(codigo) == 'T') {
            printf("Nro de historia: %d\nCodigo de prestacion medica: %c\nImporte a pagar: %d", nro_historia, toupper(codigo), 150);
        }
        if (toupper(codigo) != 'A' && toupper(codigo) != 'D' && toupper(codigo) != 'F' && toupper(codigo) != 'M' && toupper(codigo) != 'T') {
            printf("Codigo de prestacion medica invalido.");
        }
    }
    else {
        printf("Nro de historia invalido");
    }
}