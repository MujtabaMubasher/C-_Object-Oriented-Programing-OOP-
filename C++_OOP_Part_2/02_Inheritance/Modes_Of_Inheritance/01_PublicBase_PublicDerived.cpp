#include <iostream>
using namespace std;

/*
 
 If publicly inherited, public members will be public

*/

class Person{
   
   public:
   string name;
   string gender;
   int age;
   int height;
   Person(){
     cout << "Parent Class Constructor called\n";
   }
   
   ~Person(){
     cout << "Parent Class Distructor called\n";
   }
};

// Syntex: derived_class : Mode_of_Inheritance base_class

class Student: public Person{
    public:
    int roll_No;
    int cgpa;
    Student(){
      cout << "Child Class Constructor called\n";
    }
    void print(){
      cout << "[ Name: "<< this->name;
      cout << ", Gender: "<< this->gender;
      cout << ", Age: "<< this->age;
      cout << ", Height: "<< this->height;
      cout << ", Roll No: "<< this->roll_No;
      cout << ", CGPA: "<< this->cgpa << "]\n";
    }
    ~Student(){
     cout << "Child Class Distructor called\n";
   }
};



int main() {
    Student s1;
    s1.name = "Mujatab Mubasher";
    s1.gender = "Male";
    s1.age = 24;
    s1.height = 5.8;
    s1.roll_No = 2019;
    s1.cgpa = 2.51;
    s1.print();
    return 0;
}