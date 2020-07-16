#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo Variáveis
    int a = 5; int b = 10; int c = 15;  char d = 'x';

    // Maior
    if ( a > 2 )
    {
        printf("\n%d é maior que 2",a);
    }

    // Maior ou igual
    if ( c >= b)
    {
        printf("\n%d é maior ou igual a %d",c,b);
    }

    // Menor
    if (a < 10)
    {
        printf("\n%d é menor que 10",a);
    }

    // Menor ou igual
    if (a <= 10)
    {
        printf("\n%d é menor ou igual a 10",a);
    }

    // Diferente
    if(c !=10)
    {
     printf("\n%d não é 10",c);
    }

    if (d != 'a')
    {
        printf("\n%c não é a",d);
    }


    // Pausa o programa após executar
    system("pause");
}
