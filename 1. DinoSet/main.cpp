#include <iostream>
#include <iomanip>
#include "dinoset.h"

int main()
{
    DinoSet a;
    a.add(DinoId::stegosaurus);
    a.add(DinoId::tyrannosaurus);
    a.add(DinoId::velociraptor);

    DinoSet d;
    d.add(DinoId::tyrannosaurus);
    d.add(DinoId::velociraptor);
    d.add(DinoId::pteranodon);

    DinoSet c = a + d;

    // std::cout << std::boolalpha;
    // std::cout << d.contains(DinoId::tyrannosaurus) << "\n";
    // std::cout << d.contains(DinoId::stegosaurus) << "\n";
    // std::cout << d.to_string() << "\n";

    std::cout << c.to_string() << "\n";

    return 0;
}
