#include <iostream>
#include <iomanip>
#include "dinoset.h"

int main()
{
    DinoSet d;
    d.add(DinoId::tyrannosaurus);
    d.add(DinoId::velociraptor);
    d.add(DinoId::pteranodon);
    std::cout << std::boolalpha;
    std::cout << d.contains(DinoId::tyrannosaurus) << "\n";
    std::cout << d.contains(DinoId::stegosaurus) << "\n";
    std::cout << d.to_string() << "\n";
    return 0;
}
