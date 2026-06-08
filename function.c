#include <stdio.h>
 int add( int a, int b ){
    int c = a+b;
    return c;
 }

 int main(){
    int x,y;
      printf("Enter two numbers:");
      scanf("%d%d",&x,&y);
      int sum =add(x,y);
    
    printf("sum of %d and %d is %d",x,y,sum);
    return 0;
   }
