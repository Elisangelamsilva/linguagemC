#include <stdio.h>

//na linguagem C existe uma limitação, pois entende que quando se paga duas variaveis inteiras mesmo que o resultado seja float ela retorna um inteiro, pelo simples fato de ser as das inteiras. Para corrigir usamos o casting, vai força que o resultado seja oq foi colocado nas chaves

int main(void){
    int x = 16;
    int y = 3;

    float resultado = (float)x / y;

    printf("%f", resultado);
}