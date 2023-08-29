#include <iostream>

int main()
{
    int* p = new int {5};
    std::cout << "*p = " << 0[p] << "\n";
    delete p;

    std::string* s = new std::string[10] {"uno", "dos", "tres", "cuatro"};
    std::cout << "s[0] = " << s[0] << "\n";
    std::cout << "s[4] = " << s[4] << "\n";
    delete [] s;

    return 0;
}
