// Multilevel Inheritance Deep Dive with Code Example in C++ 
#include<iostream>
using namespace std;
class Student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);



};
void Student :: set_roll_number(int r){
    roll_number=r;
}
void Student::get_roll_number(){
    cout<<"The roll Number is "<<roll_number<<endl;
}
class Exam: public Student{
        protected:
        float maths;
        float physics;
        public:
        void set_marks(float,float);
        void get_marks(void);
};
void Exam:: set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void Exam:: get_marks(){
    cout<<"The marks obtained in maths are : "<<maths<<endl;
    cout<<"The marks obtained in physics are :"<<physics<<endl;

}

class Result: public Exam{
    float percentage;
    public:
    void display(){
        get_roll_number();
        get_marks();
        cout<<"Your Percentage is "<<(maths+physics)/2<<endl;
    }


};

int main(){
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0,90.0);
    harry.display();


      return 0;

}