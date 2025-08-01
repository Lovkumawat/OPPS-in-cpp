#include<iostream>
using namespace std;
//Pointers to Objects and Arrow Operator in CPP
class Complex{
    int real,imaginary;
    public:
    void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
    void setData(int a,int b){
        real=a;
        imaginary=b;
    }

};
int main(){
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr=new Complex;
    //(*ptr).setData(1,54); is exactly same as
    ptr->setData(1,54);
   // (*ptr).getData(); // is as good as 
   ptr->getData();

   // Array of Object 
   Complex *ptr1=new Complex[4];
   ptr1->setData(1,54);
   ptr1->getData();

   (ptr1+1)->setData(1,54);
   (ptr1+1)->getData();

    return 0;
}