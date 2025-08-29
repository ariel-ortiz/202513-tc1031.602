#include <iostream>

int a = 5;    // Variables globales inicializadas
int b = 10;

int c;        // Variables globales no-inicializadas
int d;

void una_funcioncita()
{
    return;
}

int main()
{
    int x;     // Variables locales
    int y;

    int *p = new int;  // Variables en el heap
    int *q = new int;

    std::cout << "Text Section:\n";
    std::cout << "&una_funcioncita = " << reinterpret_cast<void*>(&una_funcioncita) << "\n";
    std::cout << "&main            = " << reinterpret_cast<void*>(&main) << "\n";
    std::cout << "Data Section:\n";
    std::cout << "&a               = " << &a << "\n";
    std::cout << "&b               = " << &b << "\n";
    std::cout << "BSS Section:\n";
    std::cout << "&c               = " << &c << "\n";
    std::cout << "&d               = " << &d << "\n";
    std::cout << "Heap Section:\n";
    std::cout << "p                = " << p << "\n";
    std::cout << "q                = " << q << "\n";
    std::cout << "Stack Section:\n";
    std::cout << "&x               = " << &x << "\n";
    std::cout << "&y               = " << &y << "\n";
    std::cout << "&p               = " << &p << "\n";
    std::cout << "&q               = " << &q << "\n";

    delete p;
    delete q;

    return 0;
}
