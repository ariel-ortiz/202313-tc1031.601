#include <iostream>

struct Node {
    int info;
    Node* next;
};

// Complexity: O(1)
void insert(Node*& list, int value)
{
    Node* p = new Node;
    p->info = value;
    p->next = list;
    list = p;
}

// Complexity: O(N)
void free(Node*& list)
{
    Node* p = list;

    while (p) {
        Node* next = p->next;
        delete p;
        p = next;
    }

    list = nullptr;
}

// Complexity: O(N)
void display(Node* list)
{
    Node* p = list;

    while (p) {
        std::cout << p->info << " ";
        p = p->next;
    }

    std::cout << "\n";
}

// Complexity: O(N)
int length(Node* list)
{
    Node* p = list;
    int count = 0;

    while (p) {
        ++count;
        p = p->next;
    }

    return count;
}

// Complexity: O(1)
int drop(Node*& list)
{
    if (list) {
        Node* p = list;
        int result = list->info;
        list = p->next;
        delete p;
        return result;
    } else {
        return 0;
    }
}

// Complexity: O(N)
bool remove(Node*& list, int value)
{
    Node* p = list;
    Node* prev = nullptr;

    while (p) {
        if (p->info == value) {
            if (prev) {
                prev->next = p->next;
            } else {
                list = p->next;
            }
            delete p;
            return true;
        }
        prev = p;
        p = p->next;
    }

    return false;
}

int main()
{
    Node* list = nullptr;
    std::cout << "length(list) = " << length(list) << "\n";
    insert(list, 4);
    display(list);
    insert(list, 8);
    display(list);
    insert(list, 15);
    display(list);
    std::cout << "drop(list) = " << drop(list) << "\n";
    std::cout << "drop(list) = " << drop(list) << "\n";
    insert(list, 16);
    display(list);
    insert(list, 23);
    display(list);
    insert(list, 42);
    display(list);
    std::cout << "length(list) = " << length(list) << "\n";

    std::cout << "remove(list, 16) = " << remove(list, 16) << "\n";
    display(list);

    std::cout << "remove(list, 108) = " << remove(list, 108) << "\n";
    display(list);

    std::cout << "remove(list, 42) = " << remove(list, 42) << "\n";
    display(list);

    free(list);
    display(list);

    return 0;
}
