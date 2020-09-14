#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};


int main(void){

    void receberHorarios(struct horario lista[5]);
    void printHorario(struct horario litsa[5]);
    struct horario listaHorarios[5];

    receberHorarios(listaHorarios);
    printfHorarios(listaHorarios);
    

}

 void receberHorarios(struct horario lista[5]){

     int i;
     for(i = 0; i < 5; i++){
         printf("Digite o %i horario(hh:mm:ss):", i + 1);
         scanf("%i:%i:%i", &lista[i].horas,&lista[i].minutos,&lista[i].segundos);
     }
    
 }

void printHorario(struct horario lista[5]){

         int i;
     for(i = 0; i < 5; i++){
         printf(" 0 %i horario é = %i:%i:%i", i+1, lista[i].horas,lista[i].minutos,lista[i].segundos);
     }

}