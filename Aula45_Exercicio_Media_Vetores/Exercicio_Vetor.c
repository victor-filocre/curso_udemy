#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo variaveis
        float vetor [TAM]; int cont; float num;

    // Passando valores para os vetores
    vetor[0] = 0.0;
    vetor[1] = 0.0;
    vetor[2] = 0.0;


    // Lendo valores para o vetor
       for(cont = 0; cont < TAM; cont++){
           scanf("%f",&vetor[cont]);
           num = num + vetor[cont];
           }

    // Imprimindo vetor em um la�o de repeti��o
        for(cont = 0; cont < TAM; cont++){
            printf("\nPosi��o %d : %f",cont,vetor[cont]);
        }
        num = num / 3;
        printf("\nA m�dia dos tr�s vetores inseridos teve como resultado: %f",num);

    // Pausa o programa ap�s executar
    system("pause");
}

