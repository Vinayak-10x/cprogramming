#include<iostream>
#include<string>
using namespace std;


class Teacher{
//properties or attribute
private: 
float salary;
string name;



// methods or meber functions
public:
string dept;
string subject;
void changeDept(string newdept){
     dept = newdept;
}
//setter function, {since salary is private and it is not accessible outside the class & we want to access it and assign some value in it } 
void setSalary(float salary){
this->salary = salary;
}
//getter  function
void getinfo(){
    cout<<"salary: "<<salary<<endl;
    cout<<"name: "<<name<<endl;
}
//Non-paramerized constructor
/*Teacher(){
    dept= "Computer Science";

}*/

//parameterized constructor
Teacher(string n, string d, string s, double sal){
    name =n;
    dept =d;
    subject =s;
    salary =sal;
}

};
int main(){

    Teacher t1("vinayak","computer science", "dsa","56887.889");
    t1.setSalary(2000.57);
    t1.getinfo();
    cout<<t1.dept;

    
}



/* there are three type of Access Specifier in cpp oops concept and they are following
1. private: data & methods are accessible inside class
2. public: data & methods are accessible to eyeryone
3. protected: data & methods are accessible inside class & to its derived class, we will read basically more in depth in inheritance   */



/*                                 ENCAPSULATION
Encapuslation is wrapping up of data & member functions in a single unit called class.*/

/*                                  CONSTRUCTOR 
Special method invoked automatically at time of object creation. Used for Initialisation
. Same name as class
.Constructor doesn't have any return times 
.only called  once (automatically), at object creation
.Memory allocation happens when constructor is called 

there are basically 3 types of constructor
1.parameterized constructor
2.Non-parameterized constructor
3.copy constructor



*/

//                         IMPORTANT NOTE
//defining a class will not allocate a memory but creating a object of that class start allocating memory. 
//Defining a class = just a blueprint. You're telling the compiler:
//"Hey, a Teacher will have a name, salary, and dept."
//No memory is used yet. The blueprint just sits there.
//Creating an object = building the actual thing from the blueprint.
//Now memory is allocated in RAM.


