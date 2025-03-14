// Multiple Inheritance Deep Dive with Code Example in C++
#include<iostream>
using namespace std;

// syntex for inheriting in multiple inheritance
// class Derived:visibility-mode base1,visibility-mode base2
// {
//     class body "Derived C"
// }
class Base1{
    protected:
    int base1int;
    public:
    void get_base1int(int a){
        base1int=a;
    }
};
class Base2{
    protected:
   int  base2int;
   public:
   void get_base2int(int b){
    base2int=b;
   }
};
class Derived:public Base1,public Base2{
    public:
    void show(){
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"Teh sum odf ths value is : "<<(base1int+base2int)<<endl;
    }

};
int main(){
    Derived d1;
    d1.get_base1int(2);
    d1.get_base2int(3);
    d1.show();
    return 0;

}