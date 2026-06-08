#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//std::unordered_map in C++ is an associative container that stores key–value pairs with unique keys, 
//offering average constant-time complexity for search, insertion, and deletion. 
//Unlike map, it does not maintain sorted order; instead, elements are organized into buckets based on their hash values.
int main(){
    unordered_map<int,int> um;
    um.insert(make_pair(20,30));
    um.insert(make_pair(30,310));
    um.insert(make_pair(40,230));
    um.insert(make_pair(20,230));
    um.insert(make_pair(50,30));
    for(auto it=um.begin();it!=um.end();it++)
    cout<<it->first<<" "<<it->second<<endl;

     um[20]=70;//we can update since here keys are distinct

      for(auto it=um.begin();it!=um.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
}

//like this we can interpret the meaning of unordered_multimap()