//Mesmo que o exemplo ant e r ior , mas usando namespaces
#include <iostream>
using namespace std ;
//Para nao abrir todo namespace poderiamos usar
/*
us ing s t d : : c in ;
us ing s t d : : cout ;
us ing s t d : : endl ;
*/
int main ( )
{
    char nome [ 30 ] ;
    int idade ;
    cin >> nome ;
    cin >> idade ;
    cout << "Meu nome eh " << nome << " , tenho " << idade <<
    " anos . " << endl ;
}
