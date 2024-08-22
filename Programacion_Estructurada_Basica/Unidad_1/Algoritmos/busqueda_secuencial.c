#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Buscar(int[], int, int);

int main() 
{

    return 0;
}

int Buscar(int v[], int datoBuscado, int cant) 
{
    int i = 0, pos = -1;

    while(pos == -1 && i < cant)
    {
        if (v[i] == datoBuscado)
            pos = i;
        else
            i++;
    }

    return pos;
}