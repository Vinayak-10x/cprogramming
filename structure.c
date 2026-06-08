#include<stdio.h>

struct rectangle {
    int length;
    int width;

};
int main(){
struct rectangle r1;    
r1.length=10;
r1.width=25;
printf("perimeter of rectangle = %d\n Area of the rectangle= %d",2*(r1.length+r1.width),r1.length*r1.width);

}
