#include<iostream>
using namespace std;

/*
 When we create static function its only use to access the
 static data members in the class  
 
*/

class Temp{    
    static int count;
    int x;
    public:
    Temp(){
        x = 0;
        count++;
        x++;
    }
    static int  getCount(){
        return count;
    }
    int getX(){
        return x;
    }
};

int Temp:: count = 0;
int main()
{
  Temp t1,t2,t3,t4,t5;
  cout << Temp::getCount()<<"\n";
  cout<< t1.getCount()<< "\n";
  cout << t1.getX()<<"\n";

//   cout << t1.getCount()<<"\n";
//   cout << t2.getCount()<<"\n";
//   cout << t3.getCount()<<"\n";
//   cout << t4.getCount()<<"\n";
//   cout << t5.getCount()<<"\n";  
    return 0;
}
