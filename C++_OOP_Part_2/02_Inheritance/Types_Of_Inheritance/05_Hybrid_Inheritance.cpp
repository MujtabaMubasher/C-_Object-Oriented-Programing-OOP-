#include<iostream>
using namespace std;

/*
 
 Hierarchical  Inheritance: It is a mixture of both the multiple and the multilevel inheritance. A class is derived from two or more classes, and one of the parent classes is not a derived class.

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

class Student: public Person {
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
        //cout << ", Subject: "<< this->subject;
        cout << ", CGPA: "<< this->cgpa << "]\n";
    }
    ~Student(){
     cout << "Student Class Distructor called\n";
   }
};

class TA: public Student, public Teacher{
    public:
    string teacherName;
   // string subject;

    TA(){
       cout << "TA Class Constructor called\n";
    }

    void print(){
        cout << "[ Name: "<< Student::name;
        cout << ", Teacher Name: "<< this->teacherName;
        cout << ", Subject: "<< this->subject;
        cout << ", Gender: "<< Student::gender;
        cout << ", Age: "<< Student::age;
        cout << ", Height: "<< Student::height;
        cout << ", Roll No: "<< this->roll_No;
        cout << ", CGPA: "<< this->cgpa << "]\n";
    }

    ~TA(){
       cout << "TA Class Distructor called\n";
    }

};


class CR: public Student{

    public:
    CR(){
        cout << "CR Class Constructor called\n";
    }

    void print(){
        cout << "[ Name: "<< this->name;
        cout << ", Gender: "<< this->gender;
        cout << ", Age: "<< this->age;
        cout << ", Height: "<< this->height;
        cout << ", Roll No: "<< this->roll_No;
        cout << ", CGPA: "<< this->cgpa << "]\n";
    }

    ~CR(){
     cout << "CR Class Distructor called\n";
   }
};

int main() {
    TA t1;
    t1.Student::name = "Mujatab Mubasher";
    t1.teacherName = "Sir Rana Waqas";
    t1.Student::gender = "Male";
    t1.Student::age = 24;
    t1.Student::height = 5.8;
    t1.roll_No = 2019;
    t1.cgpa = 2.51;
    t1.subject = "DSA";
    t1.print();

    Teacher t2;
    t2.name = "Sir Rana Waqas";
    t2.gender = "Male";
    t2.height = 6;
    t2.age = 33;
    t2.subject = "Programing Fundamentals";
    //t2.print();



    CR c1;
    c1.name = "Talha Naveed";
    c1.gender = "Male";
    c1.age = 24;
    c1.height = 5.8;
    c1.roll_No = 2019;
    c1.cgpa = 2.51;
    //c1.print();
    return 0;
}