#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Crie um algoritmo que imprima os n�meros de 10 at� 0 forma regressiva. (usando while, do while e for)
    // Definindo Variaveis
    int a = 0; int num = 10;

    printf("Selecione uma op��o:\n1- Regressiva com while\n2- Regressiva com do while\n3- Regressiva com for");
    scanf("%d",&a);

    switch(a)
    {
case 1:
    printf("Op��o escolhida:1 - Contagem Regressiva com while \n");
    // Enquanto numero maior que 0
    while (num > 0)
    {
        num--;
        printf("%d\n",num);
    }
    break;


case 2:
    printf("Op��o escolhida:2 - Contagem Regressiva com do while \n");
    // Fa�a numero
    do{
       num--;
       printf("%d\n",num);
    }
    //Enquanto numero maior que 0
    while(num > 0);
    break;


case 3:
    printf("Op��o escolhida:3 - Contagem Regressiva com for\n");
    // Para numero maior que zero fa�a
    for(num = 10; num > 0; num--){
        printf("\n%d",num);
    }
    break;
default:
    printf("\nOPCAO INVALIDA\n");
    break;
    }

    // Pausa o programa ap�s executar
    system("pause");
}
