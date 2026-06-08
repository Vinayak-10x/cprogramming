#include<iostream>
#include<unordered_set>
using namespace std;



//it cotains only unique elements
// Search, insert and removal have average constant time complexity i.e. O(1)
//It uses hashing technique to acheive it

int main(){
    unordered_set<int>s;  // you can access the duplicate element also in an unordered way if you write "unordered_multiset" in place of "unordered_set". 
    s.insert(20);
     s.insert(25);
      s.insert(21);
       s.insert(70);
        s.insert(29);
         s.insert(20);
          s.insert(64);

          for(auto it = s.begin();it!=s.end();it++){
            cout<<*it<<" ";
          }
}


//Summary for set
/*   There are 4 types of set : set, multiset, unordered_set and unordered_multiset
set : unique element, sorted
multiset : sorted but can contain duplicate element
unordered_set: unique but unordered
unorder_multiset: unordered and can contain duplicate element


*/