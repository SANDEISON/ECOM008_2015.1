#include <iostream>
using namespace std ;


int main ( )
{
    int a = 0 , b = 0 ;
    cin >> a >> b ;
    cout << " Testando o whi l e " << endl ;


    while ( a < b)
    {
        cout << a << endl ;
        a += 1 ;
    }

    cout << "Agora o do/whi l e " << endl ;

    // do . . . wh i l e
    do
    {
        cout << a << endl ;
        a -= 1 ;

    }while ( a > b) ;

}
