#include<iostream>
#include<stdio.h>
using namespace std;
class Rectangle{
    public:

    int length;
    int breadth;

    Rectangle(int l, int b){
        length =l;
        breadth =b;
    }

    void changeLength(int l){
        length =l;
    }
    int area(){
        return length*breadth;
    }

    int Peri(){
        return 2*(length+breadth);
    }

};

int main(){
    Rectangle r(40,30);
    cout<<"Perimeter of  the rectangle: "<< r.Peri()<<endl;
    r.changeLength(50);
    cout<<"Area of the Rectangle: "<<r.area()<<endl;
    return 0;
}