/*
Confeccionar un programa que permita determinar e informar en cuántos de los números enteros
comprendidos entre 10001 y 90009 existen más cifras 3 que 4. Debe existir por lo menos, un 4 para que
sea considerado el número como válido. Para resolverlo confeccionar una función llamada CIFRAS, que
pueda determinar cuántas cifras "n" existen en un número de 5 cifras.
*/
#include <stdio.h>

int Cifras(int, int);

int main() {
    printf("**Teniendo en cuenta que solo los numeros que tienen un 4 son considerados validos:\nEntre las cifras 10001 a 90009, hay %d cifras con mas tres que cuatros...", Cifras(10001, 90009));
}

int Cifras (int min, int max) {
    int pos1, pos2, pos3, pos4, pos5, count4 , count3, contFinal = 0;
    int i = min;
    while(i <= max) {
        
        pos5 = i % 10;
        pos4 = (i % 100) / 10;
        pos3 = (i / 100) % 10;
        pos2 = (i / 1000) % 10;
        pos1 = i / 10000;

        

        if (pos1 == 4 || pos2 == 4 || pos3 == 4 || pos4 == 4 || pos5 == 4) {
            count4 = 0;
            count3 = 0;

            switch(pos1){
                case 3:
                    //printf("Entre 3\n");
                    count3++;
                    break;
                case 4:
                    //printf("Entre 4\n");
                    count4++;
                    break;
            }

            switch(pos2){
                case 3:
                    // printf("Entre 3\n");
                    count3++;
                    break;
                case 4:
                    //printf("Entre 4\n");
                    count4++;
                    break;
            }

            switch(pos3){
                case 3:
                    //printf("Entre 3\n");
                    count3++;
                    break;
                case 4:
                    //printf("Entre 4\n");
                    count4++;
                    break;
            }

            switch(pos4){
                case 3:
                    //printf("Entre 3\n");
                    count3++;
                    break;
                case 4:
                    //printf("Entre 4\n");
                    count4++;
                    break;
            }

            switch(pos5){
                case 3:
                    //printf("Entre 3\n");
                    count3++;
                    break;
                case 4:
                    //printf("Entre 4\n");
                    count4++;
                    break;
            }
            //printf("%d - %d - %d - %d - %d\n", pos1, pos2, pos3, pos4, pos5);
            //printf("Cont3 = %d\nCont4 = %d\n", count3, count4);
            if (count3 > count4) {
                contFinal++;
                //printf("Entre contador...\n");
            }
        }
        
        i++;
    }

    return contFinal;
}