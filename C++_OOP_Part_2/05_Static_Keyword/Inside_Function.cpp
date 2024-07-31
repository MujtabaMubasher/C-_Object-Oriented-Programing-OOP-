#include<iostream>
using namespace std;

/*
 When we create static varibale its create sperately in side the Ram Which is Sahred Memory 

 When fun is call in the call stack atatic varible create one time when fun out the call stack X variable still exist in memoey when we call again fun in call stack its use that static varible which already declared in shared memory  
*/

void fun(){
    static int  x = 0;
    cout<< "X : "<< x<<"\n";
    x++;
}
int main()
{
    fun();
    fun();
    fun();
    fun();
    fun();
    return 0;
}
