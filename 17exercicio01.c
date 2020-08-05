#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite 2 números interos:\n");
    scanf("%i %i", &num1,&num2);

    if(num2 == 0){
        printf("Divisão por 0 não é permitido.\n");
    }else {
        if (num1 % num2 == 0){
            printf("%i é divisivel por %i.\n", num1, num2);
        } else {
            printf("%i não é divisivel por %i.\n", num1,num2);
        }
        
    }
    
}

