#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo Variaveis
    int a = 1;
    int b = 10;
    //Contando at� 10
    while (a <= 10)
    {
        // Imprimindo o valor de a na tela
        printf("\nO valor de a �: %d",a);
        // Adiciona 1 valor no a
        a = a +1;
    //  a++ � a mesma coisa que a = a +1
    }

    a = 1;

    do{             // Ele fez a a��o
        // Imprimindo o valor de a na tela
        printf("\nO valor de a �: %d",a);
        // Adiciona 1 valor no a
        a = a +1;
    //  a++ � a mesma coisa que a = a +1
    }while(a<=10);      // Compara se for verdadeiro ser� executado



    //Contagem Regressiva
   /* while (b >= 1)
    {
        //Imprimindo o valor de b na tela
        printf("\nO valor de b �: %d",b);
        // Retira 1 ao valor de b
        b = b - 1;
    //  b-- � a mesma coisa que b = b -1
    }
*/

}
