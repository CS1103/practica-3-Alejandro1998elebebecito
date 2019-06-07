//
// Created by albin on 07/06/2019.
//

#ifndef UNTITLED3_MATRIZ_H
#define UNTITLED3_MATRIZ_H
#include <time.h>
#include <iostream>
using namespace std;
template <class T>
class Matriz {
private:
    T **m_matriz;
    int m_cols;
    int m_rows;
    T element;
public:
    Matriz();
    Matriz(int, int);
    Matriz(const Matriz &m);
    ~Matriz();
    void fill();
    Matriz<T> operator+ (const Matriz &matriz_2);
    bool verificar();
    void print_matriz();
    void delete_matriz();
};

#endif //UNTITLED3_MATRIZ_H
