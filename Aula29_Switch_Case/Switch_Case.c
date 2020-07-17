#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo Variaveis
    int a = 1; char b = 'x';

    switch(a)
    {
case 1:
    printf("Opção escolhida:1 \n");
    break;
case 2:
    printf("Opção escolhida:2 \n");
    break;
case 3:
    printf("Opção escolhida:3 \n");
    break;
case 4:
    printf("Opção escolhida:4 \n");
    break;
default:
    printf("\nOPCAO INVALIDA\n");
    break;
    }

    // Switch com char
    switch(b)
    {
    case 'x':
        printf("A letra é x");
        break;

    }
    // Pausa o programa após executar
    system("pause");
}
