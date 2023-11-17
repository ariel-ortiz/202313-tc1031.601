#include <iostream>
#include <vector>
#include "treeset.h"

void print_value(int value)
{
    std::cout << value << "\n";
}

static int resultado = 0;

void suma(int value)
{
    resultado += value;
}

int main()
{
    TreeSet<int> a {10, 5, 15, 2, 7, 11, 20};
    a.inorder(print_value);
    std::cout << "\n";
    a.inorder(suma);
    std::cout << resultado << "\n";
    return 0;
}
