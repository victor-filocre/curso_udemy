#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
// Permite o uso de acentos no c�digo
setlocale(LC_ALL,"");
    // Definindo vari�veis
    float a = 0.0 ; float b = 0.0 ; float c = 0.0;

    // Pedindo ao usu�rio para inserir valores
    printf ("\nInsira o primeiro valor\n");
    scanf ("%f", &a);
    printf ("\nInsira o segundo valor\n");
    scanf ("%f", &b);

    // Fun��o na qual faz a m�dia entre os dois valores inseridos acima.
    c = (a + b) / 2;

    // Mostra na tela do usu�rio o resultado da fun��o.
    printf("A m�dia entre os valores %f e %f � de : %f ", a,b,c);

    // Pausa o programa ap�s executar
    system("pause");
}
