#include <iostream>
#include <cstdint>

int main()
{
    int8_t min = 50;
    int8_t max = 100;
    int8_t mid = static_cast<int8_t>(max - min) / 2 + min;
    std::cout << "min = " << static_cast<int>(min) << "\n";
    std::cout << "max = " << static_cast<int>(max) << "\n";
    std::cout << "mid = " << static_cast<int>(mid) << "\n";

    return 0;
}
