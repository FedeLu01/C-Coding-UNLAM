#include<stdio.h>

int main() {
    int nota, legajo, aplazados;

    for (int i = 1; i <= 20; i++) {
        printf("Ingrese el legajo del alumno: ");
        scanf("%d", &legajo);
        printf("Ingrese la nota del alumno: ");
        scanf("%d", &nota);

        if (nota >= 7) {
            printf("El alumno con legajo %d ha Promocionado.\n", legajo);
        }
        else {
            printf("El alumno esta aplazado.\n");
        }
    }
}