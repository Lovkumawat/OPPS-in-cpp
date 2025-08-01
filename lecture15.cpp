// Copy Constructor in C++
#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    // default contructor must required 
    Number(){
        a=100;
    }
    Number(int num){
        a=num;
    }

    // if you remove this it will not throw error 
    // because our compiler  allocate default contructor for each and every class

    //  Number(Number &obj){
    //     cout<<"Copy contructor called"<<endl;
    //     a=obj.a;

    // }
    
        Number(Number &obj){
        cout<<"Copy contructor called"<<endl;
        a=obj.a;

    }

    void display(){
        cout<<"The number for this object is "<<a<<endl;

    }

};
int main(){
    Number x,y,z(45), z2;
    z.display();
    x.display();
    y.display();

    // z1 should exactly resemble z or x  or y
    Number z1(x); // copy contructor invoked
    z1.display();


    z2=z; // copy constructor not call because z is assign to z2 which is already created
    z2.display();


        cout<<"called"<<endl;
    Number z3=z;  //  (Number z3=z)==Number z3(z)
    z3.display();
    

    return 0;
}