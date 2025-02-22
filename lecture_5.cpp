// Static Data Members & Methods 
// it solve the prev problem by using static variable
#include<iostream>
using namespace std;

class Employee{
    int id;
    // 
        static int count;
    public:
    void setData(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){

        cout<<"Employee id is : "<<id<<"and this is employee number :" <<count<<endl;
    }
    // static function 
    // it will access only static members 
    static void getCount(void){
        // cout<<id; // it will throws an error | : a nonstatic member reference must be relative to a specific object
        cout<<"The value of count is "<<count<<endl;
    }

};
// this is static variable 
int Employee:: count; // default value is 0 and the value can be initialize at here 




int main(){
    // l s1,s2 are objects
    Employee l,s1,s2;
    l.setData();
    l.getData();
    l.getCount();

     l.setData();
    l.getData();
    l.getCount(); // we also access from class name
    Employee::getCount();

    s1.setData();
    s1.getData();
    Employee::getCount();
   
    s2.setData();
    s2.getData();
    Employee::getCount();




    return 0;
}