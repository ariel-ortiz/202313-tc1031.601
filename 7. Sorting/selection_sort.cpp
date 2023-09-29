#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>

// Complexity: O(N)
void fill_random(std::vector<int>& data, int max_value)
{
    std::srand(0);
    for (int i = 0; i < data.size(); ++i) {
        data.at(i) = std::rand() % max_value;
    }
}

// Complexity: O(N^2)
void selection_sort(std::vector<int>& data)
{
    for (int i = 0; i < data.size() - 1; ++i){
        int min_index = i;
        for (int j = i + 1; j < data.size(); ++j) {
            if (data.at(j) < data.at(min_index)) {
                min_index = j;
            }
        }
        std::swap(data.at(i), data.at(min_index));
    }
}


int main()
{
    const int MAX = 1000;
    const int SIZE = 40'000;

    std::vector<int> v(SIZE);

    fill_random(v, MAX);

    std::cout << std::is_sorted(v.begin(), v.end()) << "\n";

    // for (int elem: v) {
    //     std::cout << elem << " ";
    // }
    // std::cout << "\n";

    auto start = std::chrono::high_resolution_clock::now();
    selection_sort(v);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::microseconds>(
            stop - start);
    double total_time = duration.count() / 1000000.0;

    std::cout << std::is_sorted(v.begin(), v.end()) << "\n";
    std::cout << "Total time = " << total_time << "\n";

    // for (int elem: v) {
    //     std::cout << elem << " ";
    // }
    // std::cout << "\n";

    return 0;
}
