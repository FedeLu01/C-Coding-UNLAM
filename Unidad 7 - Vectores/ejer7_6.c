/*
Se ingresan DNI, código de sector (1 a 5) y sueldo de los empleados de una empresa. Se sabe que como
máximo la empresa tiene 100 empleados. Se desea:
a. Cargar los datos de los empleados mediante la función CargaEmpleados. La carga finaliza con un
empleado con DNI 99.
b. Generar un vector con la cantidad de empleados en cada sector mediante la función
CuentaPorSector y mostrarlo en forma de listado.
c. Determinar el importe total a pagar de sueldos mediante la función TotalAPagar.
*/
#include <stdio.h>

int CargaEmpleados(int[], float[], int[], int);
void CuentaPorSector(int[], int[]);
float TotalAPagar(float[]);

int main() {
    int vDni[100] = {0};
    float vSueldo[100] = {0};
    float total;
    int vSector[100] = {0};
    int cantEmpXSector[5] = {0};
    int validar = 0;
    int cont = 0;

    do {
        validar = CargaEmpleados(vDni, vSueldo, vSector, cont);
        cont++;
    } while (validar == 0);

    CuentaPorSector(vSector, cantEmpXSector);
    total = TotalAPagar(vSueldo);
    printf("El total a pagar de todos los empleados es: $%.2f", total);

    return 0;
}

int CargaEmpleados(int vDni[], float sueldos[], int sectores[], int cont) {
    int dni, sector;
    float sueldo;
    do{
        printf("Ingrese el dni del empleado: ");
        scanf("%d", &dni);

        if(dni <= 0) {
            printf("Error. Vuelva a ingresar el dato\n");
        }
    } while (dni <= 0 && dni != 99);

    if (dni == 99) {
        return 1;
    }

    do {
        printf("Ingrese el sector del empleado: ");
        scanf("%d", &sector);

        if (sector < 1 || sector > 5) {
            printf("Error. Vuelva a ingresar el dato\n");
        }
    } while (sector < 1 || sector > 5);

    do {
        printf("Ingrese el sueldo del empleado: $");
        scanf("%f", &sueldo);

        if(sueldo < 0) {
            printf("Error. Vuelva a ingresar el dato\n");
        }
    } while (sueldo < 0);

    vDni[cont] = dni;
    sueldos[cont] = sueldo;
    sectores[cont] = sector;

    return 0;
}

void CuentaPorSector(int sectores[], int cantSectores[]){
    for(int i = 0; i < 100; i++) {
        switch (sectores[i])
        {
        case 1:
            cantSectores[0]++;
            break;
        case 2:
            cantSectores[1]++;
            break;
        case 3:
            cantSectores[2]++;
            break;
        case 4:
            cantSectores[3]++;
            break;
        case 5:
            cantSectores[4]++;
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("Sector\tCant Empleados\n  %d\t%d\n", i + 1, cantSectores[i]);
    }
}

float TotalAPagar(float sueldos[]){
    float total = 0;
    for(int i = 0; i < 100; i++) {
        if(sueldos[i] > 0) {
            total += sueldos[i];
        }
    }

    return total;
}