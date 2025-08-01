#include<iostream>
using namespace std;
class Student {
public:
    int rollNo;
    int age;
};

int main() {
    Student s1;
    Student const s2 = s1;
    s1.rollNo = 101;
    s1.age = 20;
    cout << s2.rollNo << " " << s2.age;
}