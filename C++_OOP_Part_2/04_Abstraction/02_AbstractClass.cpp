#include<iostream>
using namespace std;

/*

 Abstract Class:
  ->  A class which have one or more pure Virtual Function but not all
  -> Abstract class are use to privide the base class from which other class can be derived
  -> They cannot be instantiated but can be use for  inheritance
  -> Abstract classes are typically use to define an intetface fro derived classes

  -> Abstract Class is blue Print for Derived Classes


*/

class Employee{
    protected:
    int salary;
    public:
    Employee(int salary){
        this->salary = salary;
    }

    // A virtual function whos body is not defined called pure Virtual Function
    virtual void computeTex() = 0;

    void display(){
        cout<< "Salary is: "<< salary<<"\n";
    }
};

class Faculty: public Employee{
    public:

    // Base Initialization List
    Faculty(int salary): Employee(salary){
         
    }
    void computeTex(){
       salary = salary - (salary*0.05);
    }
};

int main()
{
    Employee *ptr;
    Faculty objF(50000);

    ptr = &objF;

    ptr->computeTex();
    ptr->display();

    return 0;
}
