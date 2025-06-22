// Initialization list in Constructor 
#include<Iostream>
using namespace std;
/*
Syntax fro initialization list in Constructor
Initializer List is used in initializing the data members of a class.
 The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon.
constructor (argument-list):initilization-section
{
assignment+other code;
}
class Test{
int a ;
int b;
public:
    Teat(int i,int j):a(i),b(j){constructor-body}
};
*/
class Test{
    int a;
    int b;
    public:
    // operation 1
        // Test(int i,int j):a(i),b(j){
        //     cout<<"Constructor executed"<<endl;
        //     cout<<"value is a is :"<<a<<endl;
        //     cout<<"value of b is :"<<b<<endl;
        // }
    // Operation 2
    // Test(int i,int j):a(i),b(i+j){
    //     cout<<"Constructor executed"<<endl;
    //     cout<<"value is a is :"<<a<<endl;
    //     cout<<"value of b is :"<<b<<endl;
    // }
    // // operation 3
    // Test(int i,int j):a(i),b(a+j){
    //     cout<<"Constructor executed"<<endl;
    //     cout<<"value is a is :"<<a<<endl;
    //     cout<<"value of b is :"<<b<<endl;
    // }
    // // opearation 4
    // Test(int i,int j):b(j),a(i+b){  // it will give garbaje value, because a will be initialize first we change the order 
    //     cout<<"Constructor executed"<<endl; 
    //     cout<<"value is a is :"<<a<<endl;
    //     cout<<"value of b is :"<<b<<endl;
    // }
    // // opeartion 5
    //   Test(int i,int j):a(j){  
    //     b=j;
    //     cout<<"Constructor executed"<<endl; 
    //     cout<<"value is a is :"<<a<<endl;
    //     cout<<"value of b is :"<<b<<endl;
    // }
    // // opeartion 6
    Test(int i,int j):a(i){  
        b=j;
        cout<<"Constructor executed"<<endl; 
        cout<<"value is a is :"<<a<<endl;
        cout<<"value of b is :"<<b<<endl;
    }
        

};

int main(){
    Test t(4,6);

    return 0;
}