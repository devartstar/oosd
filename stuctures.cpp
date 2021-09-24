#include <bits/stdc++.h>
using namespace std;

struct Measurement{
    int feet;
    float inches;
};

struct Dimension{
    Measurement length;
    Measurement width;
};


int main(){
    Dimension room1, room2;

    cout<<"Enter Dimesions of room 1 :- "<<endl;
    cout<<"Enter Length :- "<<endl;
    cout<<"FEET :- ";
    cin>>room1.length.feet;
    cout<<"INCHES :-";
    cin>>room1.length.feet;

    cout<<"Enter Dimesions of room 2 :- "<<endl;
    cout<<"Enter Length :- "<<endl;
    cout<<"FEET :- ";
    cin>>room2.length.feet;
    cout<<"INCHES :-";
    cin>>room2.length.feet;

    // ....
    // LOGIC AND CODE
}