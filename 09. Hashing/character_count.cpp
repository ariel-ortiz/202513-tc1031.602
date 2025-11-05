#include <iostream>
#include <unordered_map>

int main()
{
    std::string frase = "tres tristes tigres tragaban trigo en un trigal";
    std::unordered_map<char, int> cuantos;

    for (char c : frase) {
        if (cuantos.count(c) == 0) {
            cuantos[c] = 1;
        } else {
            cuantos[c]++;
        }
    }

    for (auto p : cuantos) {
        std::cout << p.first << ": " << p.second << "\n";
    }

    return 0;
}
