#include <iostream>
#include "intlist.h"
#include "recursion.h"

int main()
{
    IntList x {3, 8, 5};
    std::cout << first(x) << "\n";
    std::cout << rest(x) << "\n";
    std::cout << cons(0, x) << "\n";
    std::cout << is_empty(x) << "\n";
    std::cout << size(x) << "\n";
    std::cout << size(IntList {}) << "\n";
    std::cout << cons_end(7, x) << "\n";
    return 0;
}
