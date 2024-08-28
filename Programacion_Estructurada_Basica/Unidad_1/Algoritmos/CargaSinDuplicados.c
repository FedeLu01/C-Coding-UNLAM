#include <stdio.h>

int Buscar(int[], int, int);
void Carga(int[], int);
void Mostrar(int[], int);

int main() 
{
    int v[10] = {0};
    Carga(v, 10);
    Mostrar(v, 10);
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

void Carga(int v[], int cant)
{
    int i, pos, num;

    for (i = 0; i<cant;i++)
    {
        do
        {
            printf("Ingrese un numero: ");
            scanf("%d", &num);
            pos = Buscar(v, num, i);
            if (pos == -1)
                v[i] = num;
            else
                printf("Numero duplicado, vuelva a ingresar..\n");
        } while (pos != -1);
    }
}

void Mostrar(int v[], int cant)
{
    int i;
    printf("Valores: \n");
    for(i=0;i<cant;i++)
    {
        printf("%d\n", v[i]);
    }
}