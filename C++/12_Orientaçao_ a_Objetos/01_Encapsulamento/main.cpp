
/*

    O encapsulamento se constitui do englobamento de funções e dados dentro
de classes. Esse é o conceito mais básico e abrangente da Orientação a Objeto, e
é apenas uma formalização daquilo que entendemos como programação através
desse paradigma. A classe Carro engloba todos os dados e funções que se referem ao tipo de dados Carro.


*/


class Carro
{
public :  // Dados públicos(public) são aqueles que podem ser acessados de qualquer lugar do programa
    Carro ( ) ;
    ~Carro ( ) ;
    void acelerar ( ) ;
    void frear ( ) ;
private : // Dados privados (private), pelo contrário, são reconhecidos apenas por funções membro da classe.
   /*
        Para acessar dados privados, é usual que se implementem funções set e get.
        Funções get retornam o valor do objeto, e funções set setam um novo valor para ele.
        A motivação para o uso de dados privados bastante útil permitir a manipulação
        de dados apenas através de funções da classe.
        Caso cor fosse um membro público, a verificação teria de ser feita pelo programador
        fora da classe, ou se permitiria que fossem atribuídos dados inválidos à variável.


    */


    int cor ;
    int aceleracao ;









} ;







