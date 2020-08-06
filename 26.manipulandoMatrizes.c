#include <stdio.h>

int main(void){
    int matriz[5][5] = {{ 1, 2, 3, 4,  5},
                        { 6, 7, 8, 9, 10},
                        {11,12,13,14, 15},
                        {16,17,18,19, 20},
                        {21,22,23,24, 25}};

    //executar linha
    for (int m = 0; m < 5; m++){
        //executar a coluna
        for(int n = 0; n < 5; n++){
            printf("%i", matriz[m][n]);
        }
        printf("\n"); //comando apenas para pular a inha
    }
    

}
//enquanto um loop do primeiro for o segundo percore as colunas. Quando finalizar o loop do segundo, o primeiro realiza outro loop, ou seja, vai para linha seguinte e inicia o loop do segundo for, assim tá está de acordo com as condições.
// Para armazenar dentro da matris é só utilizar scanf no lugar do printf