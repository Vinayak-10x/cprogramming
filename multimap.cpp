#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*  The nuance between a map and multimap is that in a map, each key maps to exactly one value (though values can repeat across different keys). 
In a multimap, a single key can map to multiple values 
and both keys and values can repeat freely.
Map stores data in key-value pair
It uses  Red-black Tree or AVL for implementation
Insertion, deletion, and search operations have logarithmic time complexity i.e O(log(n)) making them fast for most use cases.*/

int main(){
    multimap<int,int>mm;
   
    mm.insert(make_pair(20,30));
    mm.insert(make_pair(30,310));
    mm.insert(make_pair(40,230));
    mm.insert(make_pair(20,230));
    mm.insert(make_pair(50,30));
    //mm[100]=60; these operations are not allowed in multimap
    //mm[20]=866;  these operations are not allowed in multimap

    for(auto it =mm.begin();it!=mm.end();it++)
    cout<<it->first<<" "<<it->second<<endl;


}