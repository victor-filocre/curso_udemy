#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo Vari�veis
    int a = 5;
    float b = 2.5;
    char c = 'x';
    int opcao = 1;

    // Condicional Simples
    if (a == 5){                                //  = Atribui��o     /    == Compara��o
        printf("\nA variavel a � igual a 5");
    }

    if (b == 2.5){
        printf("\nA variavel b � igual a 2.5");
    }

    if (c == 'x'){
        printf("\nA variavel c � igual a letra x");
    }



    // Condicional Par ou Impar
    if (a % 2 == 1){                        // se
        printf("\nA variavel a � impar");
    }
    else{                                   // se n�o
        printf("\nA variavel a � par");
    }

    // Condicional Composta
    if (opcao==1){
        printf("\nA opcao � igual a 1");
    }
    else if (opcao==2){
        printf("\nA opcao � igual a 2");
    }
    else
    {
        printf("\nA opcao n�o � igual a 1 nem 2");
    }
    // Pausa o programa ap�s executar
    system("pause");
}
