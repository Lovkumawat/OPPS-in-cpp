// Protected Access Modifier in C++
// protected is a private variable which is inherite
#include<iostream>
using namespace std;
class Base{
 protected:
 int a;
 private:
 int b;
};
// For a protected member:

                        //  | Public derivation |   Private Derivation |   Protected Derivation
    // 1.Private members         Not Inherited        Not Inherited            Not Inherited
    // 2.Protected members           Protected             Private               Protected
    // 3.Public members              Public                Private               Protected
class Derived:protected Base{

};
int main(){
    
    return 0;
}