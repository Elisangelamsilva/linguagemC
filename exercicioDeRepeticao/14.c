// 14. Escrever um algoritmo que leia um número não determinado de valores e calcule a média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores negativos e o percentual de valores negativos e positivos. Mostre os resultados.

#include <stdio.h>
#include <string.h>
#include <complex.h> 
#include <fenv.h>
#include <float.h> 
#include <limits.h> 
#include <math.h>
#include <stdarg.h>

    int quant = 0;

    float gMedia = 0;
    int gSoma = 0;

    int contNeg = 0;
    int contPos = 0;

    int porcNeg;
    int porcPos;

int main(void){

        printf("Quantidade de valores:\n");
        scanf("%i", &quant);

         int valores[quant];

        void receberValores(int valores[]);
        receberValores(valores);

        float quantidadePositivosNegativos(int valores[]);
        quantidadePositivosNegativos(valores);
            

        float media(int quant);
        media(quant);

}

void receberValores(int valores[]){

    printf("Insira valores:\n");
    for(int i=0;i < quant; i++){
        scanf("%i", &valores[i]);
    }
}

float quantidadePositivosNegativos(int valores[]){
    for(int i =0; i < quant; i++){
        gSoma += valores[i];
        if (valores[i] > 0) contPos += 1;
        else contNeg += 1;
    }
    
    printf("A quantidade de números positivos é %i e negativos é %i\n", contPos, contNeg);
}



float media(int quant){
    gMedia = (gSoma/quant);

    porcNeg = (contNeg/gSoma)*100;
    porcPos = (contPos/gSoma)*100;

    printf("A média é: %f\n", gMedia);
    printf("A porcentagem de positivos é %i e a porcentagem de negativos é %i\n", porcPos, porcNeg);

}


