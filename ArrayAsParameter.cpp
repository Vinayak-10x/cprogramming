#include<stdio.h>
#include<iostream>
using namespace std;


void fun(int *a, int n){
    a[1]=10;
    for(int i=0;i<n;i++){
        printf("%d   ",a[i]);
    }


    
}
 int main(){
    int arr[] = {2,5,6,8,7,4};
    fun(arr,6);
    cout<<endl<<"size of the array is: "<<sizeof(arr)/sizeof(int);
 }