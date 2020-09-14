#include <stdio.h>

// converte a cifra do que foi inserido

int main(){
    int numero, cifra;

    printf("Digite um número inteiro:\n");
    scanf("%i", &numero);

    if (numero >= 0){
        /*ex: 123 dividi por 10, obtem resto 3. 
        120 dividido por 10 resultado 12 
        12 divide por 10 e seu com resto 2
        2 que divide por 10 e por ser int seu resultado é 1.*/
        do{
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        } while (numero != 0);
        printf("\n");

    } else if (numero < 1){
        //transforma o negativo em positivos
        numero = numero * -1;
        //colocar o sinal de negativo na frente
        printf("-");
        do{
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        } while (numero != 0);
        printf("\n");

        
    }
    
    

}