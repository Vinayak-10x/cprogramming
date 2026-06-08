/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float x,y;
    printf("Enter a number: \n");
    scanf("%f\n",&x);
    printf("AND Enter another number (for power): \n");
    scanf("%f",&y);
    printf("%.2f\n",y);
    printf("Ceil= %.2f\n",ceil(x));
    printf("Floor= %.2f\n",floor(x));
    printf("Absolute= %.2f\n",fabs(x));
    printf("sin(x)= %.2f\n",sin(x));
    printf("cos(x)= %.2f\n",cos(x));
    printf("tan(x)= %.2f\n", tan(x));
    printf("Power(x^y)= %.2f\n",pow(x,y));
    printf("Square root= %.2f\n",sqrt(x));
    printf("Cube root= %.2f\n",cbrt(x));
    printf("Exponetial= %.2f\n",exp(x));
    printf("Natural log= %.2f\n",log(x));
    printf("Log base 10= %.2f",log10(x));
   printf("\n%f  %f",x,y);
    

    return 0;
}