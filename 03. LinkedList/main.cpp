#include <iostream>
#include "linkedlist.h"

int main()
{
    LinkedList<char> lista;
    lista.insert_front('a');
    lista.insert_front('b');
    lista.insert_front('c');
    std::cout << lista.to_string() << "\n";
    return 0;
}
