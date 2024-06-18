/*
Confeccionar un programa que permita ingresar varias ternas de valores a punto flotante, que finalice al
ingresar una terna con los valores ORDENADOS en forma creciente. Para cada terna exhibir la siguiente
pantalla:
** OPCIONES POSIBLES **
1  Mayor valor
2  Promedio
3  Suma
4 - Finalizar
** Digite su opción:
Según la opción deseada debe aparecer en pantalla el resultado, sin borrar el menú. No admitir otros
valores de opción. Confeccionar y utilizar una función PARA CADA UNA de las opciones y otra para detectar
la condición final.
*/
#include <stdio.h>

float IngresoValores();
float MayorValor(float, float, float);
float Promedio(float, float, float);
float Suma(float, float, float);
int CondFinal(float, float, float);

int main () {
    float num1, num2, num3;
    int flag = 0, opcion;

    while(flag == 0) {
        int bandOpcion = 0;
        printf("Ingrese ternas de valores..\n");
        printf("Ingrese el primer valor: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo valor: ");
        scanf("%f", &num2);
        printf("Ingrese el tercer valor: ");
        scanf("%f", &num3);

        if (CondFinal(num1, num2, num3) == 1) {
            flag = 1;
            break;
        }

        do {
            while(bandOpcion == 0) {
                printf("** OPCIONES POSIBLES **\n1 - Mayor valor\n2 - Promedio\n3 - Suma\n4 - Finalizar\n** Digite su opcion: ");
                scanf("%d", &opcion);
                switch(opcion) {
                    case 1:
                        printf("El mayor valor ingresado es: %.2f\n", MayorValor(num1, num2, num3));
                        break;
                    case 2:
                        printf("El promedio de los 3 valores es: %.2f\n", Promedio(num1, num2, num3));
                        break;
                    case 3:
                        printf("La suma es: %.2f\n", Suma(num1, num2, num3));
                        break;
                    case 4:
                        bandOpcion = 1;
                        break;
                }
            }
        } while (opcion < 0 || opcion > 4); 
    }

    return 0;
}


float MayorValor(float num1, float num2, float num3) {
    if (num1 > num2) {
        if (num1 > num3) {
            return num1;
        }
        else {
            return num3;
        }
    }
    else if (num2 > num3) {
        return num2;
    }
    else {
        return num3;
    }
}

float Promedio(float num1, float num2, float num3) {
    return (num1 + num2 + num3) / 3.;
}

float Suma(float num1, float num2, float num3) {
    return num1 + num2 + num3;
}

int CondFinal(float num1, float num2, float num3) {
    if (num1 == num2 - 1 && num2 == num3 - 1) {
        return 1;
    }
    else {
        return 0;
    }
}
