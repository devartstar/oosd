#include <iostream>
using namespace std;

# define MAX 10

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0)
        {}
        void getDistance(){
            cout<<"Enter Foot : ";
            cin>>feet;
            cout<<"Enter Inches : ";
            cin>>inches;
        }
        void showDistance() const{
            cout<<feet<<"' "<<inches<<"'' "<<endl;
        }
};

int main(){
    Distance dist[100];
    char opn = 'y';
    int itr = 0;
    while(opn!='n'){
        dist[itr++].getDistance();
        cout<<"Enter 'n' to exit"<<endl;
        cin>>opn;
        if(itr >= MAX){
            cout<<"MAX LIMIT REACHED"<<endl;
            break;
        }
    }

    for(int i=1; i<=itr; i++){
        cout<<"Distance "<<i<<" : ";
        dist[i].showDistance();
    }

}
