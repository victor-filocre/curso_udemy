#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo Vari�veis
    int a = 5; int b = 10; int c = 15;  char d = 'x';

    // Maior
    if ( a > 2 )
    {
        printf("\n%d � maior que 2",a);
    }

    // Maior ou igual
    if ( c >= b)
    {
        printf("\n%d � maior ou igual a %d",c,b);
    }

    // Menor
    if (a < 10)
    {
        printf("\n%d � menor que 10",a);
    }

    // Menor ou igual
    if (a <= 10)
    {
        printf("\n%d � menor ou igual a 10",a);
    }

    // Diferente
    if(c !=10)
    {
     printf("\n%d n�o � 10",c);
    }

    if (d != 'a')
    {
        printf("\n%c n�o � a",d);
    }


    // Pausa o programa ap�s executar
    system("pause");
}
