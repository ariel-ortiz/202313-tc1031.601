#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void print_vector(const std::vector<T> data)
{
    for (T elem: data) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
}

bool comparara_por_tamano(const std::string& a, const std::string& b)
{
    if (a.size() == b.size()) {
        return a < b;
    }
    return a.size() < b.size();
}

bool compara_invertido(int a, int b) {
    return a > b;
}

int main()
{
    std::vector<std::string> vs {
        "enero",
        "febrero",
        "marzo",
        "abril",
        "mayo",
        "junio",
        "julio",
        "agosto",
        "septiembre",
        "octubre",
        "noviembre",
        "diciembre"
    };
    print_vector(vs);
    std::sort(vs.begin(), vs.end(), comparara_por_tamano);
    print_vector(vs);

    std::vector<int> vi {15, 42, 8, 4, 16, 23};
    print_vector(vi);
    std::sort(vi.begin(), vi.end(), compara_invertido);
    print_vector(vi);
    return 0;
}
