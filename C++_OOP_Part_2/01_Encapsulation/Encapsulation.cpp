#include<iostream>
using namespace std;
/*
 
 Encapsulation:
  It is a wrapping up a Data & Member Funstions in to a single unit called class

  Advantages:
   1: Information Hiding (Data Hiding) with the help of access modifier(Private & Protected) to main security
   2: We can make the class Read only
   3: Code Reuseability
   4: Encapsulation code is better for unit testing
    

*/

class Account {
  private:
  int balance = 15000;
  int password;
  public:
  string name;
  int account_No;
  
  int getBalance(){
    return this->balance;
  }
  int getPassword()
  {
    return this->password;
  }


};

int main() {
    Account acc;
    cout << "Balace is " << acc.getBalance() << "\n";
    return 0;
}