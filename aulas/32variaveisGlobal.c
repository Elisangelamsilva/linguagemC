#include <stdio.h>

// colocar o gno inicio do nome da variavel só para indicar uma variavel global, pode acessar em todas as funções e ela age como static

int gVariavelGloval = 2;

int main(void){

    printf("Global = %i\n", gVariavelGloval);
    void teste(void);
    teste();
    teste();

}

void teste(void){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstataica = 2;
    variavelLocalEstataica *= 2;

    gVariavelGloval *= 2;

    printf("Local Automaticca = %i\n", variavelLocalAutomatica);
    printf("Local Estática = %i\n", variavelLocalEstataica);
}

