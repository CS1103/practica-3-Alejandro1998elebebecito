//
// Created by albin on 07/06/2019.
//
#include "matriz.h"
template<typename T>
Matriz<T>::Matriz()
{
    m_rows = 6;
    m_cols = 6;
}

template<typename T>
Matriz<T>::Matriz(const Matriz &m)
{
    *this = m;
}

template<typename T>
Matriz<T>::Matriz(int rows , int cols)
{
    m_cols = cols;
    m_rows = rows;
    m_matriz = new T*[m_rows];

    for (int i = 0; i < m_rows; i++) {
        m_matriz[i] = new T[m_cols];
    }
}
template<typename T>
void Matriz<T>::fill()
{
    for (int i = 0; i < m_rows; i++) {
        cout << "Fila " << i + 1 << endl;
        for (int j = 0; j < m_cols; j++) {
            cout << "Ingresa el elemento " << j + 1 << endl;
            cin >> element;
            m_matriz[i][j] = element;
        }
        cout << endl;
    }
}
template<typename T>
Matriz<T> Matriz<T>::operator+ (const Matriz &matriz_2)
{
    Matriz matriz_result(m_rows, m_cols);
    for (int i = 0; i < m_rows; i++)
    {
        for (int j = 0; j < m_cols; j++)
        {
            matriz_result.m_matriz[i][j] = m_matriz[i][j] + matriz_2.m_matriz[i][j];
        }
    }
    return matriz_result;
}
template<typename T>
void Matriz<T>::print_matriz()
{
    for (int i = 0; i < m_rows; i++)
    {
        for (int j = 0; j < m_cols; j++)
        {
            cout << m_matriz[i][j] << " ";
        }
        cout << endl << endl;
    }
    cout << endl << endl;
}
template<typename T>
void Matriz<T>::delete_matriz()
{
    for (int i = 0; i < m_rows; i++) {
        delete[] m_matriz[i];
    }
    delete[] m_matriz;
}

template<typename T>
Matriz<T>::~Matriz() {}

