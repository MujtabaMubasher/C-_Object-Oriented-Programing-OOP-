#include<iostream>
using namespace std;

/*

 Virtual Function:

  A virtual Functions is a member function that you expect to redefined in derived class
  
 In C++ Object-Oriented Programming (OOP), virtual functions are member functions in a base class that can be overridden in derived classes. They enable polymorphism, which allows you to call derived class methods through a base class pointer or reference object.

 When you use a base class pointer or reference to call a virtual function, the derived class's version of the function is called, if it exists.

 Derived classes can override virtual functions to provide specific implementations.

  Note: Run time Polymorphism called Late Binding

  
*/


class Student{
    public:
    
    // A virtual function whos body is defined called Virtual Function
    virtual void studentGPA() {
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
    public:
    void studentGPA(){
        cout<< "GPA of International student class\n";
    }
};

int main()
{
  Student *ptr;
  LocalStudent objLs;
  InternationalStudent objIs;
  ptr = &objLs;
  ptr->studentGPA();
  ptr = &objIs;
  ptr->studentGPA();

  /*
    
    Note: 
    
    Parent class pointer point on the child class object when we call "ptr->studentGPA();" first ptr check that this "studentGPA()" functionality  available in his own student class if avilable then it call own functionality 

    If we want to call his child functionality then we make the parent class function "virtual" 

    When we make a "virtual function" in parent class  then in RAM "virtual function" entry  Load in "VTable"  

    If we make "Virtual Function" in parent Class first parent class ponter check that function in own class after that check that is "virtual function" Load in VTable. If existance found then parent didn't called virtual fuction from VTable. Its called the functionality from his child class 

    Imp: "We called child class functionality from Parent class pointer" 

  */
    return 0;
}
