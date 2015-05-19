#ifndef NODELIST
#define NODELIST

template <typename T>
class NodeList
{

public:
    NodeList(T content) {
        this->content = content;
        this->next = 0;
    }
    T content;
    NodeList *next;

};
#endif // NODELIST

