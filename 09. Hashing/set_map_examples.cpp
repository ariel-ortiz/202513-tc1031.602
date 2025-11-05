#include <iostream>
#include <unordered_set>
#include <unordered_map>

int main()
{
    std::unordered_set<std::string> a;
    a.insert("uno");
    a.insert("dos");
    a.insert("tres");
    a.insert("uno");
    a.insert("dos");
    std::cout << "size: " << a.size() << "\n";
    std::cout << "count: " << a.count("tres") << "\n";
    std::cout << "count: " << a.count("uno") << "\n";
    std::cout << "count: " << a.count("cuatro") << "\n";

    std::unordered_map<std::string, double> b;
    b["pi"] = 3.1416;
    b["e"] = 2.7182;
    b["sqrt2"] = 1.4142;
    b["g"] = 9.81;
    std::cout << b["pi"] << "\n";
    b["pi"] = 3.0;
    std::cout << b["pi"] << "\n";
    std::cout << "size: " << b.size() << "\n";
    std::cout << "count: " << b.count("pi") << "\n";
    std::cout << "count: " << b.count("g") << "\n";
    std::cout << "count: " << b.count("cuatro") << "\n";

    for (std::string s : a) {
        std::cout << s << " ";
    }
    std::cout << "\n";

    for (auto p : b) {
        std::cout << p.first << ": " << p.second << "\n";
    }

    return 0;
}
