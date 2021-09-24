#include <iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0)
        {}
        Distance(int ft, float inc) : feet(ft), inches(inc)
        {}
        void getDist(){
            cout<<"ENTER FEET : ";
            cin>>feet;
            cout<<"ENTER INCHES : ";
            cin>>inches;
        }
        void showDist(){
            cout<<"FEET : "<<feet<<endl;
            cout<<"INCHES : "<<inches<<endl;
        }
        void addDistance(Distance, Distance);
};

void Distance::addDistance(Distance d1, Distance d2){
    inches = d1.inches + d2.inches;
    feet = d1.feet + d2.feet;
    if(inches >= 12.0){
        inches = inches - 12.0;
        feet++;
    }
}

int main(){
    Distance dist1, dist3;
    Distance dist2(11, 6.25);

    dist1.getDist();
    dist3.addDistance(dist1, dist2);

    cout<<"DIST 1 : \n";  dist1.showDist();
    cout<<"DIST 2 : \n";  dist2.showDist();
    cout<<"DIST 3 : \n";  dist3.showDist();
}