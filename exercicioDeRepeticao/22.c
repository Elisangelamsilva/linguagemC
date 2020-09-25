// 22. Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe:  

// a) a média de salário do grupo;

// b) maior e menor idade do grupo;

// c) quantidade de mulheres com salário até R$100,00.

// Encerre a entrada de dados quando for digitada uma idade negativa. (Use o comando enquanto-faça e não use vetores ou matrizes)

struct dadosPopulacao{
    int idade;
    int sexo;
    float salario;
};

int vetorIdade[100];
int vetorSalario[100];

int index = 0;
int menorIdade = __FLT_MAX__;
int maiorIdade = 0;
int quantidadeSalario = 0;

int main(){

    int receberValores(struct dadosPopulacao valores[100]);
    struct dadosPopulacao valores[100];
    receberValores(valores);

}

int receberValores(struct dadosPopulacao valores[100]){

    printf("Idade: \n");
    while(scanf("%i",&vetorIdade[index]) && vetorIdade[index] > 0){
        if (vetorIdade[index] <= menorIdade){
            menorIdade = vetorIdade[index];
        }else if (vetorIdade[index] > maiorIdade){
            maiorIdade = vetorIdade[index];
        }
        index++;
    }
    printf("%i", vetorIdade[0]);

}
