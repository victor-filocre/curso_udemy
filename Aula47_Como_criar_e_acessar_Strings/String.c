#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo vari�veis
    char palavra [255];

    // Instru��o
    printf("Digite uma palavra:");

    // Limpa o buffer         // ele � responsavel para fazer a leitura de mais de uma letra.
    setbuf(stdin,0);          // stdin> entrada padr�o

    // L� a string
    fgets(palavra,255,stdin);

    // Limpa as casas nao utilizadas
    palavra[strlen(palavra)-1] = '\0';

    // Imprime na tela
    printf("%s",palavra);
    // Pausa o programa ap�s executar
    system("pause");
}
