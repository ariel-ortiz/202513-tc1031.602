#include <algorithm>
#include <iostream>
#include <vector>

// Complexity: O(N)
template<typename T>
int sequential_search(const std::vector<T>& data, const T& value)
{
    for (int i = 0; i < data.size(); i++) {
        if (value == data.at(i)) {
            return i;
        }
    }
    return -1;
}

// Complexity: O(log N)
template<typename T>
int binary_search(const std::vector<T>& data, const T& value)
{
    int min = 0;
    int max = data.size() - 1;

    while (min <= max) {
        int mid = (min + max) / 2;
        if (value == data.at(mid)) {
            return mid;
        } else if (value < data.at(mid)) {
            max = mid - 1;
        } else {
            min = mid + 1;
        }
    }
    return -1;
}

template<typename T>
void print_vector(const std::vector<T>& vec)
{
    for (T elem: vec) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<std::string> names {
        "Thorin", "Balin", "Fili",
        "Bombur", "Kili", "Gloin",
        "Oin", "Dwalin", "Ori",
        "Dori", "Bofur", "Bifur",
        "Nori"
    };

    print_vector(names);
    std::cout << sequential_search(names, std::string("Kili")) << "\n";
    std::cout << sequential_search(names, std::string("Gimli")) << "\n";

    std::sort(names.begin(), names.end());

    print_vector(names);
    std::cout << binary_search(names, std::string("Kili")) << "\n";
    std::cout << binary_search(names, std::string("Gimli")) << "\n";
}


