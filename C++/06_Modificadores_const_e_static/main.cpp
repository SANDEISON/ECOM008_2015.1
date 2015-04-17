// Demonstrando o modi f i cador s t a t i c
#include <iostream>


/*
    Const declara uma variável ou função, como sendo constante
    o compilador faz algumas otimizações quando sabe que o valor de uma variável não será alterado

    A palavra-chave static é usada principalmente dentro de funções , e tambem usada em classes
    Ela serve pra dizer que o valor da variável não deve ser descartado no final na execução,
    como seria normal a uma variável local, mas guardado para uso posterior.

*/

void incrementa ( )
{
    static int c = 0 ;
    c++;
    std :: cout << c << std :: endl ;
}

int main ( )
{
    incrementa ( ) ;
    incrementa ( ) ;
    return 0 ;
}
