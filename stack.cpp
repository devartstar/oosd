#include <iostream>
using namespace std;

class Stack{
    private:
        enum {MAX = 10};
        int top;
        int st[MAX];
    public:
        Stack(){
            top = 0;
        }
        void push(int x){
            st[++top] = x;
        }
        int pop(){
            return st[top--];
        }
};

int main(){
    Stack stack1;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    int i= 0;
    cout<<++i<<" : "<<stack1.pop()<<endl;
    cout<<++i<<" : "<<stack1.pop()<<endl;
    cout<<++i<<" : "<<stack1.pop()<<endl;
    stack1.push(50);
    stack1.push(60);
    cout<<++i<<" : "<<stack1.pop()<<endl;
    cout<<++i<<" : "<<stack1.pop()<<endl;
    cout<<++i<<" : "<<stack1.pop()<<endl;    
}
/*
10 
40 30 20 10
10
50 10
60 50 10
*/