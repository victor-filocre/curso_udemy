#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo Variáveis
    char letra = 'x';

    // Condicional Simples
    if (letra=='x')
    {
  //      printf("A letra é X");
        printf("O código da letra é %d",letra);         // Descobrir qual o valor da letra x através da variavel
    }
    if (letra==120)                     // 120 = x em tabela ASCII
    {
        printf("A letra é X");
    }
    // Pausa o programa após executar
    system("pause");
}
