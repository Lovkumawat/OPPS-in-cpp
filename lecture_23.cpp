// Virtual Base Class in C++
#include<iostream>
using namespace std;

// student-->Test 
// student--->sports
// test--->result
// sports--->result

class Student{
    protected:
    int roll_no;
     public:

    void set_number(int a){
    roll_no=a;
}

void print_number(void){
    cout<<"Your roll no is : "<<roll_no<<endl;
}

};

class Test : virtual public Student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(void){
        cout<<"you have obtained "<<endl;
        cout<<"Maths : "<<maths<<endl;
        cout<<"Physics "<<physics<<endl;
    }

};

class Sports : virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(void){
        cout<<"Your PT score is : "<<endl;
    }
};

class Result :public Test,public Sports{
    private:
    float total;
    public:
    void display(void){
        total=maths+physics+score;
        print_number(); // without virtual this is abeguious 
        print_marks();
        print_score();
        cout<<"your total score is :"<<total<<endl;
    }
   
};


int main(){
    Result s;
    s.set_number(21);
    s.set_marks(78.9,46.0);
    s.set_score(20);
   // s.print_score();
    s.display();


  
return 0;    

}