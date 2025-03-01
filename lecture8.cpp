#include <iostream>
using namespace std;
// Friend Classes & Member Friend Functions in C++
// forwar decalaration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    // int sumRealComplex(Complex o1,Complex o2){
    //     return (o1.a+o2.a);
    // } ---> throw an error
    int sumRealComplex(Complex, Complex);
    int sumImaginaryComplex(Complex, Complex);
};

class Complex
{
    int a, b;
   // method 1
    // friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator ::sumImaginaryComplex(Complex o1, Complex o2);
    // method 2
        friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is : " << a << " +" << b << "i" << endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumImaginaryComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);

    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int res2 = calc.sumImaginaryComplex(o1, o2);
    cout << "The sum of real part of o1 and o2  is  " << res << endl;
    cout << "The sum of complex  part of o1 and o2  is  " << res2 << endl;

    return 0;
}