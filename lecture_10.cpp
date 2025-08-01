#include<iostream>
using namespace std;
//Constructor
class Complex{
    int a,b;
public:
// creating a constructor
// constructor is a special member function with same name as of the class.It is automatically invoked(execute)
// whenever an object is created
// It is used to initilize the object of its class
    Complex(void);
     // constructor declaratiion
     void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<< " i "<<endl;
     }
    

};
Complex :: Complex(void){ // this is a default constructor as it not take any perameter

    a=10;
    b=0;
}
int main(){
    Complex c;
    c.printNumber();

    
    return 0;
}
//it should be declare in the public section of the class
// they are autometically invoked whenever the object is created
// do not have retun type and they cannot return  values 
// it can have dedfault argument
// we can'not refer to the address 
