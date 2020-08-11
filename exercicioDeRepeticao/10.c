/*
10. Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a média for menor que 5. Repita a operação até que o código lido seja negativo.
*/

#include <stdio.h>

int main(){

    const int quantNotas = 3;
    float media = 0;

    float notaAlunos[codigoAluno][quantNotas] = {0};
    float mediasAlunos[numDeAlunos] = {0};


    printf("Insira o código do aluno: \n");
    printf("Insira 3 notas: \n");

    do{
        for(int notas = 0; notas <= quantNotas; notas++){
            scanf("%f", &codigoAluno);
            scanf("%f", &notaAlunos[codigoAluno][notas]);
            media += notaAlunos[codigoAluno][notas];
        }
        mediasAlunos[codigoAluno] = media / quantNotas;
        media = 0;
        codigoAluno = 0;

    } while (codigoAluno < 0);

    for(int aluno = codigoAluno; aluno <= numDeAlunos; aluno++){
    printf("A média do aluno %i é %.2f\n", aluno,mediasAlunos[codigoAluno]);
    }    
}


