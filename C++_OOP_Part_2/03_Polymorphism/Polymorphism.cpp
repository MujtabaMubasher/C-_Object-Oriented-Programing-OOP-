#include <iostream>
using namespace std;

/*
 
 Polymorphism: (Poly means many & morph means forms)

 When a single thing is existing in multiple forms then we called Polymorhism

                    OR

 Polymorphism is the ability of objects to take on different forms or behaves in different ways depending on the context in which they are used 
 

*/

class Student{
   public:
   string name;
   int rollNo;
   
   Student(){
      cout << "\nSimple Constructor Called\n";
      cout << "\nPrinting Garbage Values\n";
      cout << "Name: " << this->name<<"\n";
      cout << "Roll No: " << this->rollNo<<"\n";
   }
   Student(string name, int rollNo){
      cout << "\nParameterized Constructor Called\n";
      this->name = name;
      this->rollNo = rollNo;
      cout << "Name: " << this->name<<"\n";
      cout << "Roll No: " << this->rollNo<<"\n";
   }
};


int main(){
 Student s1, s2("Mujtaba Mubasher", 267);
    return 0;
}