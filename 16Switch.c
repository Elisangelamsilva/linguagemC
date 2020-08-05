#include <stdio.h>

int main(){
    int i;

    printf("Insira um número inteiro de 1 a 5\n");
    scanf("%i", &i);

    switch(i){
        case 1:
            printf("primeiro\n");
            break;
        case 2:
            printf("Segundo\n");
            break;
        case 3:
            printf("terceiro\n");
            break;
        case 4:
            printf("quarta\n");
            break;
        case 5:
            printf("quinto\n");
            break;
        default:
            printf("opcao nao valida");
            break;
    }
}