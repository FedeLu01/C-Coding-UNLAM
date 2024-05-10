#include<stdio.h>

int main() {
    int articulo;

    printf("Ingrese el numero de articulo: ");
    scanf("%d", &articulo);
    
    if (articulo >= 1200 && articulo <= 90000) {
        if (articulo >= 12121 && articulo <= 18081){
            printf("Producto defectuoso");
        }
        if (articulo >= 30012 && articulo <= 45565){
            printf("Producto defectuoso");
        }
        if (articulo >= 67000 && articulo <= 68000){
            printf("Producto defectuoso");
        }
        else {
            printf("Producto en buen estado");
        }
    }
    else {
        printf("Fuera de catalogo");
    }

    return 0;
}