/* Develop a template of the linked-list class and its
methods */
#include <iostream>
using namespace std;
// Node structure
template <typename T>
struct Node {
T data; // Data of generic type T
Node* next; // Pointer to the next node
Node(T value) : data(value), next(nullptr) {} // Constructor to initialize a node
};
// Linked List class
template <typename T>
class LinkedList {
private:
Node<T>* head; // Pointer to the first node of the list
public:
// Constructor
LinkedList() : head(nullptr) {}
// Add a node at the end of the list
void append(T value) {
Node<T>* newNode = new Node<T>(value);
if (!head) { // If the list is empty
head = newNode;
} else {
Node<T>* current = head;
while (current->next) { // Traverse to the end
current = current->next;
}
current->next = newNode;
}
}
// Remove the first occurrence of a value
void remove(T value) {
if (!head) return; // If the list is empty, do nothing
if (head->data == value) { // If the value is in the head node
Node<T>* temp = head;
head = head->next;
delete temp;
return;
}
Node<T>* current = head;
while (current->next && current->next->data != value) {
current = current->next;
}
if (current->next) { // Value found in the list
Node<T>* temp = current->next;
current->next = current->next->next;
delete temp;
}
}
// Display the list
void display() const {
Node<T>* current = head;
while (current) {
cout << current->data << " -> ";
current = current->next;
}
cout << "NULL" << endl;
}
};
int main() {
// Create a linked list of integers
LinkedList<int> intList;
intList.append(10);
intList.append(20);
intList.append(30);
cout << "Integer Linked List:" << endl;
intList.display();
// Remove a value and display the list again
cout << "Removing 20 from the list..." << endl;
intList.remove(20);
intList.display();
// Create a linked list of strings
LinkedList<string> stringList;
stringList.append("Hello");
stringList.append("World");
cout << "String Linked List:" << endl;
stringList.display();
// Remove a value and display the list again
cout << "Removing 'Hello' from the list..." << endl;
stringList.remove("Hello");
stringList.display();
return 0;
}

/* OUTPUT
Integer Linked List:
10 -> 20 -> 30 -> NULL
Removing 20 from the list...
10 -> 30 -> NULL
String Linked List:
Hello -> World -> NULL
Removing 'Hello' from the list...
World -> NULL
*/