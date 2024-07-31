#include<iostream>
using namespace std;

/*
 
 Polymorphism: (Poly means many & morph means forms)

 When a single thing is existing in multiple forms then we called Polymorhism

                    OR

 Polymorphism is the ability of objects to take on different forms or behaves in different ways depending on the context in which they are used 

 Compile_Time_Polymorphism:

 Compile-time polymorphism, also known as static polymorphism, is achieved in C++ through function overloading and operator overloading. It is called compile-time polymorphism because the method to be invoked is determined at compile time rather than at runtime.

 Function Overloading:

 Also known as static polymorphism, it is achieved by function overloading or operator overloading.

 In function overloading, two or more functions can have the same name but different parameters. The compiler decides which function to use based on the function signature (name and number/type of parameters).

 Note: Function Overloading Only depends on the (name and number/type of parameters) didn't depend on the type of Function

 Note: Compile time Polymorphism called Early Binding
 

*/

class AddNumbers{
    public:

    void sum(){
        cout << "Void Type Function Called\n";
    }

    int sum(int a , int b){
        cout << "Integer Type Function Called\n"; 
        return a+b;
    }

    double sum(double a, double b){
        cout << "Double Type Function Called\n";
        return a + b;
    }

    // We can also Define function with Default Parameters

};

int main()
{
    AddNumbers obj;
    //obj.sum();
    cout<<obj.sum(10,45)<<"\n";
    cout<<obj.sum(10.15,45.65)<<"\n";
    return 0;
}
