// 15. Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido um número negativo.

#include <stdio.h>
#include <string.h>
#include <complex.h> 
#include <fenv.h>
#include <float.h> 
#include <limits.h> 
#include <math.h>
#include <stdarg.h>

int main(){

    int i=0;
    int intervalo1=0;
    int intervalo2=0;
    int intervalo3=0;
    int intervalo4=0;

    printf("Insira valores:\n");

    while(i >= 0){
            scanf("%i", &i);

            if (i < 0){
                break;
            }
            if (i >= 0 && i <= 25){
                intervalo1 +=1;
            }
            if (i >= 26 && i <= 50){
                intervalo2 +=1;
            }
            if (i >= 51 && i <= 75){
                intervalo3 +=1;
            }
            if (i >= 76 && i <= 100){
                intervalo4 +=1;
            }

    };

    printf("A quantidade no primeiro intervalo é %i, no segundo %i, no terceiro %i e no quarto e último intervalo %i.\n", intervalo1,intervalo2,intervalo3,intervalo4);
}


