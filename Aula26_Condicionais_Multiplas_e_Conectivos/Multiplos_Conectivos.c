#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo Variaveis
    int a = 20;

    // Conectivo l�gico E (and)     && representa o e   Se uma compara��o for falsa n�o entra no bloco

    if(a > 5 && a > 15)     // A primeira � verdadeira e a segunda � falsa, logo o programa n�o funciona.
    {
        printf("\n A vari�vel a est� entre 5 e 15");
    }

    // Conectivo l�gico ou (OR)     || representa o our   Se uma compara��o for falsa e a outra verdadeira o programa funciona

    if(a > 5 || a > 15)     // A primeira � verdadeira e a segunda � falsa, logo o programa  funciona.
    {
        printf("\n A vari�vel a est� entre 5 ou 15");
    }

    // Misturando conectivos
    if((a > 5 && a > 15) || a== 20)
        printf("\n A vari�vel a est� entre 5 ou 15 ou vale 20");
    }

    // Pausa o programa ap�s executar
    system("pause");
}
