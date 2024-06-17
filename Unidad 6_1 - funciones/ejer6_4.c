/*
Se ingresa valores positivos entre 1 y 50, finalizando el ingreso con el valor -10, para ello generar una función
que valide dicho ingreso. Calcular:
a. Cuántos números son primos.
b. Cantidad de números pares.
c. Promedio de los números impares.
Utilizar las siguientes funciones:
• Resto: recibe por parámetro el Dividendo y el Divisor; Retorna el resto.
• EsPar: recibe por parámetro un número; Retorna 1 si es Par, 0 si es Impar; Invoca a la función Resto.
• EsPrimo: recibe por parámetro un número; Retorna 1 si es primo, 0 si no es primo; Invoca a la
función Resto. (un número es primo si solo es divisible por 1 y por sí mismo).
• Promedio: recibe por parámetro la suma y el contador; Retorna el promedio si contador > 0 sino
Retorna 0
*/
#include <stdio.h>

int ValidaValor();
int Resto(int, int);
int EsPar(int);
int EsPrimo(int);
int Promedio(int, int);

int main() {
    int num, contPrimos = 0, contPromedio = 0, contPares = 0, flag = 0, totalImpares = 0;
    float promedio;

    while (flag == 0) {
        num = ValidaValor();

        if (num == -10) {
            flag = 1;
            break;
        }

        if (EsPrimo(num) == 1) {
            contPrimos++;
        }

        if (EsPar(num) == 1) {
            contPares++;
        } 
        else if (EsPar(num) == 0) {
            totalImpares += num;
        }

        contPromedio++;
    }
    promedio = Promedio(totalImpares, contPromedio);

    printf("Cuantos numeros son primos: %d\nCantidad de numeros pares: %d\nPromedio de los numeros impares: %.2f\n", contPrimos, contPares, promedio);

    return 0;
}

int ValidaValor() {
    int num;
    do {
        printf("Ingrese un valor entre 1 y 50: ");
        scanf("%d", &num);
    } while(num != -10 && (num < 1 || num > 50));
    return num;
}

int Resto(int dividendo, int divisor) {
    return dividendo % divisor;
}

int EsPar(int num) {
    if (Resto(num, 2) == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int EsPrimo(int num) {
    int cont = 0;
    for (int i = 1; i < num; i++) {
        if (Resto(num, i) == 1) {
            cont++;
        }
    }

    if (cont == 2) {
        return 0;
    }
    else {
        return 1;
    }
}

int Promedio(int suma, int contador) {
    if (contador > 0) {
        return (float) suma / contador;
    }
    else {
        return 0;
    }
}