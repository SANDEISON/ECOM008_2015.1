#include <iostream>
using namespace std ;
int main ( )
{
    int a = 0 ;
    cin >> a ;
    cout << "Testando o switch " << endl ;
    switch ( a ) {

        case 1 :
        cout << "um" ;
        break ;
        case 2 :
        cout << "dois " ;
        break ;
        case 3 :
        cout << "tres " ;
        break ;
        default :
        cout << "Nenhum dos tres " ;
    }
    cout << endl << endl ;
}
