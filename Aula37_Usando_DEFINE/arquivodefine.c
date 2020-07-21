#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10      // Usar letra maiuscula.
void main() {
    // Permite o uso de acentos no código
    setlocale(LC_ALL,"");

    // Imprime na tela do usuário
    printf("%d",TAM);

    int i;
    // Contagem até 10
    for(i = 1; i < TAM; i++)
    {
        printf("%d",i);
    }

    // Pausa o programa após executar
    system("pause");
}
