#include <stdio.h>

int main(void){
    int idade;

    printf("sua idade:\n");

    // && é equivalente ao and
    // || é equivalente ao or

    if (idade >= 20 && idade <= 40){
        printf("deu certo\n");
    }else{
        printf("não deu certo\n");
    }
    
}