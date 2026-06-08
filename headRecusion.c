#include <stdio.h>
  void fun1(int n){
    if(n>0)
    fun1(n-1);//Head recursion 
    printf("%d",n);
  }

  int main(){
    int x= 5;
    fun1(x);
    
    
    return 0;
  }