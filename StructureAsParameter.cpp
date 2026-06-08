#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

/*void fun(struct Rectangle r,int l)//call by value
{
    r.length=l;
    cout<<"Length in function: "<<r.length<<endl;
    cout<<"Breadth in function: "<<r.breadth<<endl;
}*/
 /*int main()
 {
     struct Rectangle r={10,5};
     fun(r,20);
     cout<<"Length in main: "<<r.length<<endl;
     cout<<"Breadth in main: "<<r.breadth<<endl;//call by value does not change the value of r in main function
     return 0;
 }*/
/*void fun(struct Rectangle &r,int l)//call by reference
{
    r.length=l;
    cout<<"Length in function: "<<r.length<<endl;
    cout<<"Breadth in function: "<<r.breadth<<endl;
}

int main()
 {
     struct Rectangle r={10,5};
     fun(r,20);
     cout<<"Length in main: "<<r.length<<endl;
     cout<<"Breadth in main: "<<r.breadth<<endl;//call by reference changes the value of r in main function
     return 0;
 }*/

 void changeLength(struct Rectangle *r,int l)//call by address
{
    r->length=l;
    cout<<"Length in function: "<<r->length<<endl;
    cout<<"Breadth in function: "<<r->breadth<<endl;
}
int main()
 {
     struct Rectangle r={10,5};
     changeLength(&r,20);
     cout<<"Length in main: "<<r.length<<endl;
     cout<<"Breadth in main: "<<r.breadth<<endl;//call by address changes the value of r in main function
     return 0;
 }

 