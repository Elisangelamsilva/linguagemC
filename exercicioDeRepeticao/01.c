/*Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação.*/
#include <stdio.h>

int main(void){

    float valores[5] = {0};
    float soma = 0;

    printf("Insira 5 notas:\n");

        for (int i = 0; i < 5; i++)
        scanf("%f", &valores[i]);

        for (int i = 0; i < 5; i++)
            if(valores[i] < 0){
                soma += 1;
            }

        printf("A soma dos valores negativos é %f\n", soma);

}