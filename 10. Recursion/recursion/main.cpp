#include <iostream>
#include "intlist.h"
#include "recursion.h"

int main()
{
    IntList a {42, 1, 2, 3};

    std::cout << "a = " << a << "\n";
    std::cout << "first(a) = " << first(a) << "\n";
    std::cout << "rest(a) = " << rest(a) << "\n";
    std::cout << "cons(0, a) = " << cons(0, a) << "\n";
    std::cout << "cons(1, IntList {2, 3}) = " << cons(1, IntList {2, 3}) << "\n";
    std::cout << "is_empty(IntList {}) = " << is_empty(IntList {}) << "\n";
    std::cout << "is_empty(IntList {4, 5}) = " << is_empty(IntList {4, 5}) << "\n";
    std::cout << "first(rest(a)) = " << first(rest(a)) << "\n";
    std::cout << "first(rest(rest(a))) = " << first(rest(rest(a))) << "\n";
    std::cout << "size(IntList {}) = " << size(IntList {}) << "\n";
    std::cout << "size(a) = " << size(a) << "\n";
    std::cout << "cons_end(108, a) = " << cons_end(108, a) << "\n";
    std::cout << "sum(a) = " << sum(a) << "\n";
    std::cout << "duplicate(a) = " << duplicate(a) << "\n";
    std::cout << "last(a) = " << last(a) << "\n";
    std::cout << "but_last(a) = " << but_last(a) << "\n";
    std::cout << "maximum(a) = " << maximum(a) << "\n";
    std::cout << "append(a, a) = " << append(a, a) << "\n";
    return 0;
}
