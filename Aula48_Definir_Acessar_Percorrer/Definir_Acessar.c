#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Imprime na tela do usu�rio
    printf("Ol� mundo");

    // Pausa o programa ap�s executar
    system("pause");
}
