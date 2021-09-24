#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance(): feet(0), inches(0.0) {}
        Distance(int ft, float inc): feet(ft), inches(inc) {}
        void getDist(){
            cin>>feet;
            cin>>inches;
        }
        void showDist(){
            cout<<feet<<endl;
            cout<<inches<<endl;
        }
        Distance operator + (Distance d){
            float i = d.inches + inches;
            int f = d.feet + feet;
            if(i >=12.0){
                i = i - 12.0;
                f++;
            }
            return Distance(f, i);
        }
};

int main(){
    Distance d1, d2, d3;
    d1.getDist();
    d2.getDist();

    d3 = d1 + d2;
    d3.showDist();
}