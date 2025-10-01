#include <iostream>
#include <deque>

int main()
{
    std::deque<char> mi_fila;

    mi_fila.push_front('a');
    mi_fila.push_front('b');
    mi_fila.push_front('c');
    mi_fila.push_back('d');
    mi_fila.push_back('e');
    mi_fila.push_back('f');

    for (char c : mi_fila) {
        std::cout << c << " ";
    }
    std::cout << "\n";

    std::cout << "Front = " << mi_fila.front() << "\n";
    std::cout << "Back = " << mi_fila.back() << "\n";

    mi_fila.pop_front();
    mi_fila.pop_back();

    std::cout << "Front = " << mi_fila.front() << "\n";
    std::cout << "Back = " << mi_fila.back() << "\n";

    std::cout << "Size = " << mi_fila.size() << "\n";
    std::cout << "Max Size = " << mi_fila.max_size() << "\n";

    return 0;
}
