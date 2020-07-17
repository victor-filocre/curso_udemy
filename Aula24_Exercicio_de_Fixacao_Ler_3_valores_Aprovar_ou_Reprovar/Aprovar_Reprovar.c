#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Crie um algoritmo que leia 3 notas e calcule a média entre elas.
    // Se o valor for maior que 7, informe que o aluno foi aprovado
    // se não foi reprovado.

    // Tive dificuldade em restringir as notas para valores abaixo de 0 e maior que 10.

    // Definindo Variáveis
    int nota1 = 0; int nota2 = 0; int nota3 = 0; int total = 0;

    // Mensagem de boas-vindas do programa.
    printf("Bem-vindo ao sistema de avaliação do curso Udemy!\nDigite a seguir três notas com o valor de 1 até 10, lembrando que a nota para aprovação é no mínimo 7!\n");


    //Escaneamento das notas inseridas pelo usuário
    scanf("%d %d %d",&nota1,&nota2,&nota3);

    if (nota1,nota2,nota3 < 0 || nota1,nota2,nota3 > 10)
    {
        printf("NOTA INSERIDA FORA DO INTERVALO PERMITIDO\n");
    }
    else{
    //Função para calcular a média das notas
    total = (nota1+nota2+nota3)/3;

    // Condição para a aprovação
    if(total < 7)
    {
        printf("Infelizmente você não foi aprovado, sua nota foi de %d e o mínimo para passar é 7!\n",total);
    }
    else
    {
        printf("Parabéns você foi aprovado, sua nota foi de: %d  agora tire um tempo de descanso!\n",total);
    }
    // Pausa o programa após executar
    system("pause");
    }
}
