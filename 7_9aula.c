#include <stdio.h>

int main(){
    int base;
    int altura;
    int area;

    printf("Digite um valor da base:");
    scanf("%i", &base);

    printf("Digite um valor da altura:");
    scanf("%i", &altura);

    area = base * altura;

    printf("O valor da área do retangulo é %i\n", area);

}