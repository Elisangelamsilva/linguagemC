#include <stdio.h>

float calcularAreaRetangulo(float base, float altura){
    float area = base * altura;

    return area;
}

int main (void){
    float area = calcularAreaRetangulo(10.0,20.0);

    printf("A area é: %f", area);
    
}