#include <iostream>
using namespace std;

/*
 
 Multilevel Inheritance: When we have a derived class which is  already derived from an other class such inheritance called Multilevel Inheritance

 Advantages of inheritance:
    
  1: The time it takes to design an application is reduced.
  2: The application uses less memory.
  3: The time it takes for an application to run is reduced.
  4: The performance of the application has been improved 
  5: The code's redundancy (repetition) is decreased or eliminated, resulting in more consistent outputs and  lower storage costs.

*/

class Person{
   
   public:
   string name;
   string gender;
   int age;
   int height;
   Person(){
     cout << "Person Class Constructor called\n";
   }
   
   ~Person(){
     cout << "Person Class Distructor called\n";
   }
};

// Syntex: derived_class : Mode_of_Inheritance base_class

class Teacher: public Person{
    public: 
    string subject;
    Teacher(){
       cout << "Teacher Class Constructor called\n";
    }
    void print(){
        cout << "[ Name: "<< this->name;
        cout << ", Gender: "<< this->gender;
        cout << ", Age: "<< this->age;
        cout << ", Height: "<< this->height;
        cout << ", Subject: "<< this->subject << "]\n";;
    }
    ~Teacher(){
       cout << "Teacher Class Distructor called\n";
    }
};

class Student: public Teacher{
    public:
    int roll_No;
    int cgpa;
    Student(){
        cout << "Student Class Constructor called\n";
    }
    void print(){
        cout << "[ Name: "<< this->name;
        cout << ", Gender: "<< this->gender;
        cout << ", Age: "<< this->age;
        cout << ", Height: "<< this->height;
        cout << ", Roll No: "<< this->roll_No;
        cout << ", Subject: "<< this->subject;
        cout << ", CGPA: "<< this->cgpa << "]\n";
    }
    ~Student(){
     cout << "Student Class Distructor called\n";
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
    s1.subject = "DSA";
    s1.print();

    Teacher t1;
    t1.name = "Sir Rana Waqas";
    t1.gender = "Male";
    t1.height = 6;
    t1.age = 33;
    t1.subject = "Programing Fundamentals";
    t1.print();
    return 0;
}