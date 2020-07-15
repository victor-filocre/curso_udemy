#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
// Permite o uso de acentos no código
setlocale(LC_ALL,"");


    // Definindo variáveis
    int a = 6; int b = 3;       // Definição de duas variáveis de valores inteiros

    // Soma
    printf("A soma de %d e %d = %d\n",a,b, a + b);      // Operação de soma entre essas duas variáveis

    // Subtração
    printf("A subtração de %d e %d = %d\n",a,b, a - b);      // Operação de subtração entre essas duas variáveis

    // Divisão
    printf("A divisão de %d e %d = %d\n",a,b, a / b);      // Operação de divisão entre essas duas variáveis

    // Multiplicação
    printf("A multiplicação de %d e %d = %d\n",a,b, a * b);      // Operação de multiplicação entre essas duas variáveis

    // Resto da divisão
    printf("O resto da divisão entre %d e %d = %d\n",a,b, a % b);      // Operação do resto da divisão entre essas duas variáveis

    // Valor absoluto
    printf("O valor absoluto de -3 = %d\n",abs(-3));      // Operação de valor absoluto
    // Pausa o programa após executar
    system("pause");
}
