#include<iostream>
using namespace std;
class Employee{
    private:
    // in variable ko only unke class ka  function access kr sakte hai 
    int a,b,c;
    public:
    int d,e;
    void setData(int a1,int b1,int c1); // decelaration 
    void getData(){
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
        cout<<"The value of c is :"<<c<<endl;
        cout<<"The value of d is :"<<d<<endl;
        cout<<"The value of e is :"<<e<<endl;
    }
};
// :: scope resolution operator
void Employee :: setData(int a1 ,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee l;
    l.setData(1,2,3);
    l.d=5;
    l.e=6;
    l.getData();


    return 0;
}