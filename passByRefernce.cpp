#include<iostream>
using namespace std;
 int swap (int &a,int &b){
    int temp;
    temp=a;
    a=b;    
    b=temp;
    return 0;
 }

 int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Before swapping: "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swapping: "<<x<<" "<<y<<endl;
    return 0;
 }

 // This program demonstrates pass by reference in C++. The swap function takes two integer references as parameters and swaps their values.
 // In the main function, the user is prompted to enter two numbers, which are then swapped using the swap function. The results are displayed before and after the swapping process.