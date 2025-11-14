#include <iostream>

int steps = 0;

void hanoi(int n, char origin, char destiny, char aux)
{
    if (n == 1) {
        steps++;
        std::cout << steps << ".- Move disc 1 from " << origin << " to " << destiny << "\n";
        return;
    }
    hanoi(n - 1, origin, aux, destiny);
    steps++;
    std::cout << steps << ".- Move disc " << n << " from " << origin << " to " << destiny << "\n";
    hanoi(n - 1, aux, destiny, origin);
}

int main()
{
    hanoi(4, 'A', 'C', 'B');
    return 0;
}
