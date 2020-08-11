/*13. Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.*/

#include <stdio.h>

int main(){
    int a, resultado;
    float fatorial(float num1);

    printf("Digite um número: \n");
    scanf("%i", &a);

    resultado = fatorial(a);

    printf("O fatorial do número é %i\n", resultado);
    
}

float fatorial(float num1){
    int resposta, x;
    x = 0;

    while (x >= num1){
        for (; x >= 1; x--){
            resposta *= x;
        }    
    };
    
    return resposta;
}