#ifndef SORTADT_H
#define SORTADT_H


template<class E> class SortADT{
public:
    virtual E* bubbleSort(T* &array,int size);
    virtual E* insSort(T* &array,int size);
    virtual E* selSort(T* &array,int size);
    virtual E* mergeSort(T* &array,int size);
    virtual E* shellSort(T* &array,int size);
};

#endif // SORTADT_H

