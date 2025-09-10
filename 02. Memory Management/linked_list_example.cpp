#include <iostream>

struct Node {
    int value;
    Node* next;
};

// Complexity: O(1)
void add_front(Node*& list, int x)
{
    list = new Node {x, list};
}

// Complexity: O(N)
void add_back(Node*& list, int x)
{
    if (!list) {
        add_front(list, x);
        return;
    }
    Node* p = list;
    while (p->next) {
        p = p->next;
    }
    p->next = new Node {x, nullptr};
}

// Complexity: O(N)
void display(Node* list)
{
    std::cout << "[";
    Node* p = list;
    while (p) {
        std::cout << p->value << " ";
        p = p->next;
    }
    std::cout << "]\n";
}

// Complexity: O(N)
int size(Node* list)
{
    int count = 0;
    Node* p = list;
    while (p) {
        count++;
        p = p->next;
    }
    return count;
}

void dispose(Node*& list)
{
    Node* p = list;
    while (list) {
        list = list->next;
        delete p;
        p = list;
    }
}

int main()
{
    Node* start = nullptr;
    display(start);
    std::cout << size(start) << "\n";
    add_front(start, 5);
    add_front(start, 3);
    display(start);
    std::cout << size(start) << "\n";
    add_front(start, 1);
    add_front(start, 7);
    display(start);
    std::cout << size(start) << "\n";
    add_back(start, 0);
    display(start);
    std::cout << size(start) << "\n";

    dispose(start);
    std::cout << start << "\n";

    return 0;
}
