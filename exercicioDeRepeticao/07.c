/*
7. Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. O algoritmo deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código for igual a zero.
*/
#include <stdio.h>

int main(){
    
    int quantNotas = 3;
    int codigoA = 0;
    float nota[3] = {0};
    float soma;
    float media; 

            printf("Insira o código do aluno: \n");
            scanf("%i", &codigoA);

            printf("Isira 3 notas: \n");
            for (int i = 0; i < quantNotas; i++)
                scanf("%f", &nota[i]);
        
           for (int i = 0; i < quantNotas; i++)
                soma += nota[i];

        media = soma / quantNotas;
        printf("A média do aluno com código %i é %f\n", codigoA, media);

    
}