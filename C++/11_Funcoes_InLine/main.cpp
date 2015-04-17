#include <iostream>

/*
Chamadas de funções envolvem um overhead durante a execução. Para
reduzir este overhead, a linguagem dá suporte a ‘funções inline’. Dessa forma,
utilizando o qualificador inline antes do tipo de retorno de uma função aconselhamos
o compilador a gerar cópias do código da função para evitar chamar a
função. Contudo, este artifício deve ser utilizado apenas com funções pequenas
e freqüentemente usadas. Além disso, o uso de funções inline pode diminuir o
tempo de execução, mas deve aumentar o tamanho do programa.

*/

#define CUBO( x ) x*x*x //MACRO
using namespace std ;
inline int cubo ( int x ) { return x*x*x ; } //INLINE

int main ( )
{
    cout << cubo ( 5 ) << endl ; // 125
    cout << CUBO( 5 ) << endl ; // 125
    cout << cubo (2+3) << endl ; // 125
    cout << CUBO(2+3) << endl ; // 17
    return 0 ;
}
