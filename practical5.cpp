/*Design a simple test application to demonstrate
  dynamic polymorphism and RTTI.*/
#include <iostream>
#include <typeinfo> // For RTTI (typeid)
using namespace std;
// Base class
class Shape {
public:
virtual void draw() const { // Virtual function for dynamic polymorphism
cout << "Drawing a generic shape." << endl;
}
virtual ~Shape() {} // Virtual destructor for proper cleanup in derived classes
};
// Derived class: Circle
class Circle : public Shape {
public:
void draw() const override { // Override base class method
cout << "Drawing a Circle." << endl;
}
};
// Derived class: Rectangle
class Rectangle : public Shape {
public:
void draw() const override { // Override base class method
cout << "Drawing a Rectangle." << endl;
}
};
// Derived class: Triangle
class Triangle : public Shape {
public:
void draw() const override { // Override base class method
cout << "Drawing a Triangle." << endl;
}
};
// Function to demonstrate dynamic polymorphism and RTTI
void identifyAndDraw(Shape* shape) {
// Using RTTI to identify the type of object
cout << "Type of shape: " << typeid(*shape).name() << endl;
// Call the draw method (dynamic polymorphism)
shape->draw();
}
int main() {
cout << "---- Demonstrating Dynamic Polymorphism and RTTI ----" <<
endl;
// Dynamically create objects
Shape* shape1 = new Circle();
identifyAndDraw(shape1);
delete shape1; // Clean up memory
cout << endl;
Shape* shape2 = new Rectangle();
identifyAndDraw(shape2);
delete shape2; // Clean up memory
cout << endl;
Shape* shape3 = new Triangle();
identifyAndDraw(shape3);
delete shape3; // Clean up memory
cout << endl;
return 0;
}

/*OUTPUT 
---- Demonstrating Dynamic Polymorphism and RTTI ----
Type of shape: 6Circle
Drawing a Circle.

Type of shape: 9Rectangle
Drawing a Rectangle.

Type of shape: 8Triangle
Drawing a Triangle.
*/