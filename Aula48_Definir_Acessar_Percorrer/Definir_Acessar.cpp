#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;
int main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    /* Fun�ao principal do programa
        vetor = [0] [1] [2]

        matriz = [1] [2]              // a matriz ent�o � um conjunto de vetores
                 [3] [4]
    */

    // Criando matriz
    int matriz [2][2]; int i; int j;

    // Passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    // Imprimindo valores na tela
    for (i = 0; i < 2; i++)
    {
            for (j = 0; j < 2; j++)
            // cout << "\ni = " << i << "  j = " << j;     // Imprimindo apenas o indice para o usu�rio
            cout << "\n" << matriz[i][j];                          // Imprimindo os valores presentes na matriz.
        }

    // Lendo valores para a matriz
    for (i = 0; i < 2; i++)
    {
            for (j = 0; j < 2; j++)
            cin >> matriz[i][j];                          // Imprimindo os valores presentes na matriz.
        }

// Imprimindo valores na tela
    for (i = 0; i < 2; i++)
    {
            for (j = 0; j < 2; j++)
            // cout << "\ni = " << i << "  j = " << j;     // Imprimindo apenas o indice para o usu�rio
            cout << "\n" << matriz[i][j];                          // Imprimindo os valores presentes na matriz.
        }





    // Pausa o programa ap�s executar
    system("pause");
}
