#include <algorithm>
#include <iostream>
#include <vector>

template<typename T>
void print_vector(const std::vector<T>& vec)
{
    for (T elem: vec) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
}

// Regresa true si x va antes que y, de lo contrario regresa false
bool compara_mayor_a_menor(int x, int y) 
{
    return x > y;
}

int main()
{
    std::vector<char> a {'x', 'y', 'z'};
    a.reserve(15);

    std::cout << "Capacity = " << a.capacity() << "\n";
    std::cout << "Size = " << a.size() << "\n";

    a.push_back('a');
    std::cout << "Capacity = " << a.capacity() << "\n";
    a.push_back('b');
    std::cout << "Capacity = " << a.capacity() << "\n";
    a.push_back('c');
    std::cout << "Capacity = " << a.capacity() << "\n";
    a.push_back('d');
    std::cout << "Capacity = " << a.capacity() << "\n";
    a.push_back('e');
    std::cout << "Capacity = " << a.capacity() << "\n";
    a.push_back('f');
    std::cout << "Capacity = " << a.capacity() << "\n";
    a.push_back('g');
    std::cout << "Capacity = " << a.capacity() << "\n";

    std::cout << "Size = " << a.size() << "\n";
    print_vector(a);

    a.shrink_to_fit();
    std::cout << "Capacity = " << a.capacity() << "\n";
    std::cout << "Size = " << a.size() << "\n";
    print_vector(a);

    std::vector<int> b = {1, 2, 3};

    std::cout << b[2] << "\n";
    std::cout << b.at(2) << "\n";
    b.at(0) = 7;
    print_vector(b);

    std::vector<int> c = {6, 1, 4, 5, 2, 8, 3, 9, 7};
    print_vector(c);
    std::sort(c.begin(), c.end(), &compara_mayor_a_menor);
    print_vector(c);

    return 0;
}