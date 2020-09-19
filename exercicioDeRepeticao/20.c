// 20. Faça um algoritmo que leia vários números inteiros e calcule o somatório dos números negativos. O fim da leitura será indicado pelo número 0.

#include <stdio.h>
#include <string.h>
#include <complex.h> 
#include <fenv.h>
#include <float.h> 
#include <limits.h> 
#include <math.h>
#include <stdarg.h>

int main(){

    int somatorioNegativos;
    int numerosObtidos[1000];
    int index = 0;

    printf("Insira alguns números:\n");

    while(scanf("%i",&numerosObtidos[index]) && numerosObtidos[index] != 0){
        if(numerosObtidos[index] < 0)
            somatorioNegativos = somatorioNegativos + numerosObtidos[index];
        index++;
    }
    printf("A somatória dos numeros inteiros negativos é %i\n", somatorioNegativos);
}