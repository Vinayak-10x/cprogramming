#include<iostream>
#include<stdio.h>

using namespace std;


int* fun(int size)        // pointer return karta hai
{
    int *p;               // pointer declare kiya
    p = new int[size];    // heap pe array banaya
//p= (int*)malloc(size*sizeof(int));  // heap pe array banana (C style)
    for(int i=0; i<size; i++)
        p[i] = i+7;       // values fill ki

    return p;             // pointer return kiya
}

int main()
{
    int *ptr, sz=5;
    ptr = fun(sz);        // pointer receive kiya

    for(int i=0; i<sz; i++)
        cout << ptr[i] << endl;  // values print ki

    return 0;
}