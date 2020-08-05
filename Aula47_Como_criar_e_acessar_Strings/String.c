#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo variáveis
    char palavra [255];

    // Instrução
    printf("Digite uma palavra:");

    // Limpa o buffer         // ele é responsavel para fazer a leitura de mais de uma letra.
    setbuf(stdin,0);          // stdin> entrada padrão

    // Lê a string
    fgets(palavra,255,stdin);

    // Limpa as casas nao utilizadas
    palavra[strlen(palavra)-1] = '\0';

    // Imprime na tela
    printf("%s",palavra);
    // Pausa o programa após executar
    system("pause");
}
