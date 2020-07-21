#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo Variaveis
    int a = 1;
    int b = 10;
    //Contando até 10
    while (a <= 10)
    {
        // Imprimindo o valor de a na tela
        printf("\nO valor de a é: %d",a);
        // Adiciona 1 valor no a
        a = a +1;
    //  a++ é a mesma coisa que a = a +1
    }

    a = 1;

    do{             // Ele fez a ação
        // Imprimindo o valor de a na tela
        printf("\nO valor de a é: %d",a);
        // Adiciona 1 valor no a
        a = a +1;
    //  a++ é a mesma coisa que a = a +1
    }while(a<=10);      // Compara se for verdadeiro será executado



    //Contagem Regressiva
   /* while (b >= 1)
    {
        //Imprimindo o valor de b na tela
        printf("\nO valor de b é: %d",b);
        // Retira 1 ao valor de b
        b = b - 1;
    //  b-- é a mesma coisa que b = b -1
    }
*/

}
