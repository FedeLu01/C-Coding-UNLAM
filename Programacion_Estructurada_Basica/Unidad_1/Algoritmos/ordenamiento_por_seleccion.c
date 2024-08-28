#include <stdio.h>

void Ordenar(int[], int);
void Mostrar(int[], int);

int main() 
{
    int v[6] = {7, 59, 4, 9, 1, 32};
    Ordenar(v, 6);
    Mostrar(v, 6);
    return 0;
}

void Ordenar(int v[], int ce)
{
    int posmin, i, j, aux;
    for(i=0;i<ce-1;i++)
    {
        posmin = i;
        for(j=i+1;j<ce;j++)
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
    for(i=0;i<ce;i++)
    {
        printf("%d - ", v[i]);
    }
}

