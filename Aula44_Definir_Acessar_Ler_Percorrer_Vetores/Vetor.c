#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo variaveis
        int vetor [TAM]; int cont;

    // Passando valores para os vetores
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    // Exibindo os valores dos vetores para o usuário
   /* printf("\nPosição 0 : %d",vetor[0]);
    printf("\nPosição 1 : %d",vetor[1]);
    printf("\nPosição 2 : %d",vetor[2]);
    */

    // Adicionando 1 para cada posição
        for(cont = 0; cont < TAM; cont++){
            vetor[cont] = vetor[cont] + 1 ;
        }

    // Imprimindo vetor em um laço de repetição
        for(cont = 0; cont < TAM; cont++){
            printf("\nPosição %d : %d",cont,vetor[cont]);
        }

    // Lendo valores para o vetor
       for(cont = 0; cont < TAM; cont++){
           scanf("%d",&vetor[cont]);
           }

    // Imprimindo vetor em um laço de repetição
        for(cont = 0; cont < TAM; cont++){
            printf("\nPosição %d : %d",cont,vetor[cont]);
        }

    // Pausa o programa após executar
    system("pause");
}

