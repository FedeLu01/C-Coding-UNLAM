#include<stdio.h>

void main() {
    int mib, gib, tib, kib;

    printf("Ingrese un valor expresado en KiB: ");
    scanf("%d", &kib);

    mib = kib / 1024;
    gib = mib / 1024;
    tib = gib / 1024;


    printf("\n%dKiB son %dTiB\n", kib, tib);
    printf("%dKiB son %dGiB\n", kib, gib);
    printf("%dKiB son %dMiB\n", kib, mib);
}