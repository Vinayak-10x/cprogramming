#include <stdio.h>
int swap(int a,int b){
   
    int temp = a;
    a=b;
    b= temp;
}

int main(){
    int x=10;
    int y=20;

    swap(x,y);

    printf("x=%d y=%d",x,y);

}
//in pass by value, the value of x and y is not changed in the main function because the swap function is working with copies of x and y.
// The original values of x and y in the main function remain unchanged.