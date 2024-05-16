#include<stdio.h>

int main() {
    int num, cant, cantP, cantN, ceros = 0;
    float promN, promP;
    
    printf("Ingrese un valor menor a 12: ");
    scanf("%d", &num);

    if (num > 12) printf("Valor excedido");
    if (num < 12) {
        printf("Ingrese la cantidad de numeros reales sobre los cuales calcular: ");
        scanf("%d", &cant);
        for (int i = 1; i <= cant; i++) {
            int temp;
            printf("Ingrese un numero real (positivo o negativo): ");
            scanf("%d", &temp);
            if (temp == 0) ceros++;
            if (temp > 0) {
                promP += temp;
                cantP++;
            }
            if (temp < 0){
                promN -= temp;
                cantN++;  
            } 
        }
    }
    if (num < 0) printf("Cantidad invalida");

    promP = promP / cantP;
    promN = promN / cantN;

    printf("El promedio de los numeros positivos es %.2f\n", promP);
    printf("El promedio de los numeros negativos es %.2f\n", promN);
    printf("La cantidad de ceros es: %d\n", ceros);
    

    return 0;
}