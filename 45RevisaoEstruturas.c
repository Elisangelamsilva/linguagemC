#include <stdio.h>

struct horario{
    int horas;
    int minutos;int segundos;
};


int main(void){

    void receberHorarios(struct horario lista[5]);
    void printHorario(struct horario litsa[5]);
    struct horario  listaHorarios[5]; //declaração do vertor do tipo struct horario de tamanho 5

    //pedir pra o usuario digitar 5 horarios que deve ser armazenado no vetor listaHorarios
    receberHorarios(listaHorarios);
    //chamar a função que vai ler os valores inseridos
    printfHorarios(listaHorarios);
    

}

 void receberHorarios(struct horario lista[5]){
    
 }

void printHorario(struct horario litsa[5]){

}