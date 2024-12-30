/*Overload the new and delete operators to provide
  a custom dynamic allocation of memory.
*/
#include <iostream>
#include <cstdlib> // For malloc and free
using namespace std;
class MyClass {
private:
int data;
public:
// Constructor
MyClass(int value = 0) : data(value) {
cout << "Constructor called for object with data = " << data
<< endl;
}
// Destructor
~MyClass() {
cout << "Destructor called for object with data = " << data <<
endl;
}
// Overloading new operator
void *operator new(size_t size) {
cout << "Custom new operator called. Allocating " << size << "bytes of memory." << endl;
void *ptr = malloc(size); // Allocate memory
if (!ptr) {
throw bad_alloc(); // Handle allocation failure
}
return ptr;
}
// Overloading delete operator
void operator delete(void *ptr) {
cout << "Custom delete operator called. Deallocating memory."
<< endl;
free(ptr); // Free memory
}
// Display data
void display() const {
cout << "Data = " << data << endl;
}
};
int main() {
// Using overloaded new operator
MyClass *obj = new MyClass(42); // Allocates memory and calls constructor
obj->display();
// Using overloaded delete operator
delete obj; // Calls destructor and deallocates memory
return 0;
}

/*OUTPUT
Custom new operator called. Allocating 4bytes of memory.
Constructor called for object with data = 42
Data = 42
Destructor called for object with data = 42
Custom delete operator called. Deallocating memory.
*/