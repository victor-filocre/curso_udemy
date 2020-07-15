#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
// Permite o uso de acentos no código
setlocale(LC_ALL,"");
    // Definindo variáveis
    float a = 0.0 ; float b = 0.0 ; float c = 0.0;

    // Pedindo ao usuário para inserir valores
    printf ("\nInsira o primeiro valor\n");
    scanf ("%f", &a);
    printf ("\nInsira o segundo valor\n");
    scanf ("%f", &b);

    // Função na qual faz a média entre os dois valores inseridos acima.
    c = (a + b) / 2;

    // Mostra na tela do usuário o resultado da função.
    printf("A média entre os valores %f e %f é de : %f ", a,b,c);

    // Pausa o programa após executar
    system("pause");
}
