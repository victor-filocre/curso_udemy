#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Crie um algoritmo que informe se o valor inserido � numero primo

    // Definindo vari�veis
    int num = 0; int i = 0; int aux = 0;
    printf("\nDigite um n�mero e verificaremos se ele � primo ou n�o\n");
    scanf("%d",&num);
    if (num <= 0)
    {
        printf("\nO n�mero inserido � menor ou igual a zero, portanto n�o pode ser primo.\n");
        return;
    }
    else
    {
        for ( i =1; i <= num; i++)
        {
            //Quantas vezes dividiu
            if( num % i == 0){
                aux++;
            }
        }
     if(aux==2)
     {
         printf("\nO numero %d � primo\n",num);
     }
     else
     {
        printf("\nO numero %d n�o �  primo\n",num);
     }
    }


    // Pausa o programa ap�s executar
    system("pause");
}
