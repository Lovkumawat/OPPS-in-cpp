// Ambiguity Resolution in Inheritance in C++ 
// In multiple inheritances, when one class is derived from two or more base classes 
// then there may be a possibility that the base classes have functions with the same name,
//  and the derived class may not have functions with that name as those of its base classes.
//   If the derived class object needs to access one of the similarly named member functions of the base classes
//    then it results in ambiguity because the compiler gets confused about which base’s class member function should be called. 
#include<iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"Hii I am from Base1 class "<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Hii I am from Base2 class "<<endl;
    }
};
class Derived : public Base1,public Base2{
    int a;
    public:
    // Derived class overwrites the inherited function
    void greet(){
          Base1:: greet();
        cout<<"Hii I am from Derived class "<<endl;
    }


};

int main(){
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    
    Derived derivedobj;
    derivedobj.greet(); //this is ambiguous



    return 0;
}
