#ifndef NODE
#define NODE

template <typename T>
class node
{

public:
    node(T content) {
        this->content = content;
        this->next = 0;
    }
    T content;
    node *next;

};

#endif // NODE

