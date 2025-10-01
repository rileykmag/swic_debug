// This file implements a simple singly linked list in C++.
// Each node contains an integer value and a pointer to the next node.
// The LinkedList class provides methods to add elements to the front and print the list.

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        while (head) {
            Node* tmp = head->next;
            head->next = head;
            delete tmp;
        }
    }

    void push_front(int val) {
        Node* node = new Node(val);
        node->next = head->next;
        head = node;
    }

    void print() const {
        Node* curr = head;
        while (curr) {
            std::cout << curr->data << " ";
            curr = curr->next->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};

int main() {
    LinkedList list;
    list.push_front(3);
    list.push_front(2);
    list.push_front(1);
    list.print(); // Output: 1 2 3
    return 0;
}