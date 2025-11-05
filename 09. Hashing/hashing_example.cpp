#include <iostream>
#include <functional>

int main()
{
    std::hash<int> h1;
    std::hash<double> h2;
    std::hash<std::string> h3;

    std::cout << h1(1234) << "\n";
    std::cout << h2(3.1416) << "\n";
    std::cout << h3("kiss") << "\n";
    std::cout << h3("kiss") << "\n";

    return 0;
}
