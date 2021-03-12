#include <list>
#include <string>
#include <iostream>

using namespace std;

int main() 
{
    list <int> li = { 1,2,3,4,5,6,7,8,9,10};

    list<int>::iterator it = next(li.begin(), 2); // vai remover o da posição 2, isto é o '3'.

    li.erase(it); // apaga o que o iterador aponta.

    for (int& i : li) 
    {
        cout << i << endl;    //iteram as referencias da lista
    }
}