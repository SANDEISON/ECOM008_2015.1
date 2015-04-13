#include "implementalista.h"
#include <QDebug>

int main()
{
   implementalista<int> llist;

   qDebug()<<"Imprimindo a Lista vazia : ";
   llist.show();

   llist.append(4);
   llist.append(9);
   llist.append(10);
   llist.append(15);

   qDebug()<<"Imprimindo a Lista : ";
   llist.show();

   qDebug()<<"Imprimindo o elemento da possição do cursor : ";
   qDebug()<< "Possição do Cursor : "<< llist.currPos();
   qDebug()<< "Elemento da Lista  : "<< llist.getValue()<< endl;

   qDebug()<<"Movendo o cursor para o final da lista: ";
   llist.moveToEnd();
   qDebug()<< "Possição do Cursor : "<< llist.currPos();
   qDebug()<< "Elemento da Lista  : "<< llist.getValue()<< endl;


   qDebug()<<"Alterando a possição do cursos um elemento a esquerda: ";
   llist.prev();
   qDebug()<< "Possição do Cursor : "<< llist.currPos();
   qDebug()<< "Elemento da Lista  : "<< llist.getValue()<< endl;


   qDebug()<<"Alterando a possição do cursos para a direita: ";
   llist.next();
   qDebug()<< "Possição do Cursor : "<< llist.currPos();
   qDebug()<< "Elemento da Lista  : "<< llist.getValue()<< endl;

   qDebug()<<"Alterando a possição do cursos para o inicio da Lista: ";
   llist.moveToStart();
   qDebug()<< "Possição do Cursor : "<< llist.currPos();
   qDebug()<< "Elemento da Lista  : "<< llist.getValue()<< endl;

   qDebug()<<"Alterando a possição do cursos para a 2 posiçao da Lista: ";
   llist.moveToPos(1);
   qDebug()<< "Possição do Cursor : "<< llist.currPos();
   qDebug()<< "Elemento da Lista  : "<< llist.getValue()<< endl;

   qDebug()<< "Tamanho da Lista :  "<< llist.length() << endl;


   qDebug()<< "Deletando a Lista  "<< endl;
   llist.clear();

   qDebug()<<"Imprimindo a Lista : ";
   llist.show();





}
