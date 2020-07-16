#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo Variáveis
    int a = 5;
    float b = 2.5;
    char c = 'x';
    int opcao = 1;

    // Condicional Simples
    if (a == 5){                                //  = Atribuição     /    == Comparação
        printf("\nA variavel a é igual a 5");
    }

    if (b == 2.5){
        printf("\nA variavel b é igual a 2.5");
    }

    if (c == 'x'){
        printf("\nA variavel c é igual a letra x");
    }



    // Condicional Par ou Impar
    if (a % 2 == 1){                        // se
        printf("\nA variavel a é impar");
    }
    else{                                   // se não
        printf("\nA variavel a é par");
    }

    // Condicional Composta
    if (opcao==1){
        printf("\nA opcao é igual a 1");
    }
    else if (opcao==2){
        printf("\nA opcao é igual a 2");
    }
    else
    {
        printf("\nA opcao não é igual a 1 nem 2");
    }
    // Pausa o programa após executar
    system("pause");
}
