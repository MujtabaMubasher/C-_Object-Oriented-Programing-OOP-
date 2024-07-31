#include<iostream>
using namespace std;

/*
 
 Polymorphism: (Poly means many & morph means forms)

 When a single thing is existing in multiple forms then we called Polymorhism

                    OR

 Polymorphism is the ability of objects to take on different forms or behaves in different ways depending on the context in which they are used 

 Compile_Time_Polymorphism:

 Compile-time polymorphism, also known as static polymorphism, is achieved in C++ through function overloading and operator overloading. It is called compile-time polymorphism because the method to be invoked is determined at compile time rather than at runtime.

 Operator Overloading:

 Operator overloading is a feature in C++ that allows you to redefine the way operators work for user-defined types (such as classes). 
 
 This means you can specify how operators like +, -, *, ==, and others behave when applied to objects of your classes. 
 
 It provides a way to make user-defined types behave more like built-in types, improving code readability and usability.

 You can overload most of the operators in C++. Some common operators that can be overloaded include:

  Arithmetic operators: +, -, *, /, %
  Comparison operators: ==, !=, <, >, <=, >= 
  Assignment operator: =
  Increment and decrement operators: ++, --
  Subscript operator: []
  Function call operator: ()
  Stream insertion and extraction operators: <<, >>
 
 Restrictions:

 You cannot overload operators for built-in types.
 Certain operators, such as

  . (member access)
  .* (member access through pointer to member) 
  :: (scope resolution) 
  ?: (ternary conditional)

  Note: Compile time Polymorphism called Early Binding
 

*/

class Test{
   int a;
   double b;
   public:
   Test(){

   }
   Test(int a, double b){
        this->a = a;
        this->b = b;
   }
   void setA(int a){
      this->a = a;
   }
   void setB(double b){
      this->b = b;
   }
   Test operator+ (Test &obj){
        Test result;
        result.setA(this->a + obj.a);
        result.setB(this->b + obj.b);
        return result;
   }

   Test operator-(Test &obj){
       Test result;

       result.setA(this->a - obj.a);
       result.setB(this->b - obj.b);
       return result;
   }

   void display(){
     cout << "a = " << this->a<<"\n";
     cout << "b = " << this->b<<"\n";
   }

};


int main()
{
    Test t1(5, 7.5);
    Test t2(9, 15.2);
      /*
        // Here t1 & t2 are oprends

        Note: t1 calling +Operator & t2 become the argument

      */  
    Test t3 = t1 + t2;
    Test t4 = t1 - t2;

    t3.display();
    t4.display();


    
    return 0;
}
