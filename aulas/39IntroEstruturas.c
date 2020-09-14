// definir a estrutura: struct nomeDefinicao{defnir uma estrutura, esqueleto} para declarar é struct tipoEstrutura nomeEstrutura;, antes de colocar o tipo é necessario declarar!
#include <stdio.h>

int main(void){
    //Definição
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
        float teste;
    };

    //Declaração
    struct horario agora;

    //Inicialização
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;
    
    
}