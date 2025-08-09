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
