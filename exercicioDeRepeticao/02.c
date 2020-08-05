/*
2. Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E.  
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!
*/
#include <stdio.h>

int main(){

    int i, valorInteiro;
    float fatoracao = 1;
    float res = 1;

    printf("Insira um número inteiro:\n");
    scanf("%i\n", &valorInteiro);

    for(i = 1; i <= valorInteiro; i++){
        fatoracao = fatoracao * i;
        res = res + 1/fatoracao;
    }
    printf("O valor de E é: %f\n", res);

    return 0;
}