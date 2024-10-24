#include <iostream>
using namespace std;

class ashish
{
    int a[3][3];
    friend class aadi;

public:
    void getdata() {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j<3;j++){
            cout<<"Enter"<<"Element: ";
            cin>>a[i][j];
        
            }
        }
    }
    void printdata(){
        for (int i = 0; i < 3; i++){
        for (int j = 0; j<3;j++){
            cout<<a[i][j];
        
            }
        cout<<"\n";        }
    }
};
class aadi
{

};

 int main()
{
    ashish m1;
    m1.getdata();
    m1.printdata();
    return 0;
}