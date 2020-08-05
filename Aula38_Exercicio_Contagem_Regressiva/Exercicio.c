#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Crie um algoritmo que imprima os números de 10 até 0 forma regressiva. (usando while, do while e for)
    // Definindo Variaveis
    int a = 0; int num = 10;

    printf("Selecione uma opção:\n1- Regressiva com while\n2- Regressiva com do while\n3- Regressiva com for");
    scanf("%d",&a);

    switch(a)
    {
case 1:
    printf("Opção escolhida:1 - Contagem Regressiva com while \n");
    // Enquanto numero maior que 0
    while (num > 0)
    {
        num--;
        printf("%d\n",num);
    }
    break;


case 2:
    printf("Opção escolhida:2 - Contagem Regressiva com do while \n");
    // Faça numero
    do{
       num--;
       printf("%d\n",num);
    }
    //Enquanto numero maior que 0
    while(num > 0);
    break;


case 3:
    printf("Opção escolhida:3 - Contagem Regressiva com for\n");
    // Para numero maior que zero faça
    for(num = 10; num > 0; num--){
        printf("\n%d",num);
    }
    break;
default:
    printf("\nOPCAO INVALIDA\n");
    break;
    }

    // Pausa o programa após executar
    system("pause");
}
