#include <iostream>
using namespace std;

class Employee
{

private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); //decleration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
 //:: scope resolution operator
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee ashish;
    // ashish.a = 34; --> we will get a error here as its private 
    ashish.d = 31;
    ashish.e = 8;
    ashish.setData(90,9,3);
    ashish.getData();

    return 0;
}