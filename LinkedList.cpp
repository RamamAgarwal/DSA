#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void traverseLinkedList(Node* head) {
    Node *curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main() {

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    traverseLinkedList(head);

    return 0;
}