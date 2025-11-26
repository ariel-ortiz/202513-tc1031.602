#include <iostream>
#include <vector>
#include "treeset.h"

void print_int(int x)
{
    std::cout << x << " ";
}

int global_sum = 0;

void suma_int(int n)
{
    global_sum += n;
}

int main()
{
    TreeSet<int> a {5, 3, 7, 6, 2, 1, 4};
    std::cout << a.contains(4) << "\n";
    std::cout << a.contains(0) << "\n";
    a.inorder(print_int);
    std::cout << "\n";
    a.inorder(suma_int);
    std::cout << global_sum << "\n";
    return 0;
}
