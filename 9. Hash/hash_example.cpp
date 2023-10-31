#include <iostream>

struct Point {
    int x;
    int y;
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int my_hash()
    {
        return std::hash<double>{}(x) + std::hash<int>{}(y);
    }
};

int hash(Point p) {
    return p.my_hash();
}

int main()
{
    std::string s = "Hello";

    std::cout << s << " " << std::hash<std::string>{}(s) << "\n";

    s += "!";

    std::cout << s << " " << std::hash<std::string>{}(s) << "\n";

    int i = 10'000'000;

    std::cout << i << " " << std::hash<int>{}(i) << "\n";

    double d = 3.1416;
    std::cout << d << " " << std::hash<double>{}(d) << "\n";

    Point p {5, 4};
    std::cout << "(" << p.x << ", " << p.y << ") " << hash(p) << "\n";

    return 0;
}