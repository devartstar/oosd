#include <iostream>
using namespace std;

class Counter{
    private:
        unsigned int count;
    public:
        Counter() : count(0){

        }
        Counter(int c) : count(c){

        }
        unsigned int getCount(){
            return count;
        }
        Counter operator ++ (){
            // ++count;
            // Counter temp;
            // temp.count = count;
            // return temp;
            return Counter(++count);
        }
        Counter operator ++ (int){
            return Counter(count++);
        }
};

int main(){
    Counter c1, c2;
    cout<<"COUNTER 1 : "<<c1.getCount()<<endl;
    cout<<"COUNTER 2 : "<<c2.getCount()<<endl;


    c2++;
    c1 = c2++;
    c2++;
    c2++;

    cout<<"COUNTER 1 : "<<c1.getCount()<<endl;
    cout<<"COUNTER 2 : "<<c2.getCount()<<endl;

}

