#include <iostream>
#include "dinoset.h"

int main()
{
    DinoSet a;
    std::cout << "a = " << a.to_string() << "\n";

    DinoSet b;
    b.add(DinoId::velociraptor);
    b.add(DinoId::tyrannosaurus);
    std::cout << "b = " << b.to_string() << "\n";

    DinoSet c;
    c.add(DinoId::tyrannosaurus);
    c.add(DinoId::procompsognathus);
    c.add(DinoId::pteranodon);
    std::cout << "c = " << c.to_string() << "\n";

    DinoSet d = b + c;
    std::cout << "d = " << d.to_string() << "\n";

    return 0;
}
