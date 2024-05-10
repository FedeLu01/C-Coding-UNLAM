#include<stdio.h>

int main() {
    int codigo, cant, total;

    printf("Ingrese el codigo del articulo: ");
    scanf("%d", &codigo);

    if (codigo == 1 || codigo == 10 || codigo == 100) {
        printf("Ingrese la cantidad a comprar: ");
        scanf("%d", &cant);
        total = 10 * cant;
        printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $%.2f", codigo, cant, (float)total);
    }
    if (codigo == 2 || codigo == 22 || codigo == 222) {
        printf("Ingrese la cantidad a comprar: ");
        scanf("%d", &cant);
        total = 7 * cant;
        if (cant > 10) {
            total = 6.5 * cant;
        }
        printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $%.2f", codigo, cant, (float)total);
    }
    if (codigo == 3 || codigo == 33) {
        printf("Ingrese la cantidad a comprar: ");
        scanf("%d", &cant);
        total = 3 * cant;
        if (cant > 10) {
            float desc = total * 0.10;
            total -= desc; 
        }
        printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $%.2f", codigo, cant, (float)total);
    }
    if (codigo == 4 || codigo == 44) {
        printf("Ingrese la cantidad a comprar: ");
        scanf("%d", &cant);
        total = 1 * cant;
        printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $%.2f", codigo, cant, (float)total);
    }
    if (codigo != 1 && codigo != 100 && codigo != 10 && codigo != 2 && codigo != 22 && codigo != 222 && codigo != 3 && codigo != 33 && codigo != 4 && codigo != 44) 
    {
        printf("El codigo de articulo %d no es valido", codigo);
    }
}