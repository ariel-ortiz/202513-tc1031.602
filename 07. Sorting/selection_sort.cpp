#include <iostream>
#include <utility>
#include <vector>

template<typename T>
void print_vector(const std::vector<T>& vec)
{
    for (T elem: vec) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
}

// Complexity: O(N^2)
void selection_sort(std::vector<int>& vec)
{
    for (int i = 0; i < vec.size() - 1; i++) {

        // Find smallest value starting at i
        int min_index = i;
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec.at(j) < vec.at(min_index)) {
                min_index = j;
            }
        }
        std::swap(vec.at(i), vec.at(min_index));
    }
}

int main()
{
    std::vector<int> a {7, 2, 5, 3, 8, 2, 4};
    print_vector(a);
    selection_sort(a);
    print_vector(a);

    return 0;
}
