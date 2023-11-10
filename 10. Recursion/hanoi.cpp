#include <iostream>

void hanoi_towers(int n, char orig, char aux, char dest)
{
    static int step = 1;
    if (n == 1) {
        std::cout << "Step " << step << ". Move disc 1 from " << orig << " to " << dest << "\n";
        step++;
    } else {
        hanoi_towers(n - 1, orig, dest, aux);
        std::cout << "Step " << step << ". Move disc " << n << " from " << orig << " to " << dest << "\n";
        step++;
        hanoi_towers(n - 1, aux, orig, dest);
    }
}


int main()
{
    hanoi_towers(20, 'A', 'B', 'C');
    return 0;
}
