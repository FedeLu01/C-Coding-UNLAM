/*
De cada uno de los alumnos de un curso se ingresa su número de DNI y las notas de los dos exámenes parciales 
confeccionar, un programa que muestre por cada alumno su condición final con el siguiente
mensaje:
"El alumno con DNI: xxxxxxx, obtuvo las notas: xx y xx [condición final]"
La condición final se establece según las siguientes reglas:
• PROMOCIONA: ambas notas > = 7
• RINDE EXAMEN FINAL: ambas notas > = 4
• REPROBO LA MATERIA: alguna nota no cumple lo anterior
El programa finaliza cuando se ingresa un valor negativo como número de DNI. Al finalizar mostrar la nota
promedio de alumnos promocionados.
*/
#include<stdio.h>

int main() {
    int dni, nota1, nota2;
    printf("Ingrese el numero de DNI (valor negativo para finalizar): ");
    scanf("%d", &dni);

    while (dni > 0) {
        printf("Ingrese la nota del 1er parcial: ");
        scanf("%d", &nota1);
        printf("Ingrese la nota del 2do parcial: ");
        scanf("%d", &nota2);

        if (nota1 >= 7 && nota2 >= 7) printf("El alumno con DNI: %d, obtuvo las notas: %d y %d. PROMOCIONA\n", dni, nota1, nota2);
        else if (nota1 >= 4 && nota2 >= 4 ) printf("El alumno con DNI: %d, obtuvo las notas: %d y %d. RINDE EXAMEN FINAL\n", dni, nota1, nota2);
        else if (nota1 < 4 && nota2 < 4) printf("El alumno con DNI: %d, obtuvo las notas: %d y %d. REPROBO LA MATERIA\n", dni, nota1, nota2);

        printf("Ingrese el numero de DNI (valor negativo para finalizar): ");
        scanf("%d", &dni);
    }
    return 0;
}