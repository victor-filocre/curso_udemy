#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Definindo variaveis
    int lado1 = 0; int lado2= 0; int lado3= 0;

    //Pedindo ao usuário para inserir valor
    printf("Ensira o valor do primeiro lado: \n");
    scanf("%d",&lado1);

    printf("Ensira o valor do segundo lado: \n");
    scanf("%d",&lado2);
    if(lado2 != lado1)
    {
        printf("\nLADOS DIFERENTES\n");
        // Pausa o programa
        system("pause");
    }
    else
    {
        printf("Ensira o valor do terceiro lado: \n");
        scanf("%d",&lado3);

        if(lado3 != lado1 && lado3 != lado1)
        {
            printf("\nLADOS DIFERENTES\n");
            // Pausa o programa
            system("pause");
        }
        else
        {
            printf("\nO seu triangulo é equilatero, parabéns!\n");
        }
    }
}
