#include <iostream>
#include "dinoset.h"

int main()
{
    DinoSet a;
    std::cout << a.to_string() << "\n";

    DinoSet b;
    b.add(DinoId::velociraptor);
    b.add(DinoId::tyrannosaurus);
    std::cout << b.to_string() << "\n";

    DinoSet c;
    c.add(DinoId::tyrannosaurus);
    c.add(DinoId::procompsognathus);
    c.add(DinoId::pteranodon);
    std::cout << c.to_string() << "\n";

    return 0;
}
