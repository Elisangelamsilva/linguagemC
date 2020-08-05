/*
5. Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, lidos externamente. O final da leitura acontecerá quando for lido um valor negativo.
*/
#include <stdio.h>

int main(){
    float positivos;
    float soma =0;
    float media = 0;
    int quatd = 0;

    printf("Insira números positivos:\n");
    while(positivos > -1){

        soma = positivos +soma;
        quatd += 1;
        media = soma / quatd;

        scanf("%f", &positivos);
    }
    printf("A média dos números inseridos é %f\n", media);

}