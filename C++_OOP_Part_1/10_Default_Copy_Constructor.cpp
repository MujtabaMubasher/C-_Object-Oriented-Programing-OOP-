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

  // Default Copy Constructor Will Called

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
  void print(string name){
    cout<< "Printing Values of " << name << " Object\n";
    cout << this->name<< "\n";
    cout << health<< "\n";
    cout << level<< "\n";
  }

};

int main(){

  Hero h1("Mujtaba", 80 ,'C');
  h1.print("h1");

  Hero h2(h1);
  h2.print("h2");
  return 0;
}