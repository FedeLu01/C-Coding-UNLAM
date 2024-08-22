#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

void CargaAleatoria(int[], int, int);
void Mostrar(int[], int);

int main()
{
    int vec[TAM];
    srand(time(NULL));
    CargaAleatoria(vec, TAM, 100);
    Mostrar(vec,TAM);
    return 0;
}

void CargaAleatoria(int v[], int ce, int max) 
{
    int i;
    for (i = 0; i < ce; i++)
        v[i] = rand() % max;
}

void Mostrar(int v[], int ce) 
{
    int i;
    for (i = 0; i < ce; i++)
        printf("%d\n", v[i]);
}
