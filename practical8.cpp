/* Write a C++ program that randomly generates
complex numbers (use previously designed
Complex class) and write them two per line in a file
along with an operator (+,-,*, or /). The numbers
are written to file in the format (a + ib). Write another
program to read one line at a time from this file
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
// Function to generate a random complex number
void generateRandomComplex(int& real, int& imag) {
real = rand() % 100; // Random real part (0-99)
imag = rand() % 100; // Random imaginary part (0-99)
}
// Function to generate a random operator
char generateRandomOperator() {
char operators[] = {'+', '-', '*', '/'};
return operators[rand() % 4];
}
// Main function to generate complex numbers, write to file, and then read from file
int main() {
srand(time(0)); // Seed random number generator
// Writing complex numbers and operations to the file
ofstream outFile("complex_operations.txt");
if (!outFile) {
cerr << "Error opening file for writing!" << endl;
return 1;
}
// Generate 10 random complex numbers and operators
for (int i = 0; i < 4; ++i) {
int real1, imag1, real2, imag2;
generateRandomComplex(real1, imag1);
generateRandomComplex(real2, imag2);
char op = generateRandomOperator();
outFile << real1 << " + i" << imag1 << " "
<< op << " "
<< real2 << " + i" << imag2 << endl;
}
outFile.close();
cout << "Complex numbers and operations written to file." << endl;
// Reading the file and displaying its contents
ifstream inFile("complex_operations.txt");
if (!inFile) {
cerr << "Error opening file for reading!" << endl;
return 1;
}
string line;
while (getline(inFile, line)) {
cout << "Line: " << line << endl;
}
inFile.close();
return 0;
}

/* OUTPUT
Complex numbers and operations written to file.
Line: 33 + i71 - 93 + i32
Line: 55 + i26 + 79 + i72
Line: 9 + i57 / 72 + i7
Line: 44 + i91 - 79 + i22
*/