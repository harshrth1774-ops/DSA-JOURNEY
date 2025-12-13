#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    // linking existing nodes
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    int pos = 2; // insert after 2nd node (1-based)
    int value = 5;

    if(pos == 0){
        Node* temp = new Node(value);
        temp->next = head;
        head->prev = temp;
        head = temp;
    } else {
        Node* current = head;
        while(pos > 1 && current->next != NULL){
            current = current->next;
            pos--;
        }
        Node* temp = new Node(value);
        temp->next = current->next;
        temp->prev = current;
        if(current->next != NULL)
            current->next->prev = temp;
        current->next = temp;
    }

    // print list
    Node* ptr = head;
    while(ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
