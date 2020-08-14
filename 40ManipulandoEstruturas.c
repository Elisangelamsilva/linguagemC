#include <stdio.h>

int main(void){
    //Definição
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    //Declaração
    struct horario agora;

    //Inicialização
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    //
    struct horario depois;
    depois.horas = agora.horas +10;
    
    
}

