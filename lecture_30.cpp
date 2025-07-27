#include<iostream>
using namespace std;
// Pointers to Derived Classes in C++
class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Display Base class Variable var_base "<<var_base<<endl;
    }

};

class DerivedClass:public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"Display Base class Variable var_base in derived class : "<<var_base<<endl;
        cout<<"Display Derived class Variable var_derived : "<<var_derived<<endl;
    }

};

int main(){
    BaseClass*base_class_pointer;
    BaseClass obj_class;
    DerivedClass obj_derived;
    base_class_pointer=&obj_derived; // pointing base class pointer to derived class  
    base_class_pointer->var_base=34;
    base_class_pointer->display();  // ? due to late binding (it is the pointer of the base class )
  //   base_class_pointer->var_derived=34; // it will an throw error 
    DerivedClass*derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_derived=62;
    derived_class_pointer->var_base=23;
    derived_class_pointer->display();
    
    return 0;

}