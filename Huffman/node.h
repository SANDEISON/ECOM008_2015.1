#ifndef NODE
#define NODE

template <typename E>
class Node {

public:
    Node(E content) {
        this->frequencia = 0;
        this->left = 0;
        this->right = 0;
        this->content = content;
    }

    E content;
    int frequencia;
    Node<E> *left;
    Node<E> *right;

};


#endif // NODE

