#include<iostream>
using namespace std;
int main(){
    int a =10;
    int &b = a; // reference variable
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;  
    int c =a ;
    b++;//change in b will change a but not c because c is not reference variable
    cout<<c<<endl;
      cout<<a<<endl;

}