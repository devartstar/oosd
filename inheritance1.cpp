#include <iostream>
using namespace std;

class Stack{
    protected:
        enum { MAX= 3 };
        int st[MAX];
        int top;
    public:
        Stack(){
            top = -1;
        }
        void push(int var){
            st[++top] = var;
        }
        int pop(){
            return st[top--];
        }
};

class Stack1 : public Stack{
    public:
        void push(int var){
            if(top >= MAX-1){
                cout<<"ERROR : Stack full"<<endl;
                exit(1);
            }
            Stack::push(var);
        }
        int pop(){
            if(top<0){
                cout<<"Stack Empty"<<endl;
                exit(1);
            }
            return Stack::pop();
        }
};

int main(){
    Stack1 s1;

    s1.push(10);
    s1.push(20);

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
}