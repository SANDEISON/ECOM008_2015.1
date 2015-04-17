#ifndef CARRO_H
#define CARRO_H


/*
    Nos arquivos header(.h), coloca-se idealmente apenas aquilo que define como
    uma classe deve ser utilizada, basicamente seus atributos e os cabeçalhos de suas
    funções, sem qualquer referência a como as funções são implementadas
*/


class Carro
{
public:
    Carro(); // Declaração do Construtor
    ~Carro(); //Declaração do Destrutor

    void acelerar ( ) ; //Declaração do Metodo Acelerar
    void frear ( ) ; // Declaração do Metodo Frear
    void setCor ( const int novaCor ); // Declaração do Metodo com Argumentos Constantes

    // Funções Membro Constantes
    int getAceleracao ( ) const;
    void ultrapassarCarro ( const Carro &carro_a_ser_ultrapassado );

private :
    int cor ;
    int aceleracao ;



};

#endif // CARRO_H
