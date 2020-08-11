#include <stdio.h>

int main(){

    int minhaIdade;
    minhaIdade = 23;
    int idadePai = 48;
    int idadeMae = 46;

    int idadeTotal;
    idadeTotal = minhaIdade + idadePai + idadeMae;
    int idadeMedia;
    idadeMedia = idadeTotal/3;
    int multiplicacaoIdadesPais;
    multiplicacaoIdadesPais = idadePai * idadeMae;

    printf("A idade toral é %i, a média é %i.\n", idadeTotal,idadeMedia);
    printf("MInha idade é %i \n", minhaIdade);
    printf("A multiplicação da idade dos meus pais é %i \n", multiplicacaoIdadesPais);
}