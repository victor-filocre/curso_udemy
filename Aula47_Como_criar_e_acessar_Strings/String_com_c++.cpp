#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

// using namespace std;
 int main() {
    // Permite o uso de acentos no c�digo
    setlocale(LC_ALL,"");

    // Definindo uma string
    std::string palavra;

    // Imprimindo na tela
    std::cout <<("Digite uma palavra: ");

    // Lendo uma string
    std::cin >> palavra;

    // Imprimindo uma vari�vel na tela
    std::cout << palavra;


    // Pausa o programa ap�s executar
    system("pause");
    return 0;
}
