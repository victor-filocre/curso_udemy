#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Imprime na tela do usuário
    printf("Olá mundo");

    // Pausa o programa após executar
    system("pause");
}
