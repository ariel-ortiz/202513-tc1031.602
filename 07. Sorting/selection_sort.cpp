#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <cstdlib>
#include <chrono>

template<typename T>
void print_vector(const std::vector<T>& vec)
{
    for (T elem: vec) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
}

void fill_random(std::vector<int>& values, int max_value)
{
    std::srand(0);
    for (int i = 0; i < values.size(); ++i) {
        values.at(i) = std::rand() % max_value;
    }
}

void fill_incremental(std::vector<int>& values, int max_value)
{
    double section = max_value / static_cast<double>(values.size());
    double current = 0.0;
    for (int i = 0; i < values.size(); ++i) {
        values.at(i) = static_cast<int>(current);
        current += section;
    }
}

void fill_decremental(std::vector<int>& values, int max_value)
{
    double section = max_value / static_cast<double>(values.size());
    double current = 0.0;
    for (int i = values.size() - 1; i >= 0; --i) {
        values.at(i) = static_cast<int>(current);
        current += section;
    }
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
    std::vector<int> a(10'000);
    fill_decremental(a, 1'000);

    // print_vector(a);
    std::cout << "Is sorted: " << std::is_sorted(a.begin(), a.end()) << "\n";

    auto start = std::chrono::high_resolution_clock::now();
    selection_sort(a);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::microseconds>(
            stop - start);
    double total_time = duration.count() / 1'000'000.0;
    std::cout << "Tiempo total: " << total_time << " segundos\n";

    // print_vector(a);
    std::cout << "Is sorted: " << std::is_sorted(a.begin(), a.end()) << "\n";

    return 0;
}
