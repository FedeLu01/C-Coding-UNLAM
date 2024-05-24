/*
Se desea realizar un programa para calcular el sueldo final a pagar a cada empleado de una empresa. De
cada uno se tiene, sueldo básico, antigüedad, cantidad de hijos y estudios superiores ('S' o 'N'). Además, se
conocen los porcentajes de aumento del sueldo que dependen de los siguientes factores:
• Si el empleado tiene más de 10 años de antigüedad: aumento del 10%
• Si el empleado tiene más de 2 hijos: aumento del 10%, si solo tiene uno 5%
• Si el empleado posee estudios superiores: aumento del 5%
Luego de ingresar los datos de un empleado se debe preguntar si se desea ingresar otro empleado o no. Se
termina la carga cuando no se deseen ingresar más empleados.
Determinar:
a. Por cada empleado: número de empleado, el sueldo básico y el nuevo sueldo.
b. Sueldo nuevo promedio de la empresa.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    int sueldoBasico, antiguedad, cantHijos, nroEmpleado, cont = 0;
    float sueldoFinal = 0, suma = 0;
    char estudios, decision;
    
    printf("Ingrese el sueldo basico: $");
    scanf("%d", &sueldoBasico);
    
    printf("Desea ingresar los datos de un empleado? (S o N): ");
    fflush(stdin);
    scanf("%c", &decision);


    while (toupper(decision) == 'S') {
        printf("Ingrese numero de empleado: ");
        scanf("%d", &nroEmpleado);
        printf("Ingrese la antiguedad: ");
        scanf("%d", &antiguedad);
        printf("Cuantos hijos tiene el empleado?: ");
        scanf("%d", &cantHijos);
        printf("El empleado tiene estudios superiores? (S o N): ");
        fflush(stdin);
        scanf("%c", &estudios);

        sueldoFinal = sueldoBasico;
        
        if (toupper(estudios) == 'S') sueldoFinal += sueldoBasico * 0.05;

        if (antiguedad > 10) sueldoFinal += sueldoBasico * 0.10;

        if (cantHijos > 2) sueldoFinal += sueldoBasico * 0.10;
        else if (cantHijos == 1) sueldoFinal += sueldoBasico * 0.05;

        
        
        cont++;
        suma += sueldoFinal; 

        printf("El empleado Nro: %d, de sueldo basico: $%d, tiene un sueldo final de $%.2f\n", nroEmpleado, sueldoBasico, sueldoFinal);

        printf("Desea ingresar los datos de un empleado? (S o N): ");
        fflush(stdin);
        scanf("%c", &decision);
    }
    
    if (cont > 0) {
        printf("Nuevo sueldo promedio de la empresa: $%.2f\n", (float)suma / cont);
    } 



    return 0;
}