#include<iostream>
#include<cstring>
using namespace std;
// Abstract Base Class & Pure Virtual Functions in C++
// In C++, an abstract base class (ABC) is a class designed to be a base class for other classes,
//  containing at least one pure virtual function (declared with = 0),
//  and cannot be instantiated directly
class CWH{
      protected:
      string title;
      float rating;
      public:
      CWH(string s,float r){
        title =s;
        rating=r;
      }

      virtual void display()=0; // do nothing function -->pure virtual function 
       
};

class CWHVideo :public CWH{
    float videoLength;
    public:
    CWHVideo(string s,float r,float vL): CWH(s,r){
        videoLength=vL;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings : "<<rating<<"Out of 5 stars "<<endl;
        cout<<"Length of this video is :  "<<videoLength<<"minutes"<<endl;
    }
};
class CWHText :public CWH{
    int words;
    public:
    CWHText(string s,float r,int wc): CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings : "<<rating<<"Out of 5 stars "<<endl;                     // now it will throw me an error 
        cout<<"No of words in this text tutorial is : "<<words<<"words"<<endl;
    }
    

};
int main(){
    string title;
    float rating,vlen;
    int words;


    // for  Code With Lov Video 
    title =" Django Tutorial ";
    vlen=4.56;
    rating =4.89;
    CWHVideo djVideo(title,rating ,vlen);
     djVideo.display();


    title =" Django Tutorial Text ";
    words=4; 
    rating =4.19;
    CWHText djText(title,rating ,words);
     djText.display();
    // CWH o("ldkinde",1.11);
    CWH *tuts[2];
    tuts[0]=&djVideo;
    tuts[1]=&djText;
    tuts[0]->display();
    tuts[1]->display();


    return 0;
}
// 1 They cannot be static
// 2 They are accessed by object pointers 
// 3 Virtual functional can be a friend of another class 
// 4 A virtual function in base class might be used 
// 5 If a virtual function is defined in a base class , there is no neccessity  of redefining it in a derived class 

