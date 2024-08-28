#include<stdio.h>

void IngresaCodigos(int[], int);
int Buscar(int[], int, int);
void CargaPedido(int[], int[], int);
void MostrarListado(int[], int[], int);
void Mayores(int[], int[], int);
void Menores(int[], int[], int);
int Max(int[], int);
int Min(int[], int);

int main()
{
    int vCod[10];
    int vProd[10] = {0};
    IngresaCodigos(vCod, 10);
    CargaPedido(vProd, vCod, 10);
    MostrarListado(vProd, vCod, 10);
    Mayores(vProd, vCod, 10);
    Menores(vProd, vCod, 10);

    return 0;
}

int Buscar(int v[], int datoBuscado, int cant) 
{
    int i = 0, pos = -1;
    
    while(i < cant && pos == -1)
    {
        if(v[i] == datoBuscado)
            pos = i;
        else
            i++;
    }

    return pos;
}

void IngresaCodigos(int v[], int cant)
{
    int i, pos, cod;

    for (i=0;i<cant;i++) 
    {
        do 
        {
            printf("Ingrese el codigo (4 digitos): ");
            scanf("%d", &cod);
        } while (cod < 1000 || cod > 9999);

        pos = Buscar(v, cod, i);
        
        while (pos != -1)
        {
            printf("Numero duplicado, reingrese\n");
            do 
            {
                printf("Ingrese el codigo (4 digitos): ");
                scanf("%d", &cod);
                pos = Buscar(v, cod, i);
            } while (cod < 1000 || cod > 9999);
        }

        v[i] = cod;
        
    }
}

void CargaPedido(int vProd[], int vCod[], int cant)
{
    int pos, cod, unidades;

    printf("Ingres el codigo de producto: ");
    scanf("%d", &cod);
    while(cod != 0)
    {
        pos = Buscar(vCod, cod, cant);
        if (pos == -1)
        {
            printf("Codigo invalido..\n");
        }
        else 
        {
            do
            {
                printf("Ingrese la cantidad de unidades vendidas: ");
                scanf("%d", &unidades);
            } while (unidades < 0);
            
            vProd[pos] += unidades;
        }
            printf("Ingres el codigo de producto: ");
            scanf("%d", &cod);
    }
}

void MostrarListado(int vProd[], int vCod[], int cant)
{
    int i;
    printf("Codigo\tUnidades\n");
    for (i=0; i<cant;i++)
    {
        printf("%d\t%d\n", vCod[i], vProd[i]);
    }
}

int Max(int vProd[], int cant)
{
    int i, max;
    max = vProd[0];
    for (i=1; i<cant; i++)
    {
        if(vProd[i] > max)
            max = vProd[i];
    }

    return max;
}

void Mayores(int vProd[], int vCod[], int cant)
{
    int i, max;
    max = Max(vProd, 10);
    
    printf("El/Los producto/s mas vendido/s son: \n");
    for(i=0; i<cant; i++)
    {
        if(vProd[i] == max)
            printf("Cod: %d\tUnidades: %d\n", vCod[i], vProd[i]);
    }

}

int Min(int vProd[], int cant)
{
    int i, min;
    min = vProd[0];
    for (i=1; i<cant; i++)
    {
        if(vProd[i] < min)
            min = vProd[i];
    }

    return min;
}

void Menores(int vProd[], int vCod[], int cant)
{
    int i, min;
    min = Min(vProd, 10);
    
    printf("El/Los producto/s menos vendido/s son: \n");
    for(i=0; i<cant; i++)
    {
        if(vProd[i] == min)
            printf("Cod: %d\tUnidades: %d\n", vCod[i], vProd[i]);
    }
}
