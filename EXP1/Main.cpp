#include <iostream>
using namespace std;

#define SIZE 5

int arr[SIZE];
int top = -1;

bool isEmpty() { return top == -1; }
bool isFull() { return top == SIZE-1; }

void push(int x) {
    if (!isFull()) arr[++top] = x;
    else cout << "Stack Overflow\n";
}

void pop() {
    if (!isEmpty()) top--;
    else cout << "Stack Underflow\n";
}

int peek() {
    if (!isEmpty()) return arr[top];
    else return -1;
}

int main() {
    push(10);
    push(20);
    push(30);
    cout << "Top: " << peek() << endl;
    pop();
    cout << "Top after pop: " << peek() << endl;
    return 0;
}
