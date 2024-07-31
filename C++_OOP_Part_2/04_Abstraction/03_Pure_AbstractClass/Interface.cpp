#include<iostream>
using namespace std;

/*

 Pure Abstract Class/Interface:
  ->  A class which in which all function is pure Virtual
  -> Pure Abstract class are use to privide the base class from which other class can be derived
  -> They cannot be instantiated but can be use for  inheritance
  -> Pure Abstract classes are typically use to define an intetface fro derived classes

  -> Abstract Class is blue Print for Derived Classes

*/

class Employee{
    protected:
    int salary;
    public:
    // A virtual function whos body is not defined called pure Virtual Function
    virtual void computeTex() = 0;
    virtual void display() = 0;
};

class Faculty: public Employee{
    public:

    // Base Initialization List
    Faculty(int salary){
        this->salary = salary;
    }
    void computeTex(){
       salary = salary - (salary*0.05);
    }

    void display(){
        cout << "alary is: "<< salary<<"\n";
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
