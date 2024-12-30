/* Implement complex number class with necessary
operator overloading and type conversions such as
integer to complex, double to complex, complex to
double etc. */
#include <iostream>
#include <cmath>
using namespace std;
class Complex {
private:
double real; // Real part of the complex number
double imag; // Imaginary part of the complex number
public:
// Default constructor
Complex(double r = 0, double i = 0) : real(r), imag(i) {}
// Display the complex number
void display() const {
cout << real;
if (imag >= 0)
cout << " + " << imag << "i" << endl;
else
cout << " - " << -imag << "i" << endl;
}
// Overload '+' operator for Complex + Complex
Complex operator+(const Complex &other) const {
return Complex(real + other.real, imag + other.imag);
}
// Overload '-' operator for Complex - Complex
Complex operator-(const Complex &other) const {
return Complex(real - other.real, imag - other.imag);
}
// Overload '*' operator for Complex * Complex
Complex operator*(const Complex &other) const {
return Complex(real * other.real - imag * other.imag,
real * other.imag + imag * other.real);
}
// Constructor: int to Complex
Complex(int value) : real(value), imag(0) {}
// Constructor: double to Complex
Complex(double value) : real(value), imag(0) {}
};
// Main function to demonstrate the implementation
int main() {
Complex c1(3, 4), c2(1, -2); // Initialize complex numbers
// Display the complex numbers
cout << "First complex number: ";
c1.display();
cout << "Second complex number: ";
c2.display();
// Perform basic operations
Complex sum = c1 + c2;
Complex diff = c1 - c2;
Complex product = c1 * c2;
// Display results
cout << "Sum: ";
sum.display();
cout << "Difference: ";
diff.display();
cout << "Product: ";
product.display();
Complex fromInt = 5; // Convert int to Complex
cout << "Complex number from int 5: ";
fromInt.display();
return 0;
}

/*OUTPUT
First complex number: 3 + 4i
Second complex number: 1 - 2i
Sum: 4 + 2i
Difference: 2 + 6i
Product: 11 - 2i
Complex number from int 5: 5 + 0i
*/