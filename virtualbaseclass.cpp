#include <iostream>
using namespace std;

class Ashish{
public:
void show()
{
    cout<<"yea!! it's running "<<endl; 
}   
};

class Ashish1 : virtual public Ashish {
};

class Ashish2 : virtual public Ashish {
};

class deriving : public Ashish1, public Ashish2 {
    
};

int main()
{
    deriving obj;
    obj.show();
    return 0;
}