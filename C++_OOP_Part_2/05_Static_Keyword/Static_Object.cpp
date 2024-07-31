#include<iostream>
using namespace std;

/*
 When we create static object its remaines in memory until the whole execution of the program completed 
 
*/

class Temp{    
    public:
    Temp(){
        cout << "Contructor Called\n";
    }

    ~Temp(){
        cout << "Distructor Called\n";
    }
};

void fun1(){
   Temp t1;
}
void fun2(){
   static Temp t1;
}
int main()
{
    fun1();
    fun2();
    cout << "Main function ends\n";
    return 0;
}
