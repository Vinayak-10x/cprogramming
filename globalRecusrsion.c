#include<stdio.h>
int x=0;
//global variable can be accessed by any function from their entire program of any certain program file.
//There is only one copy of global variable exist and this is only copy utilised everywhere where it is needed.
int fun(int n){
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;

}

int main(){
int r;
r = fun(5);
int y;
y = fun(5);
printf("r =%d y = %d",r,y);
return 0;
}