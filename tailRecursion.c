#include <stdio.h>
  void fun1(int n){
    if(n>0)
    printf("%d",n);
    fun1(n-1);//tail recursion 
  }

  int main(){
    int x= 5;
    fun1(x);
    
    return 0;
  }