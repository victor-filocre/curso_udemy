#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo variaveis
        int vetor [TAM]; int cont;

    // Passando valores para os vetores
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    // Exibindo os valores dos vetores para o usu�rio
   /* printf("\nPosi��o 0 : %d",vetor[0]);
    printf("\nPosi��o 1 : %d",vetor[1]);
    printf("\nPosi��o 2 : %d",vetor[2]);
    */

    // Adicionando 1 para cada posi��o
        for(cont = 0; cont < TAM; cont++){
            vetor[cont] = vetor[cont] + 1 ;
        }

    // Imprimindo vetor em um la�o de repeti��o
        for(cont = 0; cont < TAM; cont++){
            printf("\nPosi��o %d : %d",cont,vetor[cont]);
        }

    // Lendo valores para o vetor
       for(cont = 0; cont < TAM; cont++){
           scanf("%d",&vetor[cont]);
           }

    // Imprimindo vetor em um la�o de repeti��o
        for(cont = 0; cont < TAM; cont++){
            printf("\nPosi��o %d : %d",cont,vetor[cont]);
        }

    // Pausa o programa ap�s executar
    system("pause");
}

