#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

const int MAX = 20;

class Class{
    private:
        char name[MAX];
        int roll;
    public:
        Class() : name("\0"), roll(0)
        {}
        void setData(char s[], int r){
            strcpy(name, s);
            roll = r;
        }
        void showData(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll No : "<<roll<<endl;
        }
};

int main(){
    Class student[3];

    for(int i=0; i<3; i++){
        char s[MAX];
        cin>>setw(MAX)>>s;
        int roll_no;
        cin>>roll_no;
        student[i].setData(s, roll_no);
    }

    for(int i=0; i<3; i++){
        student[i].showData();
    }

    
}


