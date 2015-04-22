#include <ImplementaArvore.h>
#include<QDebug>

int main()
{

    ImplementaArvore <int> Arvore;

    qDebug()<< "Inserindo na Arvore ";
    Arvore.add(6);
    Arvore.add(3);
    Arvore.add(5);
    Arvore.add(9);
    Arvore.add(2);
    Arvore.add(7);
    Arvore.add(1);
    Arvore.add(4);

    qDebug()<< "Imprimindo  a Arvore !!! " << endl;
    qDebug() << Arvore.toString();
    qDebug()<< endl;

    qDebug()<< "Removendo o 1 da Arvore ";
    Arvore.remove(1);


    qDebug()<< "Imprimindo  a Arvore !!! " << endl;
    qDebug() << Arvore.toString();
    qDebug()<< endl;



    qDebug()<< "Verifica se o 4 esta na Arvore :" << endl;
    qDebug() << Arvore.inTree(4) <<endl;


    qDebug()<< "O menor valor na Arvore é:";
    qDebug() << Arvore.lower() <<endl;

    qDebug()<< "O maior valor na Arvore é:";
    qDebug() << Arvore.greater()<<endl;


    qDebug()<< "Numeros de nos na Arvore é:";
    qDebug() << Arvore.countNode()<<endl;


    qDebug()<< "Numeros de nivel na Arvore é:";
    qDebug() << Arvore.countLevel()<<endl;


    qDebug()<< "Numeros de fohlas na Arvore é:";
    qDebug() << Arvore.countLeaf()<<endl;

    qDebug()<< "Tamanho da Arvore é:";
    qDebug() << Arvore.height() <<endl;


    qDebug()<< "Limpando a Arvore:";
    Arvore.clear();


    qDebug()<< "Imprimindo  a Arvore !!! " << endl;
    qDebug() << Arvore.toString();
    qDebug()<< endl;

    return 0;
}
