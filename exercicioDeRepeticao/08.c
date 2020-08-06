//FINALIZAÇÃO
/*
8. Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0).
*/
#include <stdio.h>

int main(){
    int entrada;
    double media = 0;
    double soma = 0;
    double quant = 0;

    
        printf("Insira alguns números pares: \n"); 
        do{
            scanf("%d", &entrada);
            if (entrada != 0){
                if((entrada % 2) == 0){
                    soma += entrada;
                    quant += 1;
                }  
            }
        }while(entrada != 0);

        if (quant != 0){
             media = soma / quant;
        } else
        {
            printf("Nenhum número par digitado.\n");
        }

        printf("A média é: %f\n", media);
}