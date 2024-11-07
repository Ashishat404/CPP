#include <iostream>
using namespace std;

class matrix{
    int a[10][10],r,c;
    friend class mulmatrix;
    public:
    matrix(int m,int n){
        r=m;
        c=n;
    }
    void getdata(){
        int count=1;
        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                cout<<"Enter "<<count<<" Element: ";
                cin>>a[i][j];
                count++;
            }
        }
    }
    
    void  printdata(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    cout<<endl;
    }
};

class mulmatrix{
    int m[10][10]={0},r3,c3;
    public:
    void mul(matrix &o1,matrix &o2){
        r3=o1.r;
        c3=o2.c;
        for(int i=0;i<o1.r;i++){
            for (int j=0;j<o2.c;j++){
                for (int k=0;k<o1.c;k++){
                    m[i][j]+=o1.a[i][k]*o2.a[k][j];
                }
            }
        }
    }
    
    void  printdata(){
        for(int i=0;i<r3;i++){
            for(int j=0;j<c3;j++){
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    cout<<endl;
    }
};

int main() {
    // Write C++ code here
    int r1,c1,r2,c2;
    while (r2!=c1){
        cout<<"Eroor Beech"<<endl<<"Enter r1 c1:";
        cin>>r1>>c1;
        cout<<endl;
        cout<<"Entern r2 c2:";
        cin>>r2>>c2;
    }
    matrix m1(r1,c1);
    m1.getdata();
    m1.printdata();
    matrix m2(r2,c2);
    m2.getdata();
    m2.printdata();
    mulmatrix m3;
    m3.mul(m1,m2);
    m3.printdata();

    return 0;
}