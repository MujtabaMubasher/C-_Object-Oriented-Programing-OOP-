#include <iostream>
using namespace std;
 /*
   
   *This pointer has a address of current object
 
 */
class Hero {

  // data members
  private:
  string name;
  public:
  
  // Parameterized Constructor
  Hero(string name, int health, char level){
    cout << "Parameterized Consturctor Called\n";
    cout << "This Pointer Address " << this << "\n";
    this->name = name;
    this->health = health;
    this->level = level;
  }

  int health; 
  char level;

  string getName(){
    return name;
  }
   
  int getHealth(){
    return health;
  }

  char getLevel(){
    return level;
  }

  void setName( string str){
    name = str;
  }

  void setHealth(int h){
    health = h;
  }
  void setLevel(char l){
    level = l;
  }
  void print(){
    cout << name<< "\n";
    cout << health<< "\n";
    cout << level<< "\n";
  }

};

int main(){

  // static allocation
  Hero h1("Mujtaba Mubasher", 95 , 'A'); 
  h1.print();
  cout << "Address of h1 Object " << &h1 << "\n";
  
  // dynamic allocation 
  Hero *h2 = new Hero("Irtaza Mubasher", 100 , 'B');
  h2->print();
  cout << "Address of h2 Object " << h2 << "\n";

  return 0;
}