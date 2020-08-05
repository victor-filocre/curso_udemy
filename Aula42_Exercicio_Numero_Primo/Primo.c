#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Crie um algoritmo que informe se o valor inserido é numero primo

    // Definindo variáveis
    int num = 0; int i = 0; int aux = 0;
    printf("\nDigite um número e verificaremos se ele é primo ou não\n");
    scanf("%d",&num);
    if (num <= 0)
    {
        printf("\nO número inserido é menor ou igual a zero, portanto não pode ser primo.\n");
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
         printf("\nO numero %d é primo\n",num);
     }
     else
     {
        printf("\nO numero %d não é  primo\n",num);
     }
    }


    // Pausa o programa após executar
    system("pause");
}
