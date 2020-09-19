//FINALIZADO
// 16. Escrever um algoritmo que lê um conjunto não determinado de valores, um de cada vez, e escreve uma tabela com cabeçalho, que deve ser repetido a cada 20 linhas. A tabela conterá o valor lido, seu quadrado, seu cubo e sua raiz quadrada.

#include <stdio.h>
#include <string.h>
#include <complex.h> 
#include <fenv.h>
#include <float.h> 
#include <limits.h> 
#include <math.h>
#include <stdarg.h>

int quantValoresObtido;
float quadrado =0;
float cubo =0;
double raiz;

int main(){

    printf("Quantos valores:\n");
    scanf("%i", &quantValoresObtido);

    int valoresUsuario[quantValoresObtido];

    int obtendoValores(int valoresUsuario[]);
    obtendoValores(valoresUsuario);

    int realizarCalculo(int valoresUsuario[]);
    realizarCalculo(valoresUsuario);


}
int obtendoValores(int valoresUsuario[]){

    printf("Insira os valores:\n");
    for(int i =0; i < quantValoresObtido; i++){
        scanf("%i", &valoresUsuario[i]);
    }
}
int realizarCalculo(int valoresUsuario[]){
    int contador;

    for(int i = 0;i<quantValoresObtido;i++){
        quadrado = valoresUsuario[i] * valoresUsuario[i];
        cubo = valoresUsuario[i] * valoresUsuario[i] * valoresUsuario[i]; 
        raiz = sqrt(valoresUsuario[i]);

        printf("entrou sim %i quadrado: %f cubo: %f raiz quadrada: %f\n", valoresUsuario[i], quadrado, cubo, raiz);
    }

}