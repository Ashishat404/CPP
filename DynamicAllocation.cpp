#include <iostream>
using namespace std;

class Crickter
{
    string name;
    int runs;
    float avg;

public:
    Crickter(string name, int runs, float avg)
    {
        this->avg = avg;
        this->name = name;
        this->runs = runs;
}
    void print()
    {
        cout << name << "\t" << avg << "\t" << runs << "\t" << endl;
    }
};
int main()
{
