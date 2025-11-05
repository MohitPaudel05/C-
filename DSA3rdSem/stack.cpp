#include <iostream>
using namespace std;

class Stack {
    int top = 0;
    int numbers[6];

public:
    int isFull() {
        return top == sizeof(numbers) / sizeof(numbers[0]);
    }

    int isEmpty() {
        return top == 0;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack is full" << endl;
            return;
        }
        numbers[top] = data;
        top = top + 1;
    }

    int  pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        top = top - 1;
        int value = numbers[top];
        
        return value;
    }

    void print() {
        cout << "Stack elements:" << endl;
        for (int i = top - 1; i >= 0; i--) {
            cout << numbers[i] << endl;
        }
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(11);
    stack.push(12);
    stack.push(13);
    stack.push(14);
    stack.push(15);
    stack.push(16); // Stack is full"

    stack.print();

    cout << "Popped: " << stack.pop() << endl; // removes 15
    cout << "Popped: " << stack.pop() << endl; // removes 14

    cout<<"After popping two elements:" << endl;
    stack.print();
}
