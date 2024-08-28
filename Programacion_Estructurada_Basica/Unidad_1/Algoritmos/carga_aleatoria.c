#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

void CargaAleatorios(int[], int cant, int max);
void Mostrar(int[], int cant);

int main() 
{
    int vect[TAM];
    srand(time(NULL));
    CargaAleatorios(vect, 10, 100);
    Mostrar(vect, 10);
    return 0;
}

void CargaAleatorios(int v[], int cant, int max) 
{
    int i; 
    for(i = 0; i < cant; i++) 
    {
        v[i] = rand() % max;
    }
}

void Mostrar(int v[], int cant) 
{
    int i;
    for(i = 0; i < cant; i++) 
    {
        printf("%d\n", v[i]);
    }
}