#include <iostream>
using namespace std;
void print(int x) {
  cout << "Integer: "<< x << endl;
}
void print(double x) {
cout << "Double: " << x << endl;
int main() {
  print(5.5); // Ambiguity: 5.5 can be converted to both int and double

