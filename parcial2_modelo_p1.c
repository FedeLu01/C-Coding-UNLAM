/*
Completar el código de la siguiente función que recibe un vector de 100 elementos
cargados con números y un segundo vector que se debe completar con los números
negativos del vector recibido. La función debe retornar cuantos números negativos se
encontraron
int CopiarNegativos (int vNum[], int vNeg[], int cant)
{ // COMPLETAR }
vNum vector ya cargado con números
vNeg vector donde debe guardar los negativos de vNum
cant cantidad de datos cargados en el vector vNum
*/
#include <stdio.h>

int CopiarNegativos (int[], int[], int);

int main() {
    int vNum[100], vNeg[100], cant = 0;
    for (int i = 0; i < 10; i++) {
        printf("Ingrese dato: ");
        scanf("%d", &vNum[i]);
    }

    printf("La cantidad de negativos es: %d", CopiarNegativos(vNum, vNeg, cant));
    
    return 0;
}

int CopiarNegativos (int vNum[100], int vNeg[], int cant) {
    for (int i = 0; i < 10; i++) {
        if (vNum[i] < 0) {
            vNeg[cant] = vNum[i];
            cant++;
        }
    }

    return cant;
}
