#ifndef SORTADT_H
#define SORTADT_H


template<class T> class SortADT{
public:
    virtual T* bubbleSort(T* &array,int size);
    virtual T* insSort(T* &array,int size);
    virtual T* selSort(T* &array,int size);
    virtual T* mergeSort(T* &array,int size);
    virtual T* shellSort(T* &array,int size);
};

#endif // SORTADT_H

