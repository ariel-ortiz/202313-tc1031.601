#include <iostream>
#include <vector>
#include "treeset.h"

void print_value(int value)
{
    std::cout << value << " ";
}

int resultado = 0;

void suma(int value)
{
    resultado += value;
}

std::vector<int> global_vector;

void add_to_vector(int value)
{
    global_vector.push_back(value);
}

int main()
{
    TreeSet<int> a {10, 5, 15, 2, 7, 11, 20};
    // TreeSet<int> a {10, 15, 20, 25, 17, 18};
    // a.inorder(print_value);
    // std::cout << "\n";
    // a.inorder(suma);
    // std::cout << resultado << "\n";
    a.levelorder(add_to_vector);
    for (int x : global_vector) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    std::cout << "is_perfect = " << a.is_perfect() << "\n";
    return 0;
}
