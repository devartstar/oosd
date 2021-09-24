#include <iostream>
using namespace std;

class Counter{
    protected:
        unsigned int count;
    public:
        Counter(): count(0) {}
        Counter(int c): count(c) {}
        unsigned int getCount(){
            return count;
        }
        Counter operator ++ (){
            return Counter(++count);
        }
};

class CountDn : public Counter{
    public:
        CountDn(): Counter() {}
        CountDn(int c): Counter(c) {}
        CountDn operator -- (){
            return CountDn(--count);
        }
};

int main(){
    CountDn c1;
    CountDn c2(100);
    cout<<"C1 = "<<c1.getCount()<<endl;
    cout<<"C2 = "<<c2.getCount()<<endl;

    ++c1;
    ++c1;
    ++c1;

    cout<<"C1 = "<<c1.getCount()<<endl;
    cout<<"C2 = "<<c2.getCount()<<endl;

    --c1;
    --c1;

    cout<<"C1 = "<<c1.getCount()<<endl;
    cout<<"C2 = "<<c2.getCount()<<endl;

    CountDn c3 =  --c2;
    cout<<"C3 = "<<c3.getCount()<<endl;

}