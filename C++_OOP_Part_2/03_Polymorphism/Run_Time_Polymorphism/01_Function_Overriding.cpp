#include<iostream>
using namespace std;

/*
  Parent & Child both contain the same function with different implementation

  The parent class function said to be overriding

  Note: Run time Polymorphism called Late Binding

  Rules for Function Overriding:
  
   -> The Method of parent class and method of child class must have same Name
   -> The method of parent class and child class must have ame parameters
   -> It is possible through Inheritance only
*/
class Student{
    public:

    void studentGPA(){
        cout<< "GPA of student class\n";
    } 
};

class LocalStudent: public Student{
   public:
   void studentGPA(){
        cout<< "GPA of Localstudent class\n";
    }
};

class InternationalStudent: public Student{
    // public:
    // void studentGPA(){
    //     cout<< "GPA of International student class\n";
    // }
};

int main()
{
  InternationalStudent Is;
  LocalStudent Ls;
  Ls.studentGPA();
  Is.studentGPA();
    return 0;
}
