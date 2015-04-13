#ifndef TEMPLATEMATRIZ_H
#define TEMPLATEMATRIZ_H

#include <MatrizADT.h>
#include <QDebug>

template<typename T> class Matriz : public MatrizADT<T>{
    T **matrizTemplate;
    int x,y,auxY = 0,auxX = 0;
public:




    Matriz(MatrizADT<T> *matrizTemplate){
        Matriz<T>* aux = dynamic_cast<Matriz<T>*>(matrizTemplate);
        this->matrizTemplate = new T*[aux->getX()];
        for (int var = 0; var < aux->getX(); ++var) {
            this->matrizTemplate[var] = new T[aux->getY()];
        }
        for (int i = 0; i < aux->getX(); ++i) {
            for (int j = 0; j < aux->getY(); ++j) {
                this->matrizTemplate[i][j] = aux->get(i,j);
            }
        }
    }




    Matriz(int row,int column){
        matrizTemplate = new T*[row];
        for (int var = 0; var < row; ++var) {
            matrizTemplate[var] = new T[column];
        }
        this->x = row;
        this->y = column;
    }



    T determinant() const{
        if( x == 2 && y == 2){
            return matrizTemplate[0][0]*matrizTemplate[1][1] - matrizTemplate[0][1]*matrizTemplate[1][0] ;
        }
        if (x == 3 && y == 3){
            return (matrizTemplate[0][0]*matrizTemplate[1][1]*matrizTemplate[2][2]+matrizTemplate[0][1]*matrizTemplate[1][2]*matrizTemplate[2][0]+matrizTemplate[0][2]*matrizTemplate[1][0]*matrizTemplate[2][1]) -
                    (matrizTemplate[2][0]*matrizTemplate[1][1]*matrizTemplate[0][2] + matrizTemplate[2][1]*matrizTemplate[1][2]*matrizTemplate[0][0] + matrizTemplate[2][2]*matrizTemplate[1][0]*matrizTemplate[0][1]);
        }else {
            qDebug() << "Operação invalida";
            return 0;
        }
    }



    void insert(int x, int y,const T value){
        if(x < this->x && y < this->y){
            matrizTemplate[y][x] = value;
        }
    }




    void addRow(T *array){
        if(sizeof(array) == sizeof(matrizTemplate[auxX])) {
            for (int var = 0; var < x; ++var) {
                matrizTemplate[auxX][var] = array[var];
            }
            auxX++;
        }else{
            qDebug() << "Operação invalida";
        }
    }




    void addColumn(T *array){
        for (int var = 0; var < y; ++var) {
            matrizTemplate[var][auxY] = array[var];
        }
        auxY++;
    }




    MatrizADT<T>* sum(MatrizADT<T> *matriz){

        Matriz<T>* mtz = dynamic_cast<Matriz<T>*>(matriz);
        if(x != mtz->getX() || y != mtz->getY()){
            return 0;
        }
        MatrizADT<T>* aux = new Matriz<T>(x,y);
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                aux->insert(i,j,this->matrizTemplate[i][j]+mtz->get(i,j));
            }
        }
        return aux;
    }




    MatrizADT<T>* multiply(T z){
        MatrizADT<T>* aux = new Matriz<T>(x,y);
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                aux->insert(i,j,this->matrizTemplate[i][i]*z);
            }
        }
        return aux;
    }




    MatrizADT<T>* subtract(MatrizADT<T> *matriz){
        Matriz<T>* mtz = dynamic_cast<Matriz<T>*>(matriz);
        if(x != mtz->getX() || y != mtz->getY()){
            return 0;
        }
        MatrizADT<T>* aux = new Matriz<T>(x,y);
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                aux->insert(i,j,this->matrizTemplate[i][j]-mtz->get(i,j));
            }
        }
        return aux;
    }

    bool isDivisible(){
        return false;
    }


    T get(int x,int y) const{
        return matrizTemplate[x][y];
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }

    QString toString() const {
        QString result = "";
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                result += QString::number(matrizTemplate[i][j]);
                 //qDebug() << "Posição: [" << i << ',' << j << "] = " << mtz[i][j];
                result += ' ';
            }
            result += '\n';
        }
        return result;
    }


    bool isEmpty(){
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                if(matrizTemplate[i][j] == 0){
                    return true;
                }
            }
        }
        return false;
    }



    T *getRow( int y){
        T array[x];
        for (int i = 0; i < x; ++i) {
            array[i] = matrizTemplate[y][i];
        }
        return array;
    }



    T *getColumn( int x){
        T array[y];
        for (int i = 0; i < y; ++i) {
            array[i] = matrizTemplate[i][x];
        }
        return array;
    }


    MatrizADT<T> * transposed(){
        MatrizADT<T> *aux = new Matriz<T>(y,x);
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                aux->insert(j,i,matrizTemplate[i][j]);
                qDebug() << "Posição: [" << i << ',' << j <<']';
            }
        }
        return aux;
    }
};


#endif // TEMPLATEMATRIZ_H
