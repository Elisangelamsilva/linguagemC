// verificar se uma string é igual a outra
#include <stdio.h>

int main(void){
    _Bool stringIguais(char s1[], char s2[]);

    if (stringIguais('casa', 'casa')){
        printf("são iguais\n");
    }else{
        printf("não são iguais\n");
    } 
}

_Bool stringIguais(char s1[], char s2[]){
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        ++i;
    }

    if (s1[i] == '\0' && s2[i] == '\0'){
        return 1;
    }else{
        return 0;
    }   
}