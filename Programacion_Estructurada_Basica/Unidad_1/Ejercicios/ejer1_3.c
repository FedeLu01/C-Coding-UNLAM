/*
En un curso de la maestría en informática los estudiantes deben exponer en forma grupal sus investigaciones
de un tema dado. El curso está formado por 5 grupos. Se pide realizar un programa para sortear el orden de
exposición de dichos grupos. Cada vez que se ejecute el programa deberá mostrar un orden de exposición
distinto para cada uno de los 5 grupos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Ordenar(int[], int);
void Mostrar(int[], int);
void Carga(int[], int);

int main()
{
    int v[10] = {0};
    srand(time(NULL));
    Carga(v, 10);
    Ordenar(v, 10);
    Mostrar(v, 10);
    return 0;
}

void Ordenar(int v[], int ce)
{
    int i, j, posmin, aux;
    for(i=0;i<ce-1;i++)
    {
        posmin = i;
        for(j=i+1; j<ce; j++)
        {
            if(v[j] < v[posmin])
                posmin = j;
        }
        
        if(posmin != i)
        {
            aux = v[i];
            v[i] = v[posmin];
            v[posmin] = aux;
        }
    }
}

void Mostrar(int v[], int ce)
{
    int i;
    printf("El orden de los grupos a presentar es: ");
    for(i=0;i<ce;i++)
    {
        printf("%d - ", v[i]);
    }
}

void Carga(int v[], int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        v[i] = rand() % 10;
    }
}