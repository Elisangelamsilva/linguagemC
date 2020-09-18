//Verificar Caracteres Alfabéticos/Apenas Letras(lógica)

#include <stdio.h>

int main(){

void alfabetico(char variavel);

char nome[20];
printf("DIgite uma palavra: \n");
scanf("%s", nome);

int i = 0;
while (nome[i] != "\0"){
    alfabetico(nome[i]);
    ++i;
}

}
void alfabetico(char variavel){
    //lógica para verificar caracteres especificos com os dados de entrada 
    if ((variavel >= "a" && variavel <= 'z') || (variavel >= 'A' && variavel <= 'Z')){
        printf("é uma letra\n");
    }else{
        printf("não é uma letra.\n");
    }
    
}
