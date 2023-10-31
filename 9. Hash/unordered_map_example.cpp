#include <iostream>
#include <unordered_map>
#include <vector>

int main()
{
    std::unordered_map<std::string, int> nums;
    nums["one"] = 1;
    nums["two"] = 2;
    nums["three"] = 3;
    nums["four"] = 4;
    nums["five"] = 5;
    nums["ten"] = 10;
    nums["twenty"] = 20;
    nums["six"] = 6;

    for (auto pair: nums) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    std::vector<int> v {
        1, 5, 2, 3, 1, 6, 5, 2, 1, 4, 2, 1, 7, 1, 2, 5
    };

    std::unordered_map<int, int> conteo;

    for (int x: v) {
        if (conteo.count(x) == 0) {
            conteo[x] = 1;
        } else {
            conteo[x]++;
        }
    }

    for (auto pairs: conteo) {
        std::cout << "El número " << pairs.first << " aparece "
            << pairs.second << " veces\n";
    }

    return 0;
}