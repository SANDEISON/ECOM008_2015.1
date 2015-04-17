#include <iostream>

void incrementaNaoAltera ( int x )
{
    x += 1 ;
    std :: cout << " Dentro da funcao : " << x << std :: endl ;
}

void incrementaAltera ( int *x )
{
    *x += 1 ;
    std :: cout << " Dentro da funcao : " << *x << std :: endl ;
}


int main ( )
{
    int valor = 0 ;
    std :: cout << valor << std :: endl ;
    incrementaNaoAltera ( valor ) ;
    std :: cout << valor << std :: endl ;
    incrementaAltera (&valor ) ;
    std :: cout << valor << std :: endl ;
}
