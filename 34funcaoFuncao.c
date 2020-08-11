#include <stdio.h>

// soma entre dois numeros, caso um deles seja negativo, chamar outra função que vai converte de negativo para positivo. 

int main (void){
    float somaDeDigitos(float num1, float num2);
    int a, b, c, soma;

    printf("Digite 2 números: ");
    scanf("%f, &a");
    scanf("%f, &b");

    printf("A soma é %f", soma);

    soma = somaDeDigitos(a, b);

}

// realiza a soma e retorna um tipo float 
float somaDeDigitos(float num1, float num2){

    //converte para o valor absoluto
    float valorAbsoluto(float x);

    if (num1 < 0){
        num1 = valorAbsoluto(num1);
    }
    if (num2 < 0){
        num2 = valorAbsoluto(num2);
    }

    return num1 + num2;
    
}

float valorAbsoluto(float x){
    return x * -1;
}