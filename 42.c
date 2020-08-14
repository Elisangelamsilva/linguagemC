#include <stdio.h>

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

int main(void){
    
    //função que recebe uma estrutura
    struct horario teste(struct horario x);

    struct horario agora;
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 58;

    //retorna e jogar em uma estrutura
    struct horario proxima;
    //passando a estrutura horario para função teste
    proxima = teste(agora);

    printf("%i-%i-%i\n", proxima.horas,proxima.minutos,proxima.segundos);
    
    
}

struct horario teste(struct horario x){
    printf("%i-%i-%i\n", x.horas,x.minutos,x.segundos);

    //alterar o valor antes de retorna
    x.horas = 100;
    x.minutos = 100;

    return x;

}