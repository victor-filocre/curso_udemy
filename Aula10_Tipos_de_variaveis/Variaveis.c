#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
// Permite o uso de acentos no c�digo
setlocale(LC_ALL,"");

// Imprime "Ol�" na tela do usu�rio.
printf("Ol�");

// Lendo valores inteiros

int a = 5;          // Variavel do tipo inteiro com valor 5.
//int b = 6;
// printf("%d",a);     // Imprimi na tela do usu�rio a vari�vel "a".
// printf("%d",a + b);   // Imprimi na tela do usu�rio uma soma matem�tica de duas vari�veis "a" e "b".


printf ("\nO Valor de a � = %d\n",a);         // O (\n) serve para pular uma linha.
scanf ("%d", &a);           //& significa o endere�o na mem�ria do computador.
printf ("\nO Valor de a mudou para  = %d",a);         // O valor de a muda conforme o usu�rio digita um valor.



// Lendo valores quebrados

float b = 5.5;          // Variavel do tipo quebrado com valor 5.5 .
printf ("\nO Valor de b � = %f\n",b);           // "%f" serve para n�meros n�o inteiros
scanf ("%f", &b);
printf ("\nO Valor de a mudou para  = %f",b);   // OBS: Colocar valores com a virgula e n�o com ponto.

// Lendo letras

char c = 't' ;          // Variavel do tipo caractere com valor t .
printf ("\nO Valor de c � = %c\n",c);           // "%c" serve para caracteres
fflush(stdin);        // Tirar o lixo da entrada de buffer principal
scanf ("%c", &c);
printf ("\nO Valor de a mudou para  = %c",c);   // OBS: Colocar apenas uma letra.
}
