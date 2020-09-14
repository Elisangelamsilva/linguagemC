#include <stdio.h>

int main(){
    int fatorial = 3;
    int resposta = 1;

    for ( ; fatorial >= 1; fatorial--){
        resposta *= fatorial;

    }
    printf("O número fatorial é %i\n", resposta);
    
}