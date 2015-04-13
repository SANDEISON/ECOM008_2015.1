#ifndef IMPLEMENTASTACK
#define IMPLEMENTASTACK

#include<stackadt.h>
#include<link.h>
#include<QDebug>

template<class E>
class implementastack : public Stack<E>
{


private:
    Link<E>* top;
    int size;


public:
    implementastack(int sz =0) // Constructor
    { top = 0; size = 0; }
    ~implementastack() { clear(); } // Destructor

void clear(){
    while (top != 0) {
    Link<E>* temp = top;
    top = top->next;
    delete temp;
    }
    size = 0;

}

void push(const E& it){
    top = new Link<E>(it, top);
    size++;
}

E pop(){
   Q_ASSERT_X(top != 0, "Stack is empty","");
    E it = top->element;
    Link<E>* ltemp = top->next;
    delete top;
    top = ltemp;
    size--;
    return it;

}

const E& topValue() const{
    Q_ASSERT_X(top != 0, "Stack is empty","");
    return top->element;

}
int length() const{
    return size;
}

};

#endif // IMPLEMENTASTACK

