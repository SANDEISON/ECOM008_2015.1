#ifndef MATRIZADT
#define MATRIZADT
#include <QString>
template <typename T> class MatrizADT{

public:
    //Retornar determinante
    virtual T determinant() const = 0; //ok xxxxxxxxxxxxxxxxxx
    //Adicionar linha
    virtual void addRow(T* array) = 0;//ok
    //Adicionar coluna
    virtual void addColumn(T* array) = 0;//ok
    //Inserir numa posição determinada
    virtual void insert(int x,int y,const T value) = 0;//ok xxxxxxxxxxxxxxx
    //Retorna string formatada
    virtual QString toString()const  = 0;//ok
    //Soma Matriz
    virtual MatrizADT* sum( MatrizADT* matriz) = 0;//ok
    //Multiplicar Matriz
    virtual MatrizADT* multiply(T z) = 0;;//ok
    //Subtrair Matriz
    virtual MatrizADT* subtract( MatrizADT* matriz) = 0;;//ok
    //Verificar se Matriz é divisivel
    virtual bool isDivisible() = 0;;//ok xxxxxxxxxxxxxxxxx
    //Verificar se Matriz está vazia
    virtual bool isEmpty() = 0;;//ok xxxxxxxxxxxxxxxxxxxxx
    //Retorne a linha pedida
    virtual T* getRow( int y) = 0;
    //Retorne a coluna pedida
    virtual T* getColumn( int x) = 0;
    //Retorne Matriz transposta
    virtual MatrizADT* transposed() = 0;
};


#endif // MATRIZADT




