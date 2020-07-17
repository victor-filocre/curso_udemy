#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia dois valores e depois
    //Crie um menu (usando switch case) de 4 opções:
    //1- somar, 2- subtrair, 3- dividir, 4- multiplicar.
    //Depois que o usuário escolher uma opção, mostre o
    //Resultado da operação escolhida com os dois valores lidos

    // Definindo Variaveis
    int num1 = 0; int num2 = 0; int total =0; int a = 0;
    printf("Selecione uma opção:\n1- Somar\n2- Subtrair\n3- Dividir\n4- Multiplicar\n");
    scanf("%d",&a);



    switch(a)
    {
case 1:
    printf("Opção escolhida:1- Somar \nInsira dois valores\n");
    scanf("%d %d",&num1,&num2);
    total= num1 + num2;
    printf("O resultado da soma de %d e %d foi de %d\n",num1,num2,total);
    break;
case 2:
    printf("Opção escolhida:2- Subtrair \nInsira dois valores\n");
    scanf("%d %d",&num1,&num2);
    total= num1 - num2;
    printf("O resultado da subtracao de %d e %d foi de %d\n",num1,num2,total);
    break;
case 3:
    printf("Opção escolhida:3- Dividir \nInsira dois valores\n");
    scanf("%d %d",&num1,&num2);
    total= num1 / num2;
    printf("O resultado da divisão de %d e %d foi de %d\n",num1,num2,total);
    break;
case 4:
    printf("Opção escolhida:4- Multiplicar \nInsira dois valores\n");
    scanf("%d %d",&num1,&num2);
    total= num1 * num2;
    printf("O resultado da multiplicação de %d e %d foi de %d\n",num1,num2,total);
    break;
default:
    printf("\nOPCAO INVALIDA\n");
    break;
    }

    // Pausa o programa após executar
    system("pause");
}
