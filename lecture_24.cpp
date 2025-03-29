#include<iostream>
using namespace std;

// Constructure in Derived Class in cpp

// case1:
// class B : public A{
//     // order of execution of construction ->first A() then B()

// };
// case2:
// class A:public B,public C{
//     // order of execution of construction -> B() then C() and A()
// };

// case3:
// class A : public B,virtual public C{
//     // give more preference to virtual class
// // order of execution of construction -> C() then B() then A()
// }; 
class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
        cout<<"Base1 class constructor called"<<endl;
    }
   void printDataBase1(void){
    cout<<"The value of Data1 is "<<data1<<endl;
   }

};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2=i;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printDataBase2(void){
        cout<<"The value of Data2 is "<<data2<<endl;
       }
};

    // if we try to change the order such that Base2 class first then Base1 class then result(order) change 
class Derived : public Base2,public Base1{
    int derived1,derived2;
    public:
    // if we try to change the order such that Base2 class first then Base1 class then result(order) remain same 
    Derived(int a,int b,int c,int d): Base1(a),Base2(b){
       derived1=c;
       derived2=d; 
       cout<<"Derived class constructor called : "<<endl;
    }
    
    void printDataDerived(void){
        cout<<"The value of derived 1 is "<<derived1<<endl;
        cout<<"The value of derived 2 is :"<<derived2<<endl;
       }
    
};

int main(){
    
    Derived harry(1,2,3,4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}
