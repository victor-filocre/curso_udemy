#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Responsavel por alimentar o rand de forma diferente (rand = aleat�rio)
    srand((unsigned)time(NULL));

    // Variavel que recebe o resto da divis�o do numero por 3 (aleat�rio entre 0 e 2)
    int aleatorio = rand() % 3;

    // Variavel que recebe o resto da divis�o do numero por 3 (aleat�rio entre 1 e 5)
    int aleatorioSegundo = (rand() % 5) + 1 ;

    // Imprime o valor
    printf("%d\n",aleatorioSegundo);
    aleatorioSegundo = (rand() % 5) + 1 ;
    printf("%d\n",aleatorioSegundo);

    // Pausa o programa ap�s executar
    system("pause");
}
