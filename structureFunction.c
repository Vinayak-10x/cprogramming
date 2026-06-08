#include<stdio.h>
#include <math.h>
struct Rectangle{
    int length;
    int breadth;

};
void initialize(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

void setLength(struct Rectangle *r, int l){
    r->length=l;
}

int area(struct Rectangle r){
    return r.length*r.breadth;
}

int main(){
    struct Rectangle r;
    initialize(&r,10,5);
    printf("Area of rectangle is %d\n",area(r));
    setLength(&r,20);
    printf("Area of rectangle is %d\n",area(r));
    return 0;

}