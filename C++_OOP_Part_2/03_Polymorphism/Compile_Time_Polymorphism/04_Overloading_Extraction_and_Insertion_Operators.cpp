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
    float b;
 public:
    Test(){
      a = b = 0;
    }

    void setA(int a){
        this->a = a;
    }

    void setB(float b){
        this->b = b;
    }
   
   Test operator+(Test &obj){
      Test result;
      result.setA(this->a + obj.a);
      result.setB(this->b + obj.b);
      return result;
   }

   void display(){
      cout << "a: "<< this->a <<"\n";
      cout << "b: "<< this->b <<"\n";
   }
   friend istream& operator>>(istream &in,Test &obj);
   friend ostream& operator<<(ostream& out, Test &obj);
};

istream& operator>>(istream &in,Test &obj){
    cout<< "Enter the value of a: ";
    in>>obj.a;
    cout<< "Enter the value of b: ";
    in>>obj.b;
    return in;
}

ostream& operator<<(ostream& out, Test &obj){
    out<<"a: "<<obj.a<<"\n";
    out<<"b: "<<obj.b<<"\n";
    return out;
}


int main()
{
    Test t1;
    Test t2;
    /*
      Note: cin is the object of istream class and its called the >>operator function
    */
    cin>>t1;
    cin>>t2;
    Test t3;
    // Copy Constructor Will called
    t3 = t1 + t2;

    /*
      Note: cout is the object of ostream class and its called the <<operator function
    */
    cout<<t3;
    return 0;
}


/*


No, ostream and istream are not objects of the iostream class. Instead, they are separate classes that are part of the C++ Standard Library and serve different purposes:

1: istream:

  -> istream is a class that handles input operations.
  -> The standard input stream object cin is an instance of the istream class.

2: ostream:

  -> ostream is a class that handles output operations.
  -> The standard output stream object cout is an instance of the ostream class.

3: iostream:

  -> iostream is a class that handles both input and output operations.
  -> It is derived from both istream and ostream classes, meaning it inherits functionalities from both input and output stream classes.


4: Relationships
  -> iostream inherits from both istream and ostream:

  -> class iostream : public istream, public ostream {
    // This class can handle both input and output operations.
 };

5: Summary
  -> istream and ostream are classes, not objects.
  -> cin is an object (an instance) of the istream class.
  -> cout is an object (an instance) of the ostream class.
  ->iostream is a class that derives from both istream and ostream to handle both input and output operations.


 In essence, ostream and istream are fundamental classes in the hierarchy, and iostream builds upon them to create a class that can perform both input and output.

*/