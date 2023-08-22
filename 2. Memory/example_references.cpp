#include <iostream>

void swap3(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 7;
    int& r = x;
    std::cout << "x = " << x << ", r = " << r << "\n";
    ++r;
    std::cout << "x = " << x << ", r = " << r << "\n";

    int a = 5;
    int b = 8;
    std::cout << "a = " << a << ", b = " << b << "\n";
    swap3(a, b);
    std::cout << "a = " << a << ", b = " << b << "\n";

    return 0;
}