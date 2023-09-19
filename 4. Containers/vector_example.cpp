#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a;
    a.reserve(10);
    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";
    a.push_back(4);
    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";
    a.push_back(8);
    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";
    a.push_back(15);
    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";
    a.push_back(16);
    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";
    a.push_back(23);
    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";
    a.resize(3);
    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";
    std::cout << "a.at(0) = " << a.at(0) << "\n";
    // std::cout << "a.at(3) = " << a.at(3) << "\n";

    for (std::vector<int>::iterator it = a.begin() ; it != a.end(); ++it) {
        std::cout << "*it = " << *it << "\n";
    }

    for (int elem: a) {
        std::cout << "elem = " << elem << "\n";
    }

    return 0;
}
