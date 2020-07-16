#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Imprime na tela do usuário
    printf("Olá mundo");

    // Pausa o programa após executar
    system("pause");
}
