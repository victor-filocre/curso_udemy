#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
// Permite o uso de acentos no c�digo
setlocale(LC_ALL,"");


    // Definindo vari�veis
    int a = 6; int b = 3;       // Defini��o de duas vari�veis de valores inteiros

    // Soma
    printf("A soma de %d e %d = %d\n",a,b, a + b);      // Opera��o de soma entre essas duas vari�veis

    // Subtra��o
    printf("A subtra��o de %d e %d = %d\n",a,b, a - b);      // Opera��o de subtra��o entre essas duas vari�veis

    // Divis�o
    printf("A divis�o de %d e %d = %d\n",a,b, a / b);      // Opera��o de divis�o entre essas duas vari�veis

    // Multiplica��o
    printf("A multiplica��o de %d e %d = %d\n",a,b, a * b);      // Opera��o de multiplica��o entre essas duas vari�veis

    // Resto da divis�o
    printf("O resto da divis�o entre %d e %d = %d\n",a,b, a % b);      // Opera��o do resto da divis�o entre essas duas vari�veis

    // Valor absoluto
    printf("O valor absoluto de -3 = %d\n",abs(-3));      // Opera��o de valor absoluto
    // Pausa o programa ap�s executar
    system("pause");
}
