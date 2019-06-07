/*/////EJERCICIO 1///////////
#include <time.h>
#include "matriz.h"
#include "matriz.cpp"
#include <iostream>

using namespace std;

int main()
{


    int n_rows;
    int n_cols;
    // Mismo # de filas y columnas en ambas matrices.
    cout << "Ingresa nro de filas: " << endl;
    cin >> n_rows;
    cout << "Ingresa nro de columnas: " << endl;
    cin >> n_cols;
    cout << endl;
    Matriz<int> a(n_rows, n_cols);
    Matriz<int> b(n_rows, n_cols);
    Matriz<int> c(n_rows, n_cols);
    //Se llenan las matrices
    a.fill();
    b.fill();
    cout << "Matriz A + B " << endl;
    c = a+b;
    c.print_matriz();
    //
    a.delete_matriz();
    b.delete_matriz();
    c.delete_matriz();
    }
*/
///// EJERICIO 2//////
#include <deque>
#include <iostream>
using namespace std;
template<typename T>
int function(deque<T> x, int n)
{
    // Loop dado por iterators para recorrer el vector
    for ( n = x.begin(); n != x.end(); n++)
    {

    }

}

int main()
{
    deque<int> t = {5,1,4,8,2,3};
    int n=3;


}
