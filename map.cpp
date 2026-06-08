#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* In map value can be duplicate but the key can only be unique 
Map stores data in key-value pair
It uses  Red-black Tree or AVL for implementation
Insertion, deletion, and search operations have logarithmic time complexity i.e O(log(n)) making them fast for most use cases.

*/
int main(){
    //map creation
    map<int,int> m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(300,400));
    m.insert(make_pair(12,310));
    m.insert(make_pair(5,310));
    m.insert(make_pair(20,23));
    m.insert(make_pair(100,670));
    m[100]=60;// can be inserted value from this type, this is  also used to  update the value
    m[101]=90;// but this type of operation is not allowed in multimap because there can be same keys then how can it detect in which key u want to update
    for(auto it = m.begin(); it!=m.end();it++){
        cout<<it->first<<" "<<(*it).second<<endl;
    } 
    cout<<endl;
    if (m.count(100))
    cout<<m[100]<<" ";
    m.erase(5);
    
}







