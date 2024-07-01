#include <iostream>
using namespace std;
class StackUsingArray {
private:
    int capacity;
    int* stack;
    int top;

public:
    StackUsingArray(int capacity) {
        this->capacity = capacity;
        stack = new int[capacity];
        top = -1;  // Initially, the stack is empty
    }

    ~StackUsingArray() {
        delete[] stack;
    }

    bool is_empty() {
        return top == -1;
    }

    bool is_full() {
        return top == capacity - 1;
    }

    void push(int item) {
        if (is_full()) {
            cout << "Stack is full. Cannot push item: " << item << endl;
            return;
        }
        top++;
        stack[top] = item;
    }

    int pop() {
        if (is_empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1;  // Return a default value indicating failure
        }
        int popped_item = stack[top];
        top--;
        return popped_item;
    }

    int peek() {
        if (is_empty()) {
            cout << "Stack is empty." << endl;
            return -1;  // Return a default value indicating failure
        }
        return stack[top];
    }

    void display() {
        if (is_empty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack content:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
};

int main() {
    StackUsingArray stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.display();  // Display: 3 2 1

    cout << "Top element: " << stack.peek() << endl;  // Output: Top element: 3

    int popped_item = stack.pop();
    cout << "Popped item: " << popped_item << endl;  // Output: Popped item: 3

    stack.display();  // Display: 2 1

    return 0;
}
