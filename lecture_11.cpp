//Parameterized and Default Constructors In C++
#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
// creating a constructor
// constructor is a special member function with same name as of the class.It is automatically invoked(execute)
// whenever an object is created
// It is used to initilize the object of its class
    Complex(int x,int y);
     // constructor declaratiion
     void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<< " i "<<endl;
     }
    

};
Complex :: Complex(int x,int y){ 

    a=x;
    b=y;
}

int main(){
    // implicit call
    Complex c(2,4);
    Complex b=Complex(5,7);
    c.printNumber();
    b.printNumber();
    
    return 0;
}
