//FINALIZADO 
// 19. Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos números lidos.

#include <stdio.h>
#include <string.h>
#include <complex.h> 
#include <fenv.h>
#include <float.h> 
#include <limits.h> 
#include <math.h>
#include <stdarg.h>

int quantDeValores;
float pares;
float impares;
float mediaPares;
float mediaImpares;

int main(){

    printf("Quantidade de valores:\n");
    scanf("%i", &quantDeValores);

    int valoresObtidos[quantDeValores];

    int obterValores(int valoresObtidos[]);
    obterValores(valoresObtidos);

    int calcularSomar(int valoresObtidos[]);
    calcularSomar(valoresObtidos);
}
int obterValores(int valoresObtidos[]){
    printf("Insira valores:\n");
    for(int i = 0;i<quantDeValores;i++){
        scanf("%i", &valoresObtidos[i]);
    }
}
int calcularSomar(int valoresObtidos[]){
    for(int i =0;i<quantDeValores;i++){
        if (valoresObtidos[i] % 2 == 0){
            pares = pares + 1;
        }else if (valoresObtidos[i] % 2 != 0){
            impares = impares + 1;
        }
    }
    printf("A quantidade de números pares é %f e ímpares %f.\n", pares, impares);
    printf("A média de números pares é %0.2f e ímpares %0.2f.\n", pares/quantDeValores, impares/quantDeValores);
}