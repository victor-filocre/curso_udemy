#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo vari�veis
    int opcao;

    while(opcao <1 || opcao > 3){
    //Interface de Menu
    printf("Escolha uma opcao: ");
    printf("\n1 - Op��o 1");
    printf("\n2 - Op��o 2");
    printf("\n3 - Op��o 3");

    // Lendo a op��o
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
            printf("\n1 - Op��o 1 foi escolhida\n");
    break;
    case 2:
        printf("\n2 - Op��o 2 foi escolhida\n");
    break;
    case 3:
        printf("\n3 - Op��o 3 foi escolhida\n");
    break;
    default:
        printf("\nOp��o inv�lida");
    break;


    }

    }

    // Pausa o programa ap�s executar
    system("pause");
}
