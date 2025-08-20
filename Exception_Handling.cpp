#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        double balance = 1000;
        double amount;
        // deposit
        cout << "Enter deposit amount : ";
        cin >> amount;

        if (amount < 0)
