#include<iostream>
using namespace std;

/*
 When we create static varibale its create sperately in side the Ram Which is Sahred Memory 

 When fun is call in the call stack atatic varible create one time when fun out the call stack X variable still exist in memoey when we call again fun in call stack its use that static varible which already declared in shared memory  
*/

class Temp{    
    public:
    static int  count;
    Temp(){
        //count = 0;
        count++;
    }
    int getCount(){
        return count;
    }
};

int Temp:: count = 0;
int main()
{
  Temp t1,t2,t3,t4,t5;
  
  cout << Temp::count<<"\n";

//   cout << t1.getCount()<<"\n";
//   cout << t2.getCount()<<"\n";
//   cout << t3.getCount()<<"\n";
//   cout << t4.getCount()<<"\n";
//   cout << t5.getCount()<<"\n";  
    return 0;
}
