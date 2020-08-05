#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Crie um algoritmo que imprima os números
    // pares de 10 a 20 (usando while, do while e for)
// Definindo Variaveis
    int a = 0; int num = 10;

    printf("Selecione uma opção:\n1- Com while\n2- Com do while\n3- Com for");
    scanf("%d",&a);

    switch(a)
    {
case 1:
    printf("Opção escolhida:1 - Pares de 10 a 20 com while \n");
    // Enquanto numero menor ou igual a 20
    while (num <= 20)
    {
        printf("%d\n",num);
        num = num + 2;
    }
    break;


case 2:
    printf("Opção escolhida:2 - Pares de 10 a 20 com do while \n");
    // Faça numero
    do{
       printf("%d\n",num);
       num = num + 2;
    }
    //Enquanto numero menor ou igual a 20
    while(num <= 20);
    break;


case 3:
    printf("Opção escolhida:3 - Pares de 10 a 20 com for\n");
    // Para numero menor ou igual a 20
    for(num = 10; num <= 20; num= num + 2){
        printf("%d\n",num);
    }
    break;
default:
    printf("\nOPCAO INVALIDA\n");
    break;
    }

    // Pausa o programa após executar
    system("pause");
}

