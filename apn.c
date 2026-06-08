#include<stdio.h>
int main(){
    int a,d,n;
    printf("Enter the first term, cd &n of the Arithmetic progression");
    scanf("\n%d%d%d",&a,&d,&n);
    int i=0;
    while(i<n){
        printf("%d ",a+i*d);
        i++;
    }

}