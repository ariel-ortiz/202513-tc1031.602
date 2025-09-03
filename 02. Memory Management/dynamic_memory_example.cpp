#include <iostream>

int main()
{
    int *p1 = new int {0};
    int *p2 = new int {5};
    double *p3 = new double {3.14};
    int **p4 = new int* {p1};
    int *p5 = new int[5] {4, 8, 15};

    std::cout << "*p1 = " << *p1 << "\n";
    std::cout << "*p2 = " << *p2 << "\n";
    std::cout << "*p3 = " << *p3 << "\n";
    std::cout << "**p4 = " << **p4 << "\n";
    **p4 = 7;
    std::cout << "*p1 = " << *p1 << "\n";
    for (int n = 0; n < 5; n++) {
        std::cout << "*(p5 + " << n << ") = " << *(p5 + n) << "\n";
    }
    for (int n = 0; n < 5; n++) {
        std::cout << n << "[p5] = " << n[p5] << "\n";
    }

    delete p1;
    // delete p1;
    // std::cout << *p1 << "\n";
    delete p2;
    delete p3;
    delete p4;
    delete [] p5;

    int x = 5;
    std::cout << x << "\n";



    return 0;
}
