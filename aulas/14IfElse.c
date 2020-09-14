#include <stdio.h>

int main(){
    int idade;

    printf("Favor informar idade:\n");
    scanf("%i", &idade);

    if (idade < 18) printf("Bebidas alcoólicas não estão liberadas.\n");
    else printf("Bebidas alcoólicas liberadas.\n");
    
    

}