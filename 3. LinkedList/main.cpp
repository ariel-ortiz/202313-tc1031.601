#include <iostream>
#include "linkedlist.h"

int main()
{
    LinkedList<int> a;
    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a = " << a.to_string() << "\n";
    a.insert_front(4);
    a.insert_front(8);
    a.insert_front(15);
    std::cout << "a = " << a.to_string() << "\n";
    std::cout << "a.size() = " << a.size() << "\n";
    a.insert_back(16);
    a.insert_back(23);
    a.insert_back(42);
    std::cout << "a = " << a.to_string() << "\n";
    std::cout << "a.size() = " << a.size() << "\n";

    LinkedList<std::string> b {"uno", "dos", "tres", "cuatro"};
    std::cout << "b = " << b.to_string() << "\n";
    std::cout << "b.size() = " << b.size() << "\n";

    std::cout << "b.remove_front() = " << b.remove_front() << "\n";
    std::cout << "b.remove_front() = " << b.remove_front() << "\n";
    std::cout << "b = " << b.to_string() << "\n";
    std::cout << "b.size() = " << b.size() << "\n";

    return 0;
}
