#include<implementastack.h>
#include<QDebug>

int main()
{
    implementastack<int> LStack;
    LStack.push(8);
    LStack.push(9);
    LStack.push(7);
    LStack.push(5);
    LStack.push(3);

    qDebug()<< "Item que esta no topo da pilha";
    qDebug()<< LStack.topValue();

    qDebug()<< "TAMANHO DA PILHA";
    qDebug()<< LStack.length();

    qDebug()<< "REMOVENDO "<< LStack.pop() << "DO INICIO DA PILHA";


    qDebug()<< "REMOVENDO "<< LStack.pop() << "DO INICIO DA PILHA";

    qDebug()<< "TAMANHO DA PILHA";
    qDebug()<< LStack.length();

    qDebug()<<"LIMPA A LISTA";
    LStack.clear();


}
