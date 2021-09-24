#include <iostream>
using namespace std;

class Dimension{
    private:
        float length;
        float width;
    public:
        Dimension() : length(2.6), width(7.8)
        {}
        Dimension(float l, float w) : length(l), width(w)
        {}
        void getDimension(){
            cout<<"ENTER LENGTH : ";
            cin>>length;
            cout<<"ENTER WIDTH : ";
            cin>>width;
        }
        float calcPerimeter(){
            return 2*(length + width);
        }
        float calcArea(){
            return (length * width);
        }
        void showDimension(){
            cout<<"LENGTH :- "<<length<<endl;
            cout<<"WIDTH :- "<<width<<endl;
        }
};

int main(){
    Dimension rec2, rec1;
    rec2.getDimension();
    Dimension rec3(2.6, 9.2);

    cout<<"RECTANGLE 1 : "<<endl;
    cout<<"PERIMETER = "<<rec1.calcPerimeter()<<endl;
    cout<<"AREA = "<<rec1.calcArea()<<endl;

    cout<<"RECTANGLE 2 : "<<endl;
    cout<<"PERIMETER = "<<rec2.calcPerimeter()<<endl;
    cout<<"AREA = "<<rec2.calcArea()<<endl;

    cout<<"RECTANGLE 3 : "<<endl;
    cout<<"PERIMETER = "<<rec3.calcPerimeter()<<endl;
    cout<<"AREA = "<<rec3.calcArea()<<endl;

}