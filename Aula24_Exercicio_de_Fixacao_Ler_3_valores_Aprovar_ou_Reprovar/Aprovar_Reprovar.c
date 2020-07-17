#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Crie um algoritmo que leia 3 notas e calcule a m�dia entre elas.
    // Se o valor for maior que 7, informe que o aluno foi aprovado
    // se n�o foi reprovado.

    // Tive dificuldade em restringir as notas para valores abaixo de 0 e maior que 10.

    // Definindo Vari�veis
    int nota1 = 0; int nota2 = 0; int nota3 = 0; int total = 0;

    // Mensagem de boas-vindas do programa.
    printf("Bem-vindo ao sistema de avalia��o do curso Udemy!\nDigite a seguir tr�s notas com o valor de 1 at� 10, lembrando que a nota para aprova��o � no m�nimo 7!\n");


    //Escaneamento das notas inseridas pelo usu�rio
    scanf("%d %d %d",&nota1,&nota2,&nota3);

    if (nota1,nota2,nota3 < 0 || nota1,nota2,nota3 > 10)
    {
        printf("NOTA INSERIDA FORA DO INTERVALO PERMITIDO\n");
    }
    else{
    //Fun��o para calcular a m�dia das notas
    total = (nota1+nota2+nota3)/3;

    // Condi��o para a aprova��o
    if(total < 7)
    {
        printf("Infelizmente voc� n�o foi aprovado, sua nota foi de %d e o m�nimo para passar � 7!\n",total);
    }
    else
    {
        printf("Parab�ns voc� foi aprovado, sua nota foi de: %d  agora tire um tempo de descanso!\n",total);
    }
    // Pausa o programa ap�s executar
    system("pause");
    }
}
