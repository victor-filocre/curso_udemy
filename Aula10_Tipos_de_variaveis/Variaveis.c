#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
// Permite o uso de acentos no código
setlocale(LC_ALL,"");

// Imprime "Olá" na tela do usuário.
printf("Olá");

// Lendo valores inteiros

int a = 5;          // Variavel do tipo inteiro com valor 5.
//int b = 6;
// printf("%d",a);     // Imprimi na tela do usuário a variável "a".
// printf("%d",a + b);   // Imprimi na tela do usuário uma soma matemática de duas variáveis "a" e "b".


printf ("\nO Valor de a é = %d\n",a);         // O (\n) serve para pular uma linha.
scanf ("%d", &a);           //& significa o endereço na memória do computador.
printf ("\nO Valor de a mudou para  = %d",a);         // O valor de a muda conforme o usuário digita um valor.



// Lendo valores quebrados

float b = 5.5;          // Variavel do tipo quebrado com valor 5.5 .
printf ("\nO Valor de b é = %f\n",b);           // "%f" serve para números não inteiros
scanf ("%f", &b);
printf ("\nO Valor de a mudou para  = %f",b);   // OBS: Colocar valores com a virgula e não com ponto.

// Lendo letras

char c = 't' ;          // Variavel do tipo caractere com valor t .
printf ("\nO Valor de c é = %c\n",c);           // "%c" serve para caracteres
fflush(stdin);        // Tirar o lixo da entrada de buffer principal
scanf ("%c", &c);
printf ("\nO Valor de a mudou para  = %c",c);   // OBS: Colocar apenas uma letra.
}
