#include "carro.h"

/*
   Nós arquivos (.cpp) é realizada a implementação


*/



/*
    Construtores são os responsáveis pela alocação de memória e inicialização
    de dados, sendo sempre chamados automaticamente na declaração um novo
    objeto. O uso de construtores elimina o problema de ter que manualmente
    inicializar os dados sempre que declarados, o que pode ser esquecido e levar a
    erros.
*/

// Implementação do Construtor sem parametros
Carro::Carro()
{
    cor = 0 ;
}

/*
// Implementação do Construtor  com Parametros

Carro :: Carro ( int novaCor )
{
    cor = novaCor ;
}
*/

/*
// Implementação do Construtor  com Parametros

Carro :: Carro ( int novaCor = 255)
{
    cor = novaCor ;
}

*/



//Implementação do Destrutor , liberam a memória alocada para o objeto

/*

    É válido observar que os destrutores não seguem a mesma regra que os
    construtores, não sendo possível que recebam parâmetros.

*/

Carro::~Carro()
{

}

/*
    Às vezes, é interessante informarmos ao compilador que um objeto é constante.
    Isso porque o compilador consegue realizar algumas otimizações significativas
    quando usamos constantes.
*/
void Carro :: setCor ( const int novaCor )
{
    cor = novaCor ;
}



int Carro :: getAceleracao ( ) const
{
        return aceleracao ;
}


void ultrapassarCarro ( const Carro &carro_a_ser_ultrapassado )
{
    carro_a_ser_ultrapassado . getAceleracao( ) ;
}





