/*
Se ingresan números enteros comprendidos entre 100 y 2000 (usar función LeerYValidar). Determinar
usando la función EstaDentroDelRango:
a. Cantidad de números ingresados entre 100 y 500
b. Cantidad de números pares ingresados entre 500 y 1200
c. Promedio de números ingresados entre 1200 y 2000
El ingreso de datos finaliza cuando se ingresa un número igual a 99.
Para realizar este programa se deben realizar las siguientes funciones:
• EstaDentroDelRango: que reciba 3 enteros correspondientes a un número a validar y los límites
superior e inferior del rango. La función debe retornar un 1 si el número a validar se encuentra
dentro del rango indicado o un 0 si no lo está.
• LeerYValidar: que reciba los límites superior e inferior de un rango y retorne un número que se
encuentre dentro del mismo. (El ingreso de datos se realiza dentro de la función). Para validar el
rango utilizar la función EstaDentroDelRango realizada en el punto anterior.
*/
#include <stdio.h>
#include <ctype.h>


int LeerYValidar(int, int);
int EstaDentroDelRango(int, int, int);

int main() {
    int num, sumaPromedio = 0;
    int flag = 0, punto_a, punto_b, punto_c;
    int cantidadPrimerRango = 0;
    int cantidadParesSegundoRango = 0;
    int cantidadTercerRango = 0;
    float promedioUltimoRango = 0;

    while(flag != 1) {
        num = LeerYValidar(100, 2000);
        printf("num: %d", num);
        punto_a = EstaDentroDelRango(100, num, 500);
        punto_b = EstaDentroDelRango(500, num, 1200);
        punto_c = EstaDentroDelRango(1200, num, 2000);

        printf("\n%d\n%d\n%d\n", EstaDentroDelRango(100, num, 500), EstaDentroDelRango(500, num, 1200), EstaDentroDelRango(1200, num, 2000));
        fflush(stdin);

        if (num == 99) {
            printf("Entre");
            flag = 1;
            break;
        }

        if (punto_a == 1) {
            printf("A)");
            cantidadPrimerRango++;
        }

        if (punto_b == 1 && num % 2 == 0) {
            printf("B)");
            cantidadParesSegundoRango++;
        }

        if (punto_c == 1) {
            printf("C)");
            sumaPromedio += num;
            cantidadTercerRango++;
        }
    }

    printf("Cantidad de numeros ingresados entre 100 y 500: %d\n", cantidadPrimerRango);
    printf("Cantidad de numeros pares entre 500 y 1200: %d\n", cantidadParesSegundoRango);

    if (cantidadTercerRango > 0) {
        printf("Promedio entre los numeros del rango 1200-2000: %.2f\n", (float) sumaPromedio / cantidadTercerRango);
    } else {
        printf("No se ingresaron numeros en el rango 1200-2000\n");
    }

    return 0;
}

int EstaDentroDelRango(int piso, int num, int techo) {
    if (num >= piso && num <= techo || num == 99) {
        return 1;
    }
    else {
        return 0;
    }
}

int LeerYValidar(int piso, int techo) {
    int num;
    do {    
        printf("Ingrese un numero entre el rango %d y %d: ", piso, techo);
        scanf("%d", &num);
    } while (EstaDentroDelRango(piso, num, techo) == 0);
    printf("%d", num);
    fflush(stdin);
    return num;
}