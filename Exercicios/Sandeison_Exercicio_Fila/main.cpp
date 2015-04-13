#include <implementaqueue.h>
#include<QDebug>


int main()
{
    implementaqueue<int> AQueue;

    qDebug()<<"Enfileirando !!!";
    AQueue.enqueue(5);
    AQueue.enqueue(8);
    AQueue.enqueue(13);
    AQueue.enqueue(4);


    qDebug()<<"Tamanho da Fila : " << AQueue.length() ;

    qDebug()<<"Inicio da fila : " << AQueue.frontValue() ;

    qDebug()<<"Desenfileirando !!!";
    AQueue.dequeue();

    qDebug()<<"Tamanho da Fila : " << AQueue.length() ;



}
