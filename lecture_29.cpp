#include<iostream>
using namespace  std;
// This ponter in c++

class A{
    int a;
    public:
    // A setData(int a){
    //     this->a=a;
    //        // beasuce it c++ give priority on local variable 
    // }

    A & setData(int a){
        this->a=a;
        return *this;   // beasuce it c++ give priority on local variable 
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    // this is a keyword which ia a pointer which points to the object which invoked the
    // member function
    A a;
    
    a.setData(5).getData();
    a.getData();
    return 0;
}
