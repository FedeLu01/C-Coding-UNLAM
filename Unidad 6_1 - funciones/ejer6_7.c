/*
Confeccionar un programa que permita ingresar diversas ternas de valores enteros mayores que 0 y
menores que 99. Finalizar el ingreso cuando se informen 3 valores iguales a 96, 97 y 98. Determinar e
informar para cada terna, el mayor y el menor de los valores. Confeccionar y utilizar una función con
parámetros llamada MayorMenor, que permita calcular el menor o el mayor valor de la terna según un
parámetro de configuración.
*/
#include <stdio.h>

int MayorMenor(int, int, int, int);

int main() {
    int num1, num2, num3, opcion, flag = 0;
    do {
        printf("**Ingrese ternas de valores entre 0 y 99**\n");
        do {
            printf("Ingrese el 1er numero de la terna: ");
            scanf("%d", &num1);
        } while (num1 < 0 || num1 > 99);
        
        do {
            printf("Ingrese el 2do numero de la terna: ");
            scanf("%d", &num2);
        } while (num2 < 0 || num2 > 99);
        
        do {
            printf("Ingrese el 3er numero de la terna: ");
            scanf("%d", &num3);
        } while (num3 < 0 || num3 > 99);
        
        if (num1 == 96 && num2 == 97 && num3 == 98) {
            flag = 1;
            break;
        }
        else {

            do {
                printf("Ingrese 1 si quiere conseguir el mayor o 2 si quiere conseguir el menor de los valores: ");
                scanf("%d", &opcion);
            } while (opcion < 1 || opcion > 2);

            if (opcion == 1) {
                printf("El mayor valor de la terna es: %d\n", MayorMenor(opcion, num1, num2, num3));
            }
            
            if (opcion == 2) {
                printf("El menor valor de la terna es: %d\n", MayorMenor(opcion, num1, num2, num3));
            }
        }

    } while (flag == 0);

    printf("\nFinalizando ejecucion...");
    return 0;
}

int MayorMenor(int opcion, int num1, int num2, int num3) {
    if (opcion == 1) {
        if (num1 > num2) {
            if (num1 > num3) {
                return num1;
            }
            else {
                return num3;
            }
        } else if (num2 > num3) {
            return num2;
        } else {
            return num3;
        }
    } 
    else if (opcion == 2) {
        if (num1 < num2) {
            if (num1 < num3) {
                return num1;
            }
            else {
                return num3;
            }
        } else if (num2 < num3) {
            return num2;
        } else {
            return num3;
        }
    }
}