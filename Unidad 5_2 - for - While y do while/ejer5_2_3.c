/*
Confeccionar un programa que pueda ingresar una secuencia de caracteres hasta que se digite un *. Se
desea obtener e informar cuantos caracteres ingresados son numéricos y cuantos alfabéticos. Estos últimos
tienen que mostrarse separados por mayúsculas y minúsculas. También informar la cantidad de otros
símbolos que no sean ni letras ni números.
*/

//REVISAR PORQUE NO QUEDO BIEN

#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    int contNum = 0, contSimb = 0, contCharMin = 0, contCharMayus = 0;
    printf("Ingrese un caracter (numerico, simbolo o letra): ");
    fflush(stdin);
    scanf("%c", &input);

    while(input != '*') {
        if (isupper(input)) {
            contNum++;
        } else if(islower(input)) {
            contCharMayus++;
        } else if (isdigit(input)) {
            contCharMin++;
        } else {
            contNum++;
        }

        printf("Ingrese un caracter (numerico, simbolo o letra): ");
        fflush(stdin);
        scanf("%c", &input);
    }
    printf("Cantidad de letras mayusculas: %d\n", contCharMayus);
    printf("Cantidad de letras minusculas: %d\n", contCharMin);
    printf("Cantidad de simbolos: %d\n", contSimb);
    printf("Cantidad de numeros: %d\n", contNum);

    return 0;
}