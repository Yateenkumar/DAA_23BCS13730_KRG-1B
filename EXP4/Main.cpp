#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void insertBegin(int x) {
    Node* n = new Node();
    n->data = x;
    n->prev = NULL;
    n->next = head;
    if (head != NULL) head->prev = n;
    head = n;
}

void insertEnd(int x) {
    Node* n = new Node();
    n->data = x;
    n->next = NULL;
    if (head == NULL) {
        n->prev = NULL;
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = n;
    n->prev = temp;
}

void deleteBegin() {
    if (head == NULL) return;
    Node* temp = head;
    head = head->next;
    if (head != NULL) head->prev = NULL;
    delete temp;
}

void deleteEnd() {
    if (head == NULL) return;
    Node* temp = head;
    if (temp->next == NULL) {
        head = NULL;
        delete temp;
        return;
    }
    while (temp->next) temp = temp->next;
    temp->prev->next = NULL;
    delete temp;
}

void display() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertBegin(10);
    insertEnd(20);
    insertBegin(5);
    display();
    deleteBegin();
    display();
    deleteEnd();
    display();
}
