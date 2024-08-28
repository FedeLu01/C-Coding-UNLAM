#include <stdio.h>

int Buscar(int[], int, int);
void Carga(int[], int);

int main() 
{
    int pos;
    int vec[10] = {0};
    Carga(vec, 10);
    pos = Buscar(vec, 10, 29);
    printf("El dato %d fue encontrado en la posicion %d", 29, pos);
    return 0;
}

int Buscar(int v[], int cant, int dato)
{
    int i = 0, pos = -1;

    while (i < cant && pos == -1) 
    {
        if (v[i] == dato)
        {
            pos = i;
        }
        else 
        {
            i++;
        }
    }

    return pos;
}

void Carga(int v[], int cant)
{
    int i;
    for (i = 0; i < 10; i++) 
    {
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}