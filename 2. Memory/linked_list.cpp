#include <iostream>

struct Node {
    int info;
    Node* next;
};

int main()
{
    Node* p = new Node;
    p->info = 4;
    p->next = nullptr;

    Node* q = new Node;
    q->info = 8;
    q->next = p;

    p = new Node;
    p->info = 15;
    p->next = q;

    q = p;
    p = new Node;
    p->info = 16;
    p->next = q;

    q = p;

    while (q) {
        std::cout << q->info << " ";
        q = q->next;
    }

    std::cout << "\n";

    return 0;
}
