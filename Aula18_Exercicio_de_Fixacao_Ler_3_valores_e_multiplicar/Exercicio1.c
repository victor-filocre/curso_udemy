#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo vari�veis
    int a = 0 ; int b = 0 ; int c = 0; int d = 0;

    // Pedindo ao usu�rio para inserir valores
    printf ("\nInsira tres valores\n");
    scanf ("%d %d %d", &a,&b,&c);
  //  scanf ("%d", &b);
  //  scanf ("%d", &c);

    // Fun��o na qual faz a multiplicacao entre os tres valores inseridos acima.
    d = a*b*c;

    // Mostra na tela do usu�rio o resultado da fun��o.
    printf("A multiplica��o entre os valores %d , %d e %d = %d\n",a,b,c,d);      // Opera��o de multiplica��o entre essas tres vari�veis

    // Pausa o programa ap�s executar
    system("pause");
}
