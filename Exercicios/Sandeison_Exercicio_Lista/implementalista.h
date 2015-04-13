#ifndef IMPLEMENTALISTA
#define IMPLEMENTALISTA


#include<listadt.h> // Imcluindo o arquivo listadt.h
#include<node.h>  // Incluindo o arquivo nodo.h

#include<QDebug>


template<class E>
class implementalista : public ListADT<E>
{
public:

    node<E> *m_cursor;
    node<E> *m_head;
    node<E> *m_tail;


    implementalista() {
        m_cursor = 0;
        m_head = 0;
        m_tail = 0;
    }


    void show() {
        node<E> *tmp;
        if (m_head == 0){
            qDebug() << "Lista Vazia !!!!!!\n\n";
        }else{
            for(tmp = m_head; tmp != 0;
                tmp = tmp->next)
                qDebug() << tmp->content;
        }

    }

    void clear(){
        while(m_head != NULL) {
            m_cursor = m_head;
            m_head = m_head->next;
            delete m_cursor;
        }
    }

    void insert(const E& item){
        node<E> *no = new node<E>(item);


    }


    void append(const E& item) {
        node<E> *no = new node<E>(item);
        if(m_head == 0) {
            m_head = no;
            m_tail = m_head;
            m_cursor = m_head;
        } else {
            m_tail->next = no;
            m_tail = m_tail->next;
        }

    }


    void moveToStart() {
         m_cursor = m_head;
    }


    void moveToEnd(){
         m_cursor = m_tail;

    }



    void prev(){
        node<E> *tmp;
        node<E> *ver;

        if(m_cursor != m_head) {
            for(tmp = m_head; tmp < m_cursor;
                tmp = tmp->next){
                ver = tmp;
            }
        }
        m_cursor = ver;

    }



    void next() {
        if(m_cursor != m_head) {
            if (m_cursor == m_tail){
                m_cursor = m_head;
            }else{
               m_cursor = m_cursor->next;
            }

        }

    }


   int length()const{
       node<E> *tmp;
       int cont=0;
       for(tmp = m_head; tmp != 0;
               tmp = tmp->next){
           cont++;
       }
       return cont;

   }

   int currPos()const{
       node<E>* temp = m_head;
       int i;
       for (i=0; m_cursor != temp; i++)
            temp = temp->next;
       return i;

   }


   void moveToPos (int pos){
       int cont = 0;
       node<E> *tmp;
           for(tmp = m_head;tmp != 0 ;
               tmp = tmp->next){

              if (cont==pos){
                   m_cursor = tmp;
                   break;
              }

              cont++;
           }
       }




    const E& getValue() const {
        Q_ASSERT_X(m_cursor != 0, "LinkedList::getValue", "Empty list");
        return m_cursor->content;
   }





};

#endif // IMPLEMENTALISTA

