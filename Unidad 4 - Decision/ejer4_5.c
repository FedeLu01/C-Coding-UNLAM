#include<stdio.h>

int main() {
    int n1, n2, n3;

    printf("Ingrese un valor: ");
    scanf("%d", &n1);
    printf("Ingrese un valor: ");
    scanf("%d", &n2);
    printf("Ingrese un valor: ");
    scanf("%d", &n3);

    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 > n3) {
        int temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 > n3) {
        int temp = n2;
        n2 = n3;
        n3 = temp;
    }

    printf("Los numeros en orden creciente son: %d, %d, %d\n", n1, n2, n3);
    
    /*
        El algoritmo es el siguiente:
        Supongamos que los valores ingresados son N1 = 5 -- N2 = 3 -- N3 = 2 
        Si 5 es mayor que 3, guardo mi valor de 5 en una variable temporal, luego, el valor 3 se guarda en N1 y, en N2 guardo, mi valor temporal que es 5
        Quedaria N1 = 3 -- N2 = 5 -- N3 = 2
        
        Ahora si 3 es mayor a 2: guardo mi valor 3 en una variable temporal, luego en N1 guardo el 2, y en N3 guardo el 3 (valor temporal)
        Quedaria N1 = 2 -- N2 = 5 -- N3 = 3

        Ahora si 5 es mayor a 3: guardo mi valor 5 en una variable temporal, luego guardo en N2 mi valor 3 y en N3 guardo mi valor 5 (valor temporal)
        Quedaria: N1 = 2 -- N2 = 3 -- N3 = 5

        Con esta explicacion, lease el codigo para entender los otros casos  
    */

    return 0;
}