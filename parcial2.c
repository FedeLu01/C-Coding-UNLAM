/*
Se ingresan por teclado los datos de los productos de un comercio.
Por cada producto se ingresa:
Codigo de producto (de 1 a 9000)
Cantidad de unidades en stock (de 1 a 200)
Codigo de rubro al que pertenece (1 a 15)
Como maximo son 1000 productos. El ingreso de datos finaliza con codigo cero.
Se pide:
a) Al finalizar el ingreso de datos mostrar codigo y el mensaje "Alerta, stock insuficientes" de aquellos prodcutos cuyo stock es menor a 3 unidades.
b) mostrar stock promedio
c) mostrar por cada rubro: codigo y cantidad de productos por rubro
Hacer como minimo funcion para la validacion de datos y para el ingreso de datos
*/
#include <stdio.h>

int IngresoDatos(int[], int[], int[], int);
float StockPromedio(int[], int);
void MostrarDatos(int[], int[]);
void StockInsuficiente(int[], int[]);

int main() {
    int vCantidades[1000] = {0};
    int vCodProducto[1000] = {0};
    int vCodRubro[1000] = {0};
    int validar = 0;
    int contador = 0;
    float promedio;

    do {
        validar = IngresoDatos(vCodProducto, vCantidades, vCodRubro, contador);
        contador++;
    } while (validar == 0 && contador != 1000);

    promedio = StockPromedio(vCantidades, contador);

    // Esto lo hago para que no se imprima basura si no si ingresaron valores. Tiene que ser mayor a uno porque en la primera iteracion puedo salir con codigo 0, lo que dejaria el contador en 1 y valores basura.
    if (contador > 1) {
        // punto a
        StockInsuficiente(vCantidades, vCodProducto);

        //punto b
        printf("El promedio entre todos los productos es: %.2f\n", promedio);

        //punto c
        MostrarDatos(vCantidades, vCodRubro);
    }
    
    return 0;
}

int IngresoDatos(int vCodigo[], int vCantidades[], int vRubro[], int contador) {
    int codigo, cantidad, codRubro;
    do {
        printf("Ingrese el codigo del producto (entre 1 y 9000): ");
        scanf("%d", &codigo);

        if((codigo < 1 || codigo > 9000) && codigo != 0) {
            printf("Codigo no existente...\n");
        }
    } while ((codigo < 1 || codigo > 9000) && codigo != 0);

    if(codigo == 0) {
        return 1;
    }

    do {
        printf("Ingrese la cantidad de unidades en stock (entre 1 y 200): ");
        scanf("%d", &cantidad);

        if(cantidad < 1 || cantidad > 200) {
            printf("Cantidad invalida..\n");
        }
    } while (cantidad < 1 || cantidad > 200);

    do {
        printf("Ingrese el codigo de rubro (entre 1 y 15): ");
        scanf("%d", &codRubro);

        if (codRubro < 1 || codRubro > 15) {
            printf("Codigo de rubro invalido...\n");
        }
    } while (codRubro < 1 || codRubro > 15);

    vCodigo[contador] = codigo;
    vCantidades[contador] = cantidad;
    vRubro[contador] = codRubro;

    return 0;
}

float StockPromedio(int vCantidades[], int contador) {
    int suma = 0;
    float promedio;
    for (int i = 0; i < 1000; i++) {
        suma += vCantidades[i];
    }
    
    promedio = (float)suma / contador;
    
    return promedio;
}

void MostrarDatos(int vCantidades[], int vRubro[]){
    int cantPorRubro[15] = {0};

    for (int i = 0; i < 1000; i++) {
        switch (vRubro[i])
        {
        case 1:
            cantPorRubro[0] += vCantidades[i]; 
            break;
        case 2:
            cantPorRubro[1] += vCantidades[i]; 
            break;
        case 3:
            cantPorRubro[2] += vCantidades[i]; 
            break;
        case 4:
            cantPorRubro[3] += vCantidades[i]; 
            break;
        case 5:
            cantPorRubro[4] += vCantidades[i]; 
            break;
        case 6:
            cantPorRubro[5] += vCantidades[i]; 
            break;
        case 7:
            cantPorRubro[6] += vCantidades[i]; 
            break;
        case 8:
            cantPorRubro[7] += vCantidades[i]; 
            break;
        case 9:
            cantPorRubro[8] += vCantidades[i]; 
            break;
        case 10:
            cantPorRubro[9] += vCantidades[i]; 
            break;
        case 11:
            cantPorRubro[10] += vCantidades[i]; 
            break;
        case 12:
            cantPorRubro[11] += vCantidades[i]; 
            break;
        case 13:
            cantPorRubro[12] += vCantidades[i]; 
            break;
        case 14:
            cantPorRubro[13] += vCantidades[i]; 
            break;
        case 15:
            cantPorRubro[14] += vCantidades[i]; 
            break;
        
        default:
            break;
        }
    }

    for(int i = 0; i < 15; i++) {
        printf("Codigo de rubro: %d\tCantidades de stock: %d\n", i + 1, cantPorRubro[i]);
    }
}

void StockInsuficiente(int vCantidades[], int vCodigo[]) {
    for(int i = 0; i < 1000; i++) {
        if(vCantidades[i] > 0 && vCantidades[i] < 3) {
            printf("Alerta, stock insuficiente para el producto codigo: %d\n", vCodigo[i]);
        }
    }
}