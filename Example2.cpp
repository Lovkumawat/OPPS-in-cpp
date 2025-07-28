#include <iostream>
using namespace std;
// Can a static function be inherited?
// Yes, static functions can be inherited from a base class, but with some important caveats:
class Base {
public:
    static void show() {
        cout << "Base class static method\n";
    }
};

class Derived : public Base {
    // No override possible for static method
    public:
    // static void show() {
    //     cout << "Derived class static method\n";
    // }

};

int main() {
    Derived::show();  // Inherits Base::show()
    Base::show();
    Derived d;
    d.show();
    Base b;
    b.show();
    return 0;
}
