/*
    Escribir las sentencias que permitan el ingreso correcto del valor numérico de un día y un mes
    determinado. Por algún error volver a solicitar.
*/
#include <stdio.h>

int main() {
    int dia, mes;

    while (1) {
        printf("Ingrese el dia: ");
        scanf("%d", &dia);

        if (dia > 0 && dia <= 31) {
            printf("Ingrese el mes: ");
            scanf("%d", &mes);
            
            if (mes > 0 && mes < 12) {
                if (dia > 0 && dia < 29 && mes == 2) {
                    printf("Dia: %d, Mes: %d", dia, mes);
                    break;
                } 
                
                printf("Dia: %d, Mes: %d", dia, mes);
                break;
            }
            else {
                printf("Mes invalido.\n");
            }
        }
        else {
            printf("Dia invalido.\n");
        }
    }
    
    return 0;
}