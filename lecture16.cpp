// Destructor in C++
#include<iostream>
using namespace std;
// Destructor never takes an argument nor does it return any value 
int count=0;
class num{
        public:
        
        num(){
            count++;
            cout<<"This is the time when contructor is called for object number "<<count<<endl;

        }
        ~num(){
            cout<<"This is the wehen my distructor is called for object number"<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"We are inside a main function "<<endl;
    cout<<"Creating first objects n1 "<<endl;
    num n1;
    {
       cout<<"Creating two more objects"<<endl;
       num n2,n3;
       cout<<"Exiting tis block"<<endl; 
    }

    cout<<"Back to main"<<endl;
    num n2;


    return 0;
}