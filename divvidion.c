#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    if(b==0)
    {
        printf("Division by zero is not allowed.");
    }
    else
    {
        printf("The result of %d divided by %d is: %.2f",a,b,(float)a/b);
    }
    return 0;
}
