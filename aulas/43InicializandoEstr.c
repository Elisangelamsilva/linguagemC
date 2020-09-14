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
    }agora = {10, 20, 30};

    
    struct horario agora = {10, 20, 30};
    struct horario agora = {.segundos = 40, 20};


    printf("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);
    
    
}

