#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo variáveis
    int a = 0 ; int b = 0 ; int c = 0; int d = 0;

    // Pedindo ao usuário para inserir valores
    printf ("\nInsira tres valores\n");
    scanf ("%d %d %d", &a,&b,&c);
  //  scanf ("%d", &b);
  //  scanf ("%d", &c);

    // Função na qual faz a multiplicacao entre os tres valores inseridos acima.
    d = a*b*c;

    // Mostra na tela do usuário o resultado da função.
    printf("A multiplicação entre os valores %d , %d e %d = %d\n",a,b,c,d);      // Operação de multiplicação entre essas tres variáveis

    // Pausa o programa após executar
    system("pause");
}
