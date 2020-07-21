#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo Variáveis
    int cont;

    //Tabuada do 5.
    for(cont = 1; cont <= 10; cont++)
    {
        printf("\n 5 x %d = %d ",cont, 5*cont);
    }

    //Contando de 2 em 2
    for(cont = 0; cont <= 10; cont = cont + 2){
        printf("\n%d",cont);
    }

    //Contagem Regressiva
    for(cont = 10; cont > 0; cont--){
        printf("\n%d",cont);
    }
    // Pausa o programa após executar
    system("pause");
}
