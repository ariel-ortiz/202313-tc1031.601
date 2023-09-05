#include <iostream>
#include "linkedlist.h"

int main()
{
    LinkedList<int> a;
    std::cout << "a = " << a.to_string() << "\n";
    a.insert_front(4);
    a.insert_front(8);
    a.insert_front(15);
    std::cout << "a = " << a.to_string() << "\n";
    return 0;
}
