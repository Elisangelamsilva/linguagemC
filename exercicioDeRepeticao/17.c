//17. Escrever um algoritmo que lê um número não determinado de pares de valores m,n, todos inteiros e positivos, um par de cada vez, e calcula e escreve a soma dos n inteiros consecutivos a partir de m inclusive.

#include <stdio.h>
#include <string.h>
#include <complex.h> 
#include <fenv.h>
#include <float.h> 
#include <limits.h> 
#include <math.h>
#include <stdarg.h>

int inicial;
int final;
int soma = 0;

int main(){

    printf("Valor inicial\n:");
    scanf("%i", &inicial);

    printf("Valor final:\n");
    scanf("%i", &final);

    int realizacaoDoCalculo(int inicial, int final);
    realizacaoDoCalculo(inicial,final);
}
int realizacaoDoCalculo(int inicial, int final){
    int i = inicial;
    for(;i <= final; i++){
        soma = soma + i;
    }
    printf("%i\n", soma);
}