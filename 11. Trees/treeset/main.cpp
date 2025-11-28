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
    TreeSet<int> a {5, 3, 7, 6, 2, 4, 10, 8, 15};
    std::cout << a.contains(4) << "\n";
    std::cout << a.contains(0) << "\n";
    a.inorder(print_int);
    std::cout << "\n";
    a.inorder(suma_int);
    std::cout << global_sum << "\n";
    a.levelorder(print_int);
    std::cout << "\n";
    std::cout << "Height = " << a.height() << "\n";
    std::cout << "Is full? " << a.is_full() << "\n";
    a.add(1);
    std::cout << "Is full? " << a.is_full() << "\n";
    std::cout << "Leaf Count = " << a.leaf_count() << "\n";
    TreeSet<int> b {5, 3, 7, 6, 2, 4, 10};
    std::cout << "Is Perfect " << a.is_perfect() << "\n";
    std::cout << "Is Perfect " << b.is_perfect() << "\n";
    return 0;
}
