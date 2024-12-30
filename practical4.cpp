/* Develop C++ class hierarchy for various types of
inheritances.*/
#include <iostream>
using namespace std;
class Base { // Base class
public:
void displayBase() {
cout << "This is the Base class." << endl;
}
};
// Single Inheritance
class DerivedSingle : public Base {
public:
void displaySingle() {
cout << "This is the Derived class (Single Inheritance)." <<
endl;
}
};
// Multilevel Inheritance
class Intermediate : public Base { // Intermediate class
public:
void displayIntermediate() {
cout <<"This is the Intermediate class (Multilevel Inheritance)." << endl;
}
};
class DerivedMultilevel : public Intermediate { // Derived from Intermediate
public:
void displayMultilevel() {
cout << "This is the Derived class (Multilevel Inheritance)."
<< endl;
}
};

// Hierarchical Inheritance
class Derived1 : public Base {
public:
void displayDerived1() {
cout << "This is the Derived1 class (Hierarchical Inheritance)." << endl;
}
};
class Derived2 : public Base {
public:
void displayDerived2() {
cout << "This is the Derived2 class (Hierarchical Inheritance)." << endl;
}
};
// Multiple Inheritance
class Parent1 {
public:
void displayParent1() {
cout << "This is Parent1 class (Multiple Inheritance)." <<
endl;
}
};
class Parent2 {
public:
void displayParent2() {
cout << "This is Parent2 class (Multiple Inheritance)." <<
endl;
}
};
class ChildMultiple : public Parent1, public Parent2 {
public:
void displayChildMultiple() {
cout << "This is the Child class (Multiple Inheritance)." <<
endl;
}
};
// Main function to demonstrate various inheritances
int main() {
cout << "---- Single Inheritance ----" << endl;
DerivedSingle single;
single.displayBase();
single.displaySingle();
cout << "\n---- Multilevel Inheritance ----" << endl;
DerivedMultilevel multilevel;
multilevel.displayBase();
multilevel.displayIntermediate();
multilevel.displayMultilevel();
cout << "\n---- Hierarchical Inheritance ----" << endl;
Derived1 derived1;
derived1.displayBase();
derived1.displayDerived1();
Derived2 derived2;
derived2.displayBase();
derived2.displayDerived2();
cout << "\n---- Multiple Inheritance ----" << endl;
ChildMultiple multiple;
multiple.displayParent1();
multiple.displayParent2();
multiple.displayChildMultiple();
return 0;
}

/*OUTPUT
---- Single Inheritance ----
This is the Base class.
This is the Derived class (Single Inheritance).

---- Multilevel Inheritance ----
This is the Base class.
This is the Intermediate class (Multilevel Inheritance).
This is the Derived class (Multilevel Inheritance).

---- Hierarchical Inheritance ----
This is the Base class.
This is the Derived1 class (Hierarchical Inheritance).
This is the Base class.
This is the Derived2 class (Hierarchical Inheritance).

---- Multiple Inheritance ----
This is Parent1 class (Multiple Inheritance).
This is Parent2 class (Multiple Inheritance).
This is the Child class (Multiple Inheritance).
*/