/*
Se realizó un concurso de tiro al blanco. Por cada participante se ingresa un número que lo identifica y el
resultado de los disparos efectuados. El ingreso finaliza con un número de participante negativo.
Cada participante efectúa 5 disparos, registrándose las coordenadas X-Y de cada disparo.
• No considere disparos sobre los ejes, pero sí en el centro (si es sobre los ejes las coordenadas
deberán volver a ingresarse).
• Para determinar el cuadrante utilizar la función CUADRANTE que reciba las dos coordenadas y
retorne el cuadrante al cual pertenece (1 a 4) y 0 para indicar un tiro en el centro.
Para calcular el puntaje utilizar la función PUNTAJE que reciba 5 parámetros que representan la cantidad
disparos en cada cuadrante y en el centro. La función debe retornar el puntaje obtenido según la siguiente
escala:
✓ Cuadrantes 1 y 2: 50 puntos
✓ Cuadrantes 3 y 4: 40 puntos
✓ Centro: 100 puntos
Determinar:
a. El puntaje obtenido por cada participante, detallando cuantos disparos realizó en cada cuadrante.
b. Mostrar el número del participante ganador y el puntaje obtenido.
c. Calcular y mostrar la cantidad total de disparos en el centro (de todos los participantes)
*/
#include <stdio.h>

int Cuadrante(int, int);
int Puntaje(int, int, int, int, int);

int main() {
    int flag = 0, nroPart, x, y, score, dispCuadI, dispCuadII, dispCuadIII, dispCuadIV, dispCentro, sumCentros = 0, maxPuntos = 0, ganador;

    do {
        printf("Ingrese el numero del participante: ");
        scanf("%d", &nroPart);

        if (nroPart >= 0) {
            dispCuadI = 0, dispCuadII = 0, dispCuadIII = 0, dispCuadIV = 0, dispCentro = 0;
            for(int i = 1; i <= 5; i++) {
                printf("Ingrese la coordenada X del disparo %d: ", i);
                scanf("%d", &x);
                printf("Ingrese la coordenada Y del disparo %d: ", i);
                scanf("%d", &y);

                switch(Cuadrante(x, y)) {
                    case 0:
                        sumCentros++;
                        dispCentro++;
                        break;
                    case 1:
                        dispCuadI++;
                        break;
                    case 2: 
                        dispCuadII++;
                        break;
                    case 3:
                        dispCuadIII++;
                        break;
                    case 4:
                        dispCuadIV++;
                        break;
                    default: 
                        break;
                }
            }
            
            score = Puntaje(dispCuadI, dispCuadII, dispCuadIII, dispCuadIV, dispCentro);

            if (flag == 0 || score > maxPuntos) {
                flag = 1;
                maxPuntos = score;
                ganador = nroPart;
            }

            printf("Puntaje total del participante %d: \nDisparos en Cuadrante I: %d\nDisparos en Cuadrante II: %d\n", nroPart, dispCuadI, dispCuadII);
            printf("Disparos en Cuadrante III: %d\nDisparos en Cuadrante IV: %d\nDisparos en el Centro: %d\n", dispCuadIII, dispCuadIV, dispCentro);
            printf("Calculando un puntaje total de: %d puntos\n\n", score);


        }

    } while (nroPart > 0);

    if (maxPuntos > 0) {
        printf("\nEl participante ganador es: #%d\nPuntos: %d\n\nCantidad de disparos en el centro de todos los participantes: %d", ganador, maxPuntos, sumCentros);
    }

    return 0;
}

int Cuadrante(int x, int y) {
    if (x >= 0 && y > 0) {
        return 1;
    }
    if (x <= 0 && y > 0) {
        return 2;
    }
    
    if (x <= 0 && y < 0) {
        return 3;
    }
    
    if (x >= 0 && y < 0) {
        return 4;
    }
    
    if (x == 0  && y == 0) {
        return 0;
    }
}

int Puntaje(int dispCuadI, int dispCuadII, int dispCuadIII, int dispCuadIV, int dispCentro) {
    int sum = ((dispCuadI + dispCuadII) * 50) + ((dispCuadIII + dispCuadIV) * 40) + (dispCentro * 100);
    return sum; 
}