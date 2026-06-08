#include<bits/stdc++.h>
using namespace std;
// push_back(),push_front(),size,pop_back(),pop_front
int main(){
    list<int>l;
    l.push_back(30);
    l.push_front(89);
    l.push_back(99);
    l.pop_back();
    l.push_back(45);
    l.pop_front();
    l.push_back(80);
    l.push_front(40);
    /*cout<<l.front()<<" "<<l.back()<<" "<<endl;
    cout<<l.size()<<" "<<endl;*/

    //print list from front
    cout<<"from front"<<endl;
    for(list<int>::iterator it=l.begin(); it != l.end();it++)
    cout<<*it<<" "<<endl;

    //print list from back
    cout<<"from back"<<endl;
    for(auto it = l.rbegin(); it != l.rend(); it++)
        cout<<*it<<" "<<endl;
//auto likhne se machine khud hi samjh jaayega ki iterator it kis type ka hai

}

