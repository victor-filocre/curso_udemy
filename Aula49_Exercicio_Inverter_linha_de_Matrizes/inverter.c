#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Preencha uma matriz 2x2 lendo valores do usuário
    // depois troque os valores entre a primeira e a segunda linha.

    // Criando matriz
    int matriz[2][2]; int aux1; int aux2; int i = 0; int j = 0;

    /* Inserindo valores
    printf("Digite um valor para [0][0]");
    scanf("%d", &matriz[0][0]);

    printf("Digite um valor para [0][1]");
    scanf("%d", &matriz[0][1]);

    printf("Digite um valor para [1][0]");
    scanf("%d", &matriz[1][0]);

    printf("Digite um valor para [1][1]");
    scanf("%d", &matriz[1][1]);
    */

    // Inserindo valores
    for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
            }
        }
    // Guardando valores
    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    // Invertendo linhas
    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;

    // Imprimindo na tela do usuário
    printf("%\n%d %d",matriz[0][0], matriz[0][1]);
    printf("%\n%d %d",matriz[1][0], matriz[1][1]);

    // Pausa o programa após executar
    system("pause");
}
