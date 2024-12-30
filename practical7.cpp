/* Design stack class with necessary exception
handling */
#include <iostream>
#include <stdexcept> // For exception handling
using namespace std;
class Stack {
private:
int* data; // Array to hold stack elements
int top; // Index of the top element
int size; // Size of the stack
public:
// Constructor
Stack(int s) : size(s), top(-1) {
data = new int[size];
}
// Destructor
~Stack() {
delete[] data;
}
// Push element onto the stack
void push(int value) {
if (top == size - 1) {
throw overflow_error("Stack Overflow: Cannot push, stack is full.");
}
data[++top] = value;
}
// Pop element from the stack
int pop() {
if (top == -1) {
throw underflow_error("Stack Underflow: Cannot pop, stack is empty.");
}
return data[top--];
}
// Peek top element of the stack
int peek() {
if (top == -1) {
throw underflow_error("Stack Underflow: Cannot peek, stack is empty.");
}
return data[top];
}
};
// Main function to test Stack
int main() {
try {
Stack stack(5); // Stack of size 5
stack.push(10);
stack.push(20);
stack.push(30);
cout << "Top element: " << stack.peek() << endl;
cout << "Popped element: " << stack.pop() << endl;
cout << "Popped element: " << stack.pop() << endl;
cout << "Popped element: " << stack.pop() << endl;
// Uncommenting below line will throw an exception (stack underflow)
// cout << "Popped element: " << stack.pop() << endl; //Should throw underflow exception
} catch (const exception& e) {
cout << "Error: " << e.what() << endl;
}
return 0;
}

/* OUTPUT 
Top element: 30
Popped element: 30
Popped element: 20
Popped element: 10
*/