// Array of Objects & Passing Objects as Function Arguments 
#include<iostream>
using namespace std;
class Employee{
    int id ;
    int salary;
    public:
    void setId(void){
        salary=122;
        cout<<"Enter the id of Employee";
        cin>>id;
    }
    void getId(void){
        cout<<"The id of the employee is : "<<id<<endl;
    }
};


int main(){
    // Employee a,b,c,d;
    // a.setId();
    // a.getId();
    Employee fb[4];
    for(int i=0;i<4;i++){

        fb[i].setId();
        fb[i].getId();

    }
    

    
 return 0;

}
