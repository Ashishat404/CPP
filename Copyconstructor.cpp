#include <iostream> using namespace std;

class ashish

private:

string name;

int age;

public:

ashish()

{

age = 20;

name = "Ash";

cout <<name <<endl<<age<<endl;

5

}

ashish(int x, string y){

age =x;

name = y;

cout <<name <<endl<<age<<endl;

}

ashish(ashish &x){

age x.age;

name x.name;

cout <<name <<endl<<age<<endl;

}

1;

int main(){

ashish a1;

ashish a2(19,"naam");

ashish a3 (a2);
}