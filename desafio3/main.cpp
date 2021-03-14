#include <list>
#include <string>
#include <iostream>

using namespace std;

int main() 
{
    /*
    // -- Se for retirar a partir da posição na lista! --
    
    list <int> li = { 1,2,3,4,5,6,7,8,9,10};

    list<int>::iterator it = next(li.begin(), 2); // vai remover o da posição 2, isto é o '3'.

    li.erase(it); // apaga o que o iterador aponta.

    for (int& i : li) 
    {
        cout << i << endl;    //iteram as referencias da lista
    }
    */
    
    // -- Se for escolher o número a remover! --
    list <int> li = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (list<int>::iterator it = li.begin(); it != li.end(); it++)
    {
        if (*it == 2) // vai remover o valor que quero, neste caso é '2'.
            it = li.erase(it);
    }

    for (int& i : li) // iteram as referencias da lista.
    {
        cout << i << endl;
    }
}
