#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10      // Usar letra maiuscula.
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Imprime na tela do usu�rio
    printf("%d",TAM);

    int i;
    // Contagem at� 10
    for(i = 1; i < TAM; i++)
    {
        printf("%d",i);
    }

    // Pausa o programa ap�s executar
    system("pause");
}
