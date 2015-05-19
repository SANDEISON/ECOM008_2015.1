#ifndef IMPLEMENTALISTA
#define IMPLEMENTALISTA

#include <listadt.h>
#include <nodelist.h>
#include <QDebug>

template<class E>class implementalista: public ListADT <E>{
private:

public:

    NodeList<E> *m_cursor;
    NodeList<E> *m_head;
    NodeList<E> *m_tail;

    implementalista() {
        m_cursor = 0;
        m_head = 0;
        m_tail = 0;
    }



    // Limpa o conteúdo da lista, faz ela ficar vazia.
    virtual void clear() {
        while(m_head != NULL) {
            m_cursor = m_head;
            m_head = m_head->next;
            delete m_cursor;
        }
    }



    // Insere um elemento na atual posição do cursor
    /* Dicas Shows®:
         * Se o cursor está na posição 3, então esse novo elemento
         * ocupará a posição 3, e quem ocupava a posição 3 antes ocupará
         * a 4. E assim sucessivamente...
    */

    virtual void insert(const E& item) {



    }



    // Adiciona um elemento no final da lista
    virtual void append(const E& item) {

        NodeList<E> *no = new NodeList<E>(item);
        if(m_head == 0) {
            m_head = no;
            m_tail = m_head;
            m_cursor = m_head;
        } else {
            m_tail->next = no;
            m_tail = m_tail->next;
        }


    }



    // Remove e retorna o elemento da atual posição do cursor
    virtual E remove() {
        while(m_head != NULL) {
            m_cursor = m_head;
            m_head = m_head->next;
            delete m_cursor;
        }


    }



    // Move o cursor para o começo da lista
    virtual void moveToStart(){
         m_cursor = m_head;
    }



    // Move o cursor para o fim da lista
    virtual void moveToEnd() {
        m_cursor = m_tail;
    }



    // Move o cursor uma célula para a esquerda.
    // Não altera se ele já estiver no começo.
    virtual void prev() {
        NodeList<E> *tmp;
        NodeList<E> *ver;

        if(m_cursor != m_head) {
            for(tmp = m_head; tmp < m_cursor;
                tmp = tmp->next){
                ver = tmp;
            }
        }
        m_cursor = ver;



    }



    // Move o cursor uma cédula para a direita.
    // Não altera se ele já estiver no começo.
    virtual void next() {
        if(m_cursor != m_head) {
            if (m_cursor == m_tail){
                m_cursor = m_head;
            }else{
               m_cursor = m_cursor->next;
            }

        }


    }



    // Retorna o número de elementos da lista
    virtual int length() const {
        NodeList<E> *tmp;
        int cont=0;
        for(tmp = m_head; tmp != 0;
                tmp = tmp->next){
            cont++;
        }
        return cont;


    }



    // Retorna a atual posição do cursor
    virtual int currPos() const {
        NodeList<E>* temp = m_head;
        int i;
        for (i=0; m_cursor != temp; i++)
             temp = temp->next;
        return i;
    }



    // Move o cursor para uma determinada posição
    // pos: nova posição do cursor
    virtual void moveToPos(int pos){
        int cont = 0;
        NodeList<E> *tmp;
            for(tmp = m_head;tmp != 0 ;
                tmp = tmp->next){

               if (cont==pos){
                    m_cursor = tmp;
                    break;
               }

               cont++;
            }



    }



    // Retorna o elemento da atual posição do cursor
    virtual const E& getValue() const {

        return m_cursor->content;

    }



    void show() {
        NodeList<E> *tmp;
        if (m_head == 0){
            qDebug() << "Lista Vazia !!!!!!\n\n";
        }else{
            for(tmp = m_head; tmp != 0; tmp = tmp->next)
                qDebug() << tmp->content;
        }

    }



};
#endif // IMPLEMENTALISTA

