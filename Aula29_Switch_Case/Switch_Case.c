#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo Variaveis
    int a = 1; char b = 'x';

    switch(a)
    {
case 1:
    printf("Op��o escolhida:1 \n");
    break;
case 2:
    printf("Op��o escolhida:2 \n");
    break;
case 3:
    printf("Op��o escolhida:3 \n");
    break;
case 4:
    printf("Op��o escolhida:4 \n");
    break;
default:
    printf("\nOPCAO INVALIDA\n");
    break;
    }

    // Switch com char
    switch(b)
    {
    case 'x':
        printf("A letra � x");
        break;

    }
    // Pausa o programa ap�s executar
    system("pause");
}
