#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo Variaveis
    bool a = true; bool b = false;

    //Condição se A for verdadeiro.
    if (a) // == true
    {
        printf("\na é verdadeiro");
    }

    //Condição se B for falsa
    if (b)
    {
        printf("\nb é verdadeiro");
    }
    else
    {
        printf("\nb é falso");
    }

    //Comparando uma falsidade
    if(!b)
    {
        printf("\nb é falso");
    }

    // Pausa o programa após executar
    system("pause");
}
