#include <iostream>
using namespace std;

/*
 

 If Publically inherited, Private members will Not Inherited

*/

class Person{
   
   private:
   string name;
   string gender;
   int age;
   int height;
   public:

   //Parametrized Constructor Called
   Person(string name, string gender, int age, int height){
      cout << "Parent Class Constructor called\n";
      this->name = name;
      this->gender = gender;
      this->age = age;
      this->height = height;
   }

   string getName(){
    return this->name;
   }
   string getgender(){
    return this->gender;
   }
   int getAge(){
    return this->age;
   }
   int getHeight(){
    return this->height;
   }
   
   ~Person(){
     cout << "Parent Class Distructor called\n";
   }
};

// Syntex: derived_class : Mode_of_Inheritance base_class

class Student: public Person{
    public:
    int roll_No;
    double cgpa;

    
   //Parametrized Constructor Called
    Student(string name, string gender, int age, int height): Person(name, gender, age, height){
      cout << "Child Class Constructor called\n";
      
    }
    void print(){
      cout << "[ Name: "<< this->getName();
      cout << ", Gender: "<< this->getgender();
      cout << ", Age: "<< this->getAge();
      cout << ", Height: "<< this->getHeight();
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