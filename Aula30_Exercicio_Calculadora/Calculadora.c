#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia dois valores e depois
    //Crie um menu (usando switch case) de 4 op��es:
    //1- somar, 2- subtrair, 3- dividir, 4- multiplicar.
    //Depois que o usu�rio escolher uma op��o, mostre o
    //Resultado da opera��o escolhida com os dois valores lidos

    // Definindo Variaveis
    int num1 = 0; int num2 = 0; int total =0; int a = 0;
    printf("Selecione uma op��o:\n1- Somar\n2- Subtrair\n3- Dividir\n4- Multiplicar\n");
    scanf("%d",&a);



    switch(a)
    {
case 1:
    printf("Op��o escolhida:1- Somar \nInsira dois valores\n");
    scanf("%d %d",&num1,&num2);
    total= num1 + num2;
    printf("O resultado da soma de %d e %d foi de %d\n",num1,num2,total);
    break;
case 2:
    printf("Op��o escolhida:2- Subtrair \nInsira dois valores\n");
    scanf("%d %d",&num1,&num2);
    total= num1 - num2;
    printf("O resultado da subtracao de %d e %d foi de %d\n",num1,num2,total);
    break;
case 3:
    printf("Op��o escolhida:3- Dividir \nInsira dois valores\n");
    scanf("%d %d",&num1,&num2);
    total= num1 / num2;
    printf("O resultado da divis�o de %d e %d foi de %d\n",num1,num2,total);
    break;
case 4:
    printf("Op��o escolhida:4- Multiplicar \nInsira dois valores\n");
    scanf("%d %d",&num1,&num2);
    total= num1 * num2;
    printf("O resultado da multiplica��o de %d e %d foi de %d\n",num1,num2,total);
    break;
default:
    printf("\nOPCAO INVALIDA\n");
    break;
    }

    // Pausa o programa ap�s executar
    system("pause");
}
