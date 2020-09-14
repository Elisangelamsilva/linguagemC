#include <stdio.h>

int main(void){
    void funcaoPrint(int x, int vetor[]);
    int x;
    int vetor[3] = {10};

    funcaoPrint(x, vetor);

    printf("Variavel int na funcao principal = %i \n", x);
    printf("torve na funcao principal = %i \n", vetor[1]);
}

void funcaoPrint(int x, int vetor[]){
    x = x + 10; //alterou apenas o valor dela nessa função, na função main não alterou pois são cópias, pode usar return
    vetor[1] = 20; //alterou o valor e não é uma cópia e sim endereço de mémoria
}