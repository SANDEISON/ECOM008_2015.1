#include <iostream>
using namespace std ;

/*
    A declaração dos tipos é feita de modo bastante similar a C, diferindo apenas
    para ponteiros, onde é usado o comando new, em vez de malloc, e delete,
    em vez de free.
*/
int main ( )
{


    // aloca o vetor
    int * vetor ;
    // descomente para ter uma surpresa !
    // vetor [ 0 ] = 3;
    vetor = new int [ 10 ] ;
    vetor [ 0 ] = 3 ; // ok
    cout << vetor [ 0 ] << endl ;
    // deleta o vetor
    delete ( vetor ) ;
}
