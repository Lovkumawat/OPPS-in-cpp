#include <iostream>
using namespace std;
// Can a static function be inherited?
// Yes, static functions can be inherited from a base class, but with some important caveats:
class Base {
public:
     void show() {
        cout << "Base class static method\n";
    }
};

class Derived : public Base {
    public:
   void show() {
   
        cout << "Derived class static method\n";
    }

};

int main() {
     // Inherits Base::show()
      Base b;
    b.show();
    Derived d;
    d.show();
    
 
    return 0;
}
