/*
Realizar los siguientes vectores con 10 valores reales. Confeccionar un programa para:
a. Generar el vector VA con la información ingresada por teclado.
b. Generar el vector VB, donde cada elemento es la raíz cuadrada del respectivo elemento de VA.
(para el cálculo de la raíz cuadrada utilizar la función sqrt disponible en la biblioteca math.h). Si el
número es negativo poner un 0 ya que no se puede calcular la raíz
c. Calcular el vector VC como VA+VB.
d. Copiar el vector VC en orden inverso en otro vector llamado VD.
e. Hallar el valor máximo del vector VA y en qué posición se halló (el mayor es único).
f. Generar un vector VE con aquellos valores negativos que se encuentran en el vector VA.
g. Mostrar el contenido de todos los vectores.
FUNCIONES:
I. Para el ingreso del vector AA, del punto a.
II. Para generar el vector CC, del punto c.
III. Para generar el vector VE del punto g.
IV. Para mostrar los valores de todos los vectores del punto h.
*/
#include <stdio.h>
#include <math.h>

void ingresoValores(float[]);
void sumaVectores(float[], float[], float[]);
void valoresNegativos(float[], float[]);
void mostrarVectores(float[], float[], float[], float[], float[]);

int main() {
    float va[10], vb[10], vc[10], vd[10], ve[10], vaMax;
    int k = 0, band = 0, posMax;

    ingresoValores(va);

    for(int i = 0; i < 10; i++) {
        if(va[i] < 0) {
            vb[i] = 0;
        }
        else {
            vb[i] = sqrt(va[i]);
        }
    }

    sumaVectores(va, vb, vc);

    for (int i = 9; i >= 0; i--) {
        vd[k] = vc[i];
        k++;
    }

    for (int i = 0; i < 10; i++) {
        if(band == 0 || va[i] > vaMax) {
            vaMax = va[i];
            posMax = i;
        }
    }
    printf("El mayor valor del vector a es %.2f, en la posicion %d\n", vaMax, posMax);

    valoresNegativos(va, ve);

    mostrarVectores(va,vb,vc,vd,ve);

    return 0;
}

void ingresoValores(float vec[10]) {
    printf("Ingrese 10 valores en el vector: \n");
    for(int i = 0; i < 10; i++) {
        printf("Ingrese el valor %d: ", i);
        scanf("%f", &vec[i]);
    }
}

void sumaVectores(float v1[10], float v2[10], float v3[10]) {
    for (int i = 0; i < 10; i++) {
        v3[i] = v1[i] + v2[i];
    }
}

void valoresNegativos(float v1[10], float v2[10]) {
    int aux = 0;
    for (int i = 0; i < 10; i++) {
        v2[i] = 0.;
    }

    for (int i = 0; i < 10; i++) {
        if (v1[i] < 0) {
            v2[aux] = v1[i];
            aux++;
        }
    }
}

void mostrarVectores(float v1[10], float v2[10], float v3[10], float v4[10], float v5[10]) {
    printf("Valores de vector A:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f\t", v1[i]);
    }
    printf("\nValores de vector B:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f\t", v2[i]);
    }
    printf("\nValores de vector C:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f\t", v3[i]);
    }
    printf("\nValores de vector D:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f\t", v4[i]);
    }
    printf("\nValores de vector E:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f\t", v5[i]);
    }
}