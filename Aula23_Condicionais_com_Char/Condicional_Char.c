#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo Vari�veis
    char letra = 'x';

    // Condicional Simples
    if (letra=='x')
    {
  //      printf("A letra � X");
        printf("O c�digo da letra � %d",letra);         // Descobrir qual o valor da letra x atrav�s da variavel
    }
    if (letra==120)                     // 120 = x em tabela ASCII
    {
        printf("A letra � X");
    }
    // Pausa o programa ap�s executar
    system("pause");
}
