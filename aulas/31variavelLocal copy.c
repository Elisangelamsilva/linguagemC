#include <stdio.h>

void teste(void){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstataica = 2;
    variavelLocalEstataica *= 2;

    printf("Local Automaticca = %i\n", variavelLocalAutomatica);
    printf("Local Estática = %i\n", variavelLocalEstataica);
}

int main(void){
    teste();
    teste();

}

//Local estática - assim executamos pela primeira vez, o programa cria ela na mémoria do computador, por ter chamada ela de static, a cada vez qe chamamos ela o prgrama não reencria a variavel, mantendo o valor. Por ser local ela não pode ser usada na função main se estiver em outra função.