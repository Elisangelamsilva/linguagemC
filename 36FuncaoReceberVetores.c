#include <stdio.h>

/*
FUNÇÃO QER RECEBEM VETORES COMO ARGUMENTO
NÃO É A MENEIRA MAIS EFICIENTE de organizar 
vai analizar se o numero é maior que o próximo, e caso seja ele será invertido. A quantidade de vezes que essa repetição acontecera é baseado na quantidade de membros.
*/

int main(void){
    int vetor[10]={6,4,1,9,8,0,5,7,3,2};
    int i;
    void ordemCrescente(int vetor[], int n);

    ordemCrescente(vetor, 10);

    for(i = 0; i < 0; i++){
        printf("%i", vetor[i]);
    }
}
void ordemCrescente(int vetor[], int n){

    int i, j, temporaria;

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if (vetor[i] > vetor[j]){
                temporaria = vetor[i];
                vetor[i] = vetor[i];
                vetor[j] = temporaria;
            }
            
        }
    }

}