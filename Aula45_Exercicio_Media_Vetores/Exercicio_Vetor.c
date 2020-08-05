#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3
void main() {
    // Permite o uso de acentos no código
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

    // Imprimindo vetor em um laço de repetição
        for(cont = 0; cont < TAM; cont++){
            printf("\nPosição %d : %f",cont,vetor[cont]);
        }
        num = num / 3;
        printf("\nA média dos três vetores inseridos teve como resultado: %f",num);

    // Pausa o programa após executar
    system("pause");
}

