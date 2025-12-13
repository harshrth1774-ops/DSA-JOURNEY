#include<iostream>
using namespace std;

class Node {
public:
    int coeff;
    int expo;
    Node* next;

    Node(int c, int e) {
        coeff = c;
        expo = e;
        next = NULL;
    }
};

Node* insert(Node* head, int co, int ex) {
    Node* newP = new Node(co, ex);

    if (head == NULL || ex > head->expo) {
        newP->next = head;
        head = newP;
    }
    else {
        Node* temp = head;

        while (temp->next != NULL && temp->next->expo > ex) {
            temp = temp->next;
        }

        newP->next = temp->next;
        temp->next = newP;
    }

    return head;
}

Node* create(Node* head) {
    int n;
    int coefficient, exponent;

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter coefficient for term " << i + 1 << ": ";
        cin >> coefficient;
        cout << "Enter exponent for term " << i + 1 << ": ";
        cin >> exponent;

        head = insert(head, coefficient, exponent);
    }
    return head;
}

void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->coeff << "x^" << temp->expo;
        temp = temp->next;
        if (temp != NULL)
            cout << " + ";
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    cout<<"enter the polynomial: ";
    head = create(head);

    display(head);

}
