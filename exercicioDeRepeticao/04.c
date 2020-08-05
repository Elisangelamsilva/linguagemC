/*
4. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.
*/
#include <stdio.h>

int main(){
    double chico =150;
    double ze = 110; 
    double anos = 0;

    while (chico >= ze){
        chico = chico +2;
        ze = ze + 3;
        anos += 1;
    }

    printf("Será necessário %.0f anos para o Zé ficar maior que o Chico.\n", anos);
    
}