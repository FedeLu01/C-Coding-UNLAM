/*
Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos efectúa 3 disparos,
registrándose las coordenadas X-Y de cada disparo. Determinar:
a. Cuantos disparos se efectuaron en cada cuadrante por cada participante
b. Cuantos disparos se efectuaron en total en el centro.
NOTA: no considere disparos sobre los ejes
*/
#include <stdio.h>

int main() {

    int x, y, part1, part2, part3, cuad1 = 0, cuad2 = 0, cuad3 = 0, cuad4 = 0, centro = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Dispara el participante: %d\n", i);
        for (int j = 1; j <= 3; j++) {
            printf("Ingrese las cordenada x: ");
            scanf("%d", &x);
            printf("Ingrese las cordenada y: ");
            scanf("%d", &y);

            if (x > 0 && y > 0) cuad1++;

            if (x < 0 && y > 0) cuad2++;

            if (x < 0 && y < 0) cuad3++;

            if (x > 0 && y < 0) cuad4++;

            if (x == 0 && y == 0) centro++;
        }

        printf("El participante %d efectuo los siguientes disparos:\n", i);
        printf("Cuadrante I: %d\nCuadrante II: %d\nCuadrante III: %d\nCuadrante IV: %d\nCentro: %d\n", cuad1, cuad2, cuad3, cuad4, centro);

        cuad1 = 0;
        cuad2 = 0;
        cuad3 = 0;
        cuad4 = 0;
        centro = 0;
    }

    return 0;
}