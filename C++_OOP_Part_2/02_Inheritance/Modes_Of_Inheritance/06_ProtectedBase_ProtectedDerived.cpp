#include <iostream>
using namespace std;

/*
 Protected Acces Modifier:
 If we have a Private Property and we only want to Inherit to an Other class we use Protected Access Modifier

 Note: We can only access Protected Keyword only Within the class Or in Child Class

 If Protectedly inherited, protected members will be protected

*/

class Person{
   
   protected:
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

class Student: protected Person{
    public:
    int roll_No;
    double cgpa;

    //Simple Constructor
    Student(){

    }

   //Parametrized Constructor Called
    Student(string name, string gender, int age, int height){
      cout << "Child Class Constructor called\n";
      this->name = name;
      this->gender = gender;
      this->age = age;
      this->height = height;
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
    Student s1("Mujtaba Mubasher", "Male", 24, 5.8);
   
    //Student s1;
    // s1.name = "Mujatab Mubasher";
    // s1.gender = "Male";
    // s1.age = 24;
    // s1.height = 5.8;
    s1.roll_No = 2019;
    s1.cgpa = 2.51;
    s1.print();
    return 0;
}
   