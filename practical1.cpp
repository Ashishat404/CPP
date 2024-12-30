/*C++ classes with static members,methods with default arguments, and friend
functions. (For example, design matrix and MATRIX classes with static allocation, 
and a friend function to do matrix-MATRIX multiplication)*/

#include <iostream>
using namespace std;
class MATRIX; // Forward declaration
class Matrix {
private:
static const int rows = 3; // Static allocation: fixed rows
static const int cols = 3; // Static allocation: fixed cols
int data[rows][cols]; // Array to store matrix elements
public:
// Constructor with default values
Matrix(int defaultVal = 0) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
data[i][j] = defaultVal;
}
}
}
// Method to input matrix elements
void input() {
cout << "Enter elements for Matrix (" << rows << "x" << cols
<< "):" << endl;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cin >> data[i][j];
}
}
}
// Method to display matrix
void display() const {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cout << data[i][j] << " ";
}
cout << endl;
}
}
// Friend function for matrix multiplication
friend void multiply(const Matrix &mat1, const MATRIX &mat2);
};
class MATRIX {
private:
static const int rows = 3; // Static allocation: fixed rows
static const int cols = 3; // Static allocation: fixed cols
int data[rows][cols]; // Array to store matrix elements
public:
// Constructor with default values
MATRIX(int defaultVal = 1) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
data[i][j] = defaultVal;
}
}
}
// Method to input matrix elements
void input() {
cout << "Enter elements for MATRIX (" << rows << "x" << cols
<< "):" << endl;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cin >> data[i][j];
}
}
}
// Method to display matrix
void display() const {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cout << data[i][j] << " ";
}
cout << endl;
}
}
// Friend function for matrix multiplication
friend void multiply(const Matrix &mat1, const MATRIX &mat2);
};
// Friend function for matrix multiplication
void multiply(const Matrix &mat1, const MATRIX &mat2) {
const int rows = 3;
const int cols = 3;
int result[rows][cols] = {0};
// Multiply mat1 and mat2
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
for (int k = 0; k < cols; ++k) {
result[i][j] += mat1.data[i][k] * mat2.data[k][j];
}
}
}
// Display the result
cout << "Result of Matrix-MATRIX multiplication:" << endl;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cout << result[i][j] << " ";
}
cout << endl;
}
}
int main() {
Matrix mat1;
MATRIX mat2;
// Input matrices
mat1.input();
mat2.input();
// Display matrices
cout << "Matrix 1:" << endl;
mat1.display();
cout << "MATRIX 2:" << endl;
mat2.display();
// Perform multiplication
multiply(mat1, mat2);
return 0;
}