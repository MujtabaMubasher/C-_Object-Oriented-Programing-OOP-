#include <iostream>
#include <algorithm>
using namespace std;
 
 /*
   Note: Default Copy Constructor do Shellow Copy
 */

class Hero {

  // data members
  private:
  char level;
  public:
  string name;
  int *health = NULL; 
  
  
  // Constructor
  Hero(string name, int health, char level){
    cout << "Parameterized Consturctor Called\n";
    cout << "This Pointer Address " << this << "\n";
    this->name = name;
    this->health = new int;
    *(this->health) = health;
    this->level = level;
  }

  // Default Copy Constructor Called

  // Our Copy Constructor
 
  Hero(Hero &temp){

    this->name = temp.name;
    this->health = temp.health;
    this->level = temp.level;
    cout << "This Pointer Address in Copy Contructor  " << this << "\n";
    cout << "temp object Address in Copy Contructor  " << 
    &temp << "\n";
  }

  string getName(){
    return name;
  }
   
  int getHealth(){
    return *health;
  }

  char getLevel(){
    return level;
  }

  void setName( string name){
    this->name = name;
  }

  void setHealth(int health){
    *(this->health) = health;
  }
  void setLevel(char level){
    this->level = level;
  }
  void print(string name){
    cout<< "\nPrinting Values of " << name << " Object\n";

    cout << "[ name: " << this->name << ", health: "<< 
    *(this->health) << ", level: "<< level << "]\n"; 
  }

};

int main(){ 

  // Shellow Copy
  Hero h1("Mujtaba", 80, 'A');
  h1.print("h1");
  
  Hero h2(h1);
  cout << "Address of h2 object "<< &h2 << "\n";
  cout << "Address of h1 object "<< &h1 << "\n";
  h2.name = "Irtaza"; 
  h2.print("h2");

  *h1.health = 200;

  h1.print("h1");
  h2.print("h2");

 
 
 /*
   Note: 
    1: Default Copy Constructor Or Over Loaded Copy Contructor creates a Shellow Copy.
    2: Shellow Copy is good when all data members of object using stack memory. 
    3: Shellow Copy Creates Problem when any of data members using heap memmory
    4: When we use heap memory we should creates our copy cosntructor and create new memory in heap for pointer variable in our Copy Contructor  
 */
}