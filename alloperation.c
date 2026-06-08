#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("sum of %d and %d is %d\n",a,b,a+b);
    printf("\nsubtraction of %d and %d is %d",a,b,a-b);
    printf("\nmultiplication of %d and %d is %d",a,b,a*b);
    printf("\ndivision of %d and %d is %d",a,b,a/b);
    printf("\npower of %d and %d is %lf",a,b,pow(a,b));
    return 0;                   
}