#include <iostream>
#include "stack.h"

bool is_balanced(const std::string& input)
{
    Stack<char> s(input.size());

    for (char c: input) {
        switch (c) {
            case '(':
            case '[':
            case '{':
                s.push(c);
                break;
            case ')':
                if (s.is_empty() or s.pop() != '(') {
                    return false;
                }
                break;
            case ']':
                if (s.is_empty() or s.pop() != '[') {
                    return false;
                }
                break;
            case '}':
                if (s.is_empty() or s.pop() != '{') {
                    return false;
                }
                break;
        }
    }
    return s.is_empty();
}

int main()
{
    std::string s1 = "( ([]) {()} )";
    std::string s2 = "((())";
    std::string s3 = "(()()(])";
    std::string s4 = "()()())(";
    std::cout << s1 << " : balanceado? " << is_balanced(s1) << "\n";
    std::cout << s2 << " : balanceado? " << is_balanced(s2) << "\n";
    std::cout << s3 << " : balanceado? " << is_balanced(s3) << "\n";
    std::cout << s4 << " : balanceado? " << is_balanced(s4) << "\n";
}
