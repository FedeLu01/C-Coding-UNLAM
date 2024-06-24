/*
Realizar una función que permita el ingreso de un dato validado.
int LeerYValidar(int limInf, int limSup, int dif)
{ }
limInf es el valor inicial del rango válido
limSup es el valor final del rango válido
dif es un valor adicional que también es válido (este valor puede estar o no dentro del
rango)
La función debe retornar un valor correcto. En caso de que el ingreso sea incorrecto se lo
debe volver a solicitar informando un mensaje de error.
*/
#include <stdio.h>

int LeerYValidar(int, int, int);

int main() {
    int valido = LeerYValidar(10, 20, 5);
    printf("El numero valido ingresado es: %d", valido);

    return 0;
}

int LeerYValidar(int limInf, int limSup, int dif) {
    int dato;
    do {
        printf("Ingrese un valor: ");
        scanf("%d", &dato);
        if(dato < limInf || dato > limSup || dato != dif) {
            printf("Error, vuelva a ingresar...\n");
        }
    } while((dato < limInf || dato > limSup) && dato != dif);

    return dato;
}