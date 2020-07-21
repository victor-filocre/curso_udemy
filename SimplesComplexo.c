#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo variáveis
    int opcao;

    while(opcao <1 || opcao > 3){
    //Interface de Menu
    printf("Escolha uma opcao: ");
    printf("\n1 - Opção 1");
    printf("\n2 - Opção 2");
    printf("\n3 - Opção 3");

    // Lendo a opção
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
            printf("\n1 - Opção 1 foi escolhida\n");
    break;
    case 2:
        printf("\n2 - Opção 2 foi escolhida\n");
    break;
    case 3:
        printf("\n3 - Opção 3 foi escolhida\n");
    break;
    default:
        printf("\nOpção inválida");
    break;


    }

    }

    // Pausa o programa após executar
    system("pause");
}
