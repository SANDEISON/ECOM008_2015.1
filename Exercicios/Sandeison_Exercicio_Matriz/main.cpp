#include <QCoreApplication>
#include <TemplateMatriz.h>
#include <QDebug>

int main()
{
    MatrizADT<int>* matrizTemplate = new Matriz<int>(2,2);
    int entrada[2] ={2,4};
    matrizTemplate->addRow(entrada);
    matrizTemplate->addRow(entrada);
    qDebug() << ("Linha Adicionada");
    qDebug() << (matrizTemplate->toString());

    matrizTemplate->addColumn(entrada);
    matrizTemplate->addColumn(entrada);
    qDebug() << ("Coluna Adicionada");
    qDebug() << (matrizTemplate->toString());

    matrizTemplate->insert(1,1,5);
    qDebug() << ("Valor Alterado");
    qDebug() << (matrizTemplate->toString());




}

