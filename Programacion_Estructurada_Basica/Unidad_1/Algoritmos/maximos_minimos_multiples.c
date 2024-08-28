#include <stdio.h>

#define TAM 10

void Carga(int[], int);
int Maximo(int[], int);
void MostrarMaximo(int[], int, int);

int main()
{
    int vec[TAM];
    Carga(vec, 10);
    int max = Maximo(vec, 10); // Aca agarro el numero mas grande de vector y ya me lo guardo como referencia para usarlo para comparar
    printf("El numero maximo es: %d\n", max);
    MostrarMaximo(vec, 10, max); // Aca le doy el numero mas grande y le digo que compare a los demas del vector con ese.
    return 0;
}

void Carga(int v[], int cant)
{
    int i;
    for (i=0;i<cant;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&v[i]);
    }
}

int Maximo(int v[], int cant)
{
    int i;
    int max = v[0];
    for (i=1;i<cant;i++)
    {
        if(v[i] > max)
            max = v[i];
    }
    return max;
}

void MostrarMaximo(int v[], int cant, int max) 
{
    int i;
    printf("Numero maximo se repite en las posiciones:\n");
    for (i=0;i<cant;i++) 
    {
        if(v[i] == max) 
        {
            printf("%d\n", i);
        }
    }
}