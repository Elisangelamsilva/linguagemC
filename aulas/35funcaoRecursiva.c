//chama ela mesma 

#include <stdio.h>

int main(void){

    int numero, resultado;
    int fatorial(int x);

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    resultado = fatorial(numero);

    printf("O fatorial é %i\n", resultado);
}

int fatorial(int x){
 int resultado;

 if (x == 0){
     resultado = 1;
 } else{
     resultado = x * fatorial(x - 1);
 }

 return resultado;
}

//Quando uma função recursiva é executada e chama ela mesmo, acontece que o programa está criando uma outra função recursiva que deve ser resolvida para resolver a função anterior