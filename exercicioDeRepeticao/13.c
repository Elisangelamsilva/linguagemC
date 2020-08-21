/*13. Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.*/

#include <stdio.h>

int main(){
    int a, resultado;
    int x = 0;
    resultado = 1;

    printf("Digite um número: \n");
    scanf("%i", &a);

    while (x <= a){
        for (int i = 0; i >= 1; i--){
            resultado *= i;
        }
        printf("O fatorial é %i\n", resultado);
    }


}