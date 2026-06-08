#include<stdio.h>
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;      
}
 int main(){
    int x,y;
    printf("Enter the number you want to swap: ");
    scanf("%d%d",&x,&y);


    swap(&x, &y);

    printf("x=%d y=%d",x,y);    
    return 0;
 }

 // In pass by address, the swap function takes pointers to x and y, allowing it to modify the original values of x and y in the main function.