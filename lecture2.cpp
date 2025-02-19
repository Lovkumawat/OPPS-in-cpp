#include <iostream>
using namespace std;
class binary
{
    string s;
 void chk_bin(void);
public:
    void read(void);
    // void chk_bin(void);
    void ones(void);
    void display(void);
};

// this is called inline function
void binary::read(void)
{

    cout << "Enter a binary number : " << endl;
    cin >> s;

}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary formate " << endl;
            exit(0);
        }
    }
}

void binary::ones(void){
    // this is called neasted function 
    chk_bin();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }else{
             s.at(i)='0';

        }
    }
}
void binary::display(void){
       cout<<s;
}



int main()
{
    binary b, c;
    b.read();
    //  b.chk_bin();
    b.ones();
    b.display();
    // b.s="12345"; through an error
    return 0;
}
// important note: if we set both the function as in privat and public  member simultaniouslly then it will 
// that function is behave like a private member 
// 2 but we use this function in another in function Cleverly
