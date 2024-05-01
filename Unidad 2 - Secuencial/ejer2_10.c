#include<stdio.h>

void main()
{
    int radio;

    printf("Ingrese el valor de un radio: ");
    scanf("%d", &radio);

    printf("La superficie del circulo es: %d\n", radio * radio);
    printf("El perimetro del circulo es: %.2f\n", (float)(2 * 3.14 * radio));
    printf("El volumen del circulo es: %.2fL", (4/3 * 3.14 * radio * radio * radio));
}