#include<iostream>
using namespace std;
/*

Ambiguity:
    Inheritance ambiguity in C++ occurs when a derived class inherits from multiple base classes that have a member with the same name. This can cause the compiler to be unsure of which member to use, leading to ambiguity.

*/

class A{
    public:
    void func(){
        cout << "I am A\n";
    }
};

class B{
    public:

    void func(){
        cout<< "I am B\n";
    }
};

class C: public A, public B{

};
int main() {
 C obj;
 
 // Scope Resolution Operator 
 obj.A::func();
     
    return 0;
}