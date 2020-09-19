// FINALIZADO
// 18. Escrever um algoritmo que lê um número não determinado de valores para m, todos inteiros e positivos, um de cada vez. Se m for par, verificar quantos divisores possui e escrever esta informação. Se m for ímpar e menor do que 10 calcular e escrever o fatorial de m. Se m for ímpar e maior ou igual a 10 calcular e escrever a soma dos inteiros de 1 até m.

#include <stdio.h>
#include <string.h>
#include <complex.h> 
#include <fenv.h>
#include <float.h> 
#include <limits.h> 
#include <math.h>
#include <stdarg.h>

int quantDeNumeros;
int divisores = 0;
int divisao = 1;
int fatorialImpar = 1;
int somaImpares = 0;

int main(){

    printf("Quantidade de valores:\n");
    scanf("%i", &quantDeNumeros);

    int valoresObtidos[quantDeNumeros];

    int valoresObtidosDoUsuario(int valoresObtidos[]);
    valoresObtidosDoUsuario(valoresObtidos);

    int numerosPares(int valoresObtidos[]);
    numerosPares(valoresObtidos);
}
int valoresObtidosDoUsuario(int valoresObtidos[]){
    printf("Insira os valores:\n");
    for(int i = 0; i < quantDeNumeros;i++){
        scanf("%i", &valoresObtidos[i]);
    }
}
int numerosPares(int valoresObtidos[]){

    for(int i =0; i<quantDeNumeros;i++){

        if (valoresObtidos[i] <= 0){
            printf("Insira um número válido!");
            break;

        }else if (valoresObtidos[i] % 2 == 0){
            while (valoresObtidos[i] % divisao == 0){
                divisores = divisores + 1;
                divisao++;
            }
                printf("Para o número %i existem %i divisores.\n", valoresObtidos[i], divisores);

        } else if(valoresObtidos[i] < 10 && valoresObtidos[i] % 2 != 0){
            for(int b = valoresObtidos[i]; b > 1; b--){
                fatorialImpar = fatorialImpar * b;
            }
                printf("O número %i é ímpar menor de 10, seu fatorial é %i.\n", valoresObtidos[i], fatorialImpar);
        }
        else{
            for(int c = 1; c < valoresObtidos[i]; c++){
                somaImpares = somaImpares + c;
            }
                printf("O número %i é ímpar maior/igual a 10. A somatoria dos números anteriores a ele é %i\n", valoresObtidos[i], somaImpares);


        } 
    }
}
