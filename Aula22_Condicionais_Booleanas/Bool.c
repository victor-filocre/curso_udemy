#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo Variaveis
    bool a = true; bool b = false;

    //Condi��o se A for verdadeiro.
    if (a) // == true
    {
        printf("\na � verdadeiro");
    }

    //Condi��o se B for falsa
    if (b)
    {
        printf("\nb � verdadeiro");
    }
    else
    {
        printf("\nb � falso");
    }

    //Comparando uma falsidade
    if(!b)
    {
        printf("\nb � falso");
    }

    // Pausa o programa ap�s executar
    system("pause");
}
