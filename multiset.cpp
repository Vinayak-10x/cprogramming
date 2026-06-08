#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//duplicate elements will be present 
//sorted order isme bhi hoga

int main(){
    multiset<int>ms;
    ms.insert(20);
 ms.insert(10);
  ms.insert(10);
   ms.insert(15);
    ms.insert(21);

    for(auto it = ms.begin();it!=ms.end();it++){ cout<<*it<<" ";}
    ms.erase(10);
    for(auto it = ms.begin();it!=ms.end();it++){ cout<<"\n"<<*it<<" ";}
}