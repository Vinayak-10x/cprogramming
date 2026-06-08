#include <iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec ={5,6,8,9};
vec.push_back(10);
vec.push_back(56);
vec.emplace_back(45);
vec.emplace_back(55);
vec.push_back(57);
vec.push_back(60);//to add new element at the end of the vector we use the function push_back() with dot operator to vector name where we are adding
vec.pop_back();
vec.pop_back();
vector<int> vec3 (5,10);//This create a vector of size 5 and all the values will be 10;
vector<int> vec2(vec);//to initialize a new vector say 'vec2' where elements are of another vector say 'vec'
vec2.push_back(67);
cout<<"Value at idex 3"<<vec.at(2)<<" or "<<vec[2]<<endl;// To print the value at index i in vector, we use 'vectorname.at(i)' or 'vec[i]'
cout<<"vector size: "<<vec.size()<<" "<<",vector capcity:"<<vec.capacity()<<endl;
cout<<endl<<"vec:";
for(int x :vec){
    cout<<x << " ";
}//the values of vec is not printed  because we have used  clear function for vec at line 44 of our code
cout<<endl<<"vec2: ";
for(int x :vec2){
    cout<<x << " ";
}
cout<<endl<<"vec3: ";
for(int x :vec3){
    cout<<x << " ";
}
vec2.erase(vec2.begin()+3);//vector.begin() is bascically like a pointer which points the address of  element of vector at index =0;
cout<<endl<<"vec2: ";
for(int x :vec2){
    cout<<x << " ";
}
cout<<endl;
vec2.erase(vec2.begin()+2, vec2.begin()+4);//this will erase a range of elements including extremely left index but expect the right index

vec2.insert(vec2.begin()+2,100);//insert function is used to insert a value in any index position in vector i.e insert(posit,value);
cout<<endl<<"vec2: ";
for(int x :vec2){
    cout<<x << " ";
}
vec.clear();
cout<<endl<<"vec: ";
for(int x :vec){
    cout<<x << " ";
}
cout<<"is vec empty: "<<vec.empty();

    return 0;
}