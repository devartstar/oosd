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
        Distance addDistance(Distance);
};

Distance Distance::addDistance(Distance d1){
    Distance temp;
    temp.inches = d1.inches + inches;
    temp.feet = d1.feet + feet;
    if(inches >= 12.0){
        temp.inches = temp.inches - 12.0;
        temp.feet++;
    }
    return temp;
}

int main(){
    Distance dist1, dist3;
    Distance dist2(11, 6.25);

    dist1.getDist();
    dist3 = dist1.addDistance(dist2);

    cout<<"DIST 1 : \n";  dist1.showDist();
    cout<<"DIST 2 : \n";  dist2.showDist();
    cout<<"DIST 3 : \n";  dist3.showDist();
}