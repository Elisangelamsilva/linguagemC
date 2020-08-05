/*
3. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando ENQUANTO-FAÇA)  
*/
#include <stdio.h>

int main(){
    float salario; 
    float habitante = 0;
    float mediaSalario = 0;
    float somaSalario = 0;
    float maiorSalario = 0;
    float salarioCem = 0;
    float percentual =0;
    int quantFilhos;
    int totaFilhos = 0;
    int mediaFilhos = 0;

    do
    {
        printf("Informe os salário: R$ \n");
        scanf("%f", &salario);

        habitante += 1;
        somaSalario = salario + somaSalario;
        mediaSalario = somaSalario / habitante; 

        if (maiorSalario < salario) maiorSalario = salario;
        if (salario <= 100) salarioCem = salarioCem;
        
        percentual = (salarioCem * 100) / habitante; 

        printf("Informe a quantidade de filhos: \n");
        scanf("%i", &quantFilhos);

        totaFilhos = quantFilhos + totaFilhos;
        mediaFilhos = totaFilhos / habitante;

    } while (salario > -100);

    printf("A média salarial é: R$ %.2f\n",mediaSalario); 
    printf("A média do numero de filhos: %i\n", mediaFilhos); 
    printf("O maior salário é: R$ %.2f \n", maiorSalario); 
    printf("Percentual de pessoas com salários até R$100.00: %.0f %%\n",percentual);

}