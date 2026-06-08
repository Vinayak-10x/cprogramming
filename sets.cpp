#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// In set only unique value is stored 
//Store value in sorted order (default ascending)
//Insertion, deletion and search operations have logarithmic
// (O(logn)), making them fast for most use cases.
//Generally Implemented using Red-Black tree or avl trees
//We can sort it in descending order also using greater<type>

int main(){
    set<int> s;  // set creation

    //insertion
    s.insert(20);
    s.insert(90);
    s.insert(85);
    s.insert(20);
    s.insert(89);
    s.insert(89);
    s.insert(78);

    //print value stored in set
    for(auto it=s.begin(); it!=s.end();it++){
        cout<<*it<<" "<<endl;
    }

    //delete
    s.erase(89);
     
    //search the element
    //find function return the iterator of that number
    if(s.find(89)!= s.end())
    cout<<"Present\n";
    else 
    cout<<"Absent\n";
    //count function check existence of element
    cout<<s.count(20);


    
    
    
    
    return 0;
    
}

/*  function of set                  description
        insert()                add element
        erase()                  REmove element
       find()                       search element
        count()                  check existence
        size()                   Number of elements
        empty()                  check if empty
        clear()                   Remove all elements
        begin()                    Iterator to first element
        end()                    iterator to next of last
        rbegin()               iterator to last element
        rend()                  iterator pointing before the first element

        
        */