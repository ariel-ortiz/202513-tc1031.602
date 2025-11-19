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
    std::cout << sum(x) << "\n";
    std::cout << sum(IntList {}) << "\n";
    std::cout << sum(IntList {4, 8, 15, 16, 23, 42}) << "\n";
    std::cout << duplicate(IntList {4, 8, 15, 16, 23, 42}) << "\n";
    std::cout << last(IntList {4, 8, 15, 16, 23, 42}) << "\n";
    std::cout << merge(IntList {1, 4, 7, 9, 10}, IntList {0, 2, 3, 4, 5, 6, 7, 8}) << "\n";
    return 0;
}
