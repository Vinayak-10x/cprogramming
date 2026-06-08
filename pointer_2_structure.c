#include<stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
/*int main(){
    struct Rectangle R1=  {10,5};
    struct Rectangle *p=&R1;
    (*p).length=20; // change in length using pointer dereference operator
    p-> breadth= 10; // change in breadth using pointer arrow operator
    printf("length of rectangle = %d\n breadth of rectangle = %d\nArea of Ractangle= %d",R1.length,R1.breadth,(R1.length*R1.breadth));
}*/


//How to create a variable of type structure in heap memory using pointer to structure

int main(){
    struct Rectangle *p; // pointer to structure
    p= (struct Rectangle *)malloc(sizeof(struct Rectangle)); // allocating memory in heap for structure variable
    // p= new struct Rectangle; // alternative way to allocate memory in heap for structure variable using new operator in C++
    p->length= 20; // assigning value to length using pointer arrow operator
    p->breadth= 10; // assigning value to breadth using pointer arrow operator
    printf("length of rectangle = %d\n breadth of rectangle = %d\nArea of Rectangle= %d",p->length,p->breadth,(p->length*p->breadth));
    free(p); // deallocating memory after use
}