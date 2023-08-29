#include <iostream>

int main()
{
    int x = 1000;
    // int* p = nullptr;
    // int* p = reinterpret_cast<int*>(x);
    int* p = &x;
    *p = 5;

    return 0;
}
