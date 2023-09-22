#include <iostream>
#include "stack.h"

// Complexity: O(N)
bool is_palindrome(const std::string& input)
{
    Stack<char> s(input.size());

    for (char c: input) {
        s.push(c);
    }

    for (char c: input) {
        if (c != s.pop()) {
            return false;
        }
    }

    return true;
}

int main()
{
    Stack<int> s1(3);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    std::cout << "s1.size() = " << s1.size() << "\n";
    // s1.push(4); // overflow
    std::cout << s1.pop() << "\n";
    std::cout << s1.pop() << "\n";
    std::cout << s1.pop() << "\n";
    // std::cout << s1.pop() << "\n"; // underflow
    std::cout << "s1.size() = " << s1.size() << "\n";
    std::cout << is_palindrome("anitalavalatina") << "\n";
    std::cout << is_palindrome("osaso") << "\n";
    std::cout << is_palindrome("osasa") << "\n";

    return 0;
}
