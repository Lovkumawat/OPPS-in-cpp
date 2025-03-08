#include<iostream>
using namespace std;
// Base class 
class Employee{
    public:
    int id;
      float salary;
    Employee(int inpId){
        id=inpId;
        salary=34.0;
    }
    Employee(){

    }
};
//Derived class syntax
// class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
// Note:
// 1. default visibilty mode is private 
// 2. Private Visibility Mode:Public members of the base class become private member of the direved class
// 3. Public Visibility Mode:Public memeber of the base class become public member of the derived class 
// 4. Private member are not inherited



// Creating a Programmer class drived from employee Base class 
class Programmer: public Employee{
    public:
    Programmer(int inpId){
        id=inpId;
    }
    // IMPORTANT Interview  Question 
    // without creating a default contructor of employee class it will throw an error 

    int languagecode=9;
    void getData(){
        cout<<id<<endl;
    }

};

int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary;
    cout<<harry.id<<endl;
    cout<<rohan.salary;
    cout<<rohan.id<<endl;
    Programmer skillF(6);
    skillF.getData();
    cout<<skillF.id<<endl;
    

    return 0;
}