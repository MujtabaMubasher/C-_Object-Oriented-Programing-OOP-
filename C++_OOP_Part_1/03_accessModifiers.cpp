#include <iostream>
using namespace std;
 /*
   There are three types of access modifier in OOP
   1. Private
   2. Public
   3. Protected

   Note: By default in class all data members is private
 */
class Hero {
    // data members
    private: // Only Accessible in class 
    string name; 
    public: // Accessible inside or Outside of class 
    int health; 
    char level;

    void print(){
        name = "mujtaba";
        cout << name << "\n";
    }

};

int main(){
  Hero h1;
  h1.health = 45;
  h1.level = 'A';
  h1.print();
  cout << h1.health<<"\n";
  cout << h1.level<<"\n";

    return 0;
}