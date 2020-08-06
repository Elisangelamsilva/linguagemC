//FINALIZAÇÃO
/*
9. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.
*/
#include <stdio.h>

int main(){
    float leia[50] = {0};
    float maior = 0;
    float menor =__FLT_MAX__;

    printf("Insira 50 números:\n");
    
    for(int i = 0; i < 50; i++){
        scanf("%f", &leia[i]);
        
        if (leia[i] > maior) maior = leia[i];
        if (leia[i] < menor) menor = leia[i];
        
    }

    printf("O maior é %f e o menor é %f\n", maior,menor);
}