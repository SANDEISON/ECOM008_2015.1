#include <iostream>
using namespace std ;

/*
    Em C++ as variáveis podem ser de cinco tipos primários distintos:

    int: valores inteiros, variando entre 16 e 32 bits dependendo do compilador;

    char: caracteres, variando entre -128 e 127, de acordo com a tabela ASCII;

    float: valores em ponto flutuante (reais);

    double: valores em ponto flutuante, com precisão dupla;

    bool: valor false (0) ou true (1).

*/

// demonstrando os diferentes escopos

int i = 12 ; //Variavel Global
int main ( )
    {
    int i ; //Variavel Global

    // uso do operador ::
    for ( i=0 ; i < :: i ; i++) //O "i" é uma variavel local, Utilizamos os "::" para informar ao programa que é a mesma variavel global "i"
    {
        cout << i << endl ;
    }
}
