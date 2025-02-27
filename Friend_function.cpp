// Friend Function 
#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setNumber(int n1,int n2){
       a=n1;
       b=n2; 
    }
    // Below line means that non member -  sumComplex function is allowed to do
    // anything with my privatre parts (members)
    
    friend Complex sumComplex(Complex o1,Complex o2);
    void printNumber(){
        cout<<"Your number is : "<<a<<" +"<<b<<"i"<<endl;
    }
};
// create function which return complex
// Complex sumComplex(Complex o1,Complex o2){
//     Complex o3;
//     // we cant acces private data of Complex class so this will throw an error
//     o3.setNumber((o1.a+o2.a),(o1.b+o2.b));   // -----> throw an error 
//     return o3;
// }

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));   
    return o3;
}


int main(){
    Complex c1,c2,sum;
    c1.setNumber(3,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    sum=sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}
// Properties of Friend Function

// Not in the scope of class

//  since it is not in the scope of the class, it cannot be called the object of that class

// c1.sumComplex()== Invalid

// Can be invoked without the help of the object

// usually contains  the objects as the  arguments  

// can be declare inside public or private section of the class 

// It cannot access the member directly by their names and need object_name.member_name
// to access any member

