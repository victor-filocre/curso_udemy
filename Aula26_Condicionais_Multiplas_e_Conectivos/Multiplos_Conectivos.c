#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo Variaveis
    int a = 20;

    // Conectivo lógico E (and)     && representa o e   Se uma comparação for falsa não entra no bloco

    if(a > 5 && a > 15)     // A primeira é verdadeira e a segunda é falsa, logo o programa não funciona.
    {
        printf("\n A variável a está entre 5 e 15");
    }

    // Conectivo lógico ou (OR)     || representa o our   Se uma comparação for falsa e a outra verdadeira o programa funciona

    if(a > 5 || a > 15)     // A primeira é verdadeira e a segunda é falsa, logo o programa  funciona.
    {
        printf("\n A variável a está entre 5 ou 15");
    }

    // Misturando conectivos
    if((a > 5 && a > 15) || a== 20)
        printf("\n A variável a está entre 5 ou 15 ou vale 20");
    }

    // Pausa o programa após executar
    system("pause");
}
