#include <stdio.h>

void teste(void){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    printf("%i\n", variavelLocalAutomatica);
}

int main(void){
    teste();
    teste();
    teste();

}

//Função e variável Local Automática -> Ela é visivel apenas para função onde foi criada e é automatica pois cada vez que chamamos ela é recriada, por isso quando executamos recebemos o mesmo valor sempre.  Por ser local ela não pode ser usada na função main se estiver em outra função.