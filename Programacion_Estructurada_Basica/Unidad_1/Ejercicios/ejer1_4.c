/*
Se ingresan DNI y nota de un parcial de los alumnos de un curso. El ingreso de datos finaliza con un DNI
negativo. Se sabe que como máximo pueden presentarse a rendir 60 alumnos. Tenga en cuenta que no
pueden existir 2 o más alumnos con el mismo DNI.
Mostrar el Listado de alumnos con su correspondiente DNI y la nota obtenida (en forma de listado), ordenado
de mayor a menor por nota.
*/

#include <stdio.h>

int Carga(int[], int[], int);
int Buscar(int[], int, int);
void Ordenar(int[], int[], int);
void Mostrar(int[], int[], int);

int main() 
{   
    int total;
    int vDni[60];
    int vNota[60];
    total = Carga(vDni, vNota, 60);
    Ordenar(vDni, vNota, total);
    Mostrar(vDni, vNota, total);
    return 0;
}



int Buscar(int v[], int dato, int ce)
{
    int i = 0, pos = -1;

    while(i<ce && pos == -1)
    {
        if(v[i] == dato)
            pos = i;
        else
            i++;
    }

    return pos;
}

int Carga(int vDni[], int vNota[], int ce)
{
    int contador = 0, dni, nota, pos;

    
    printf("Ingrese el numero de DNI: ");
    scanf("%d", &dni);
    
    while (dni > 0 && contador < ce)
    {
        vDni[contador] = dni;
        
        do 
        {
            printf("Ingrese la nota: ");
            scanf("%d", &nota);
        } while (nota < 0 || nota > 10);

        vNota[contador] = nota;

        contador++;

        do 
        {
            printf("Ingrese el numero de DNI: ");
            scanf("%d", &dni);
            pos = Buscar(vDni, dni, contador);
        } while(pos != -1);
    }

    return contador;
}

void Ordenar(int vDni[], int vNota[], int ce)
{
    int posmax, i, j, auxDni, auxNota;

    for(i = 0; i < ce-1; i++)
    {
        posmax = i;
        for(j = i+1; j < ce; j++)
        {
            if(vNota[j] > vNota[posmax])
                posmax = j;
        }
        if(posmax != i)
        {
            auxNota = vNota[i];
            auxDni = vDni[i];
            vDni[i] = vDni[posmax];
            vNota[i] = vNota[posmax];
            vDni[posmax] = auxDni;
            vNota[posmax] = auxNota;
        }
    }
}

void Mostrar(int vDni[], int vNota[], int ce)
{
    int i = 0;
    printf("DNI\tNota\n");
    while(i < ce)
    {
        printf("%d\t%d\n", vDni[i], vNota[i]);
        i++;
    }
}