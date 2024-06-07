/*
Realizar un programa que al ingresar solicite el ingreso de dos números enteros y luego muestre por
pantalla el siguiente menú (las xx de los números deben ser reemplazadas con los valores
correspondientes):
Menú de Opciones
---- -- --------
Numero 1: xx Numero 2: xx
1) Sumar
2) Restar
3) Multiplicar
4) Dividir
5) Ingresar Nuevos Números
6) Salir
Ingrese su opción:
Al ingresar el número de la opción del 1 al 4, se realiza la operación y muestra el resultado hasta que se
presione una tecla. Luego vuelve a mostrar el menú para poder realizar otra operación con los mismos
números. La opción 5 pide el ingreso de dos nuevos números de trabajo mientras que la opción 6 sale y
cierra el programa.
El ingreso de la opción debe estar validado y en caso de ingresarse un número no válido debe solicitarlo
nuevamente.
Usar una función para mostrar el menú y retornar el valor elegido.
*/

#include <stdio.h>

int accion(int, int);

int main () {
    int n1, n2;

    printf("Ingrese un numero: ");
    scanf("%d", &n1);
    printf("Ingrese otro numero: ");
    scanf("%d", &n2);

    accion(n1, n2);

}

int accion(int n1, int n2) {
    int opcion, flag = 0;
    
    while (flag == 0) {
        printf("Numero 1: %d Numero 2: %d\n1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5) Ingresar nuevos numeros\n6) Salir\nIngrese su opcion: ", n1, n2);
        scanf("%d", &opcion);

        if (opcion < 1 || opcion > 6) {
            printf("Numero de opcion invalido...\n");
        } else {
            switch (opcion)
            {
            case 1:
                printf("La suma es: %d\n", n1 + n2);
                break;
            
            case 2:
                printf("La resta es: %d\n", n1 - n2);
                break;
            
            case 3:
                printf("La multiplicacion es: %d\n", n1 * n2);
                break;

            case 4:
                printf("La division es: %.2f\n", (float)n1 / n2);
                break;

            case 5:
                printf("Ingrese un numero: ");
                scanf("%d", &n1);
                printf("Ingrese otro numero: ");
                scanf("%d", &n2);
                break;

            case 6:
                flag = 1;
                break;
            
            default:
                break;
            }
        }
        
    }
}
