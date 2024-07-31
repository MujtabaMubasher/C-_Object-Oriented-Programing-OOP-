#include <iostream>
#include <algorithm>
using namespace std;
 
 /*
   Note: 
   1: Dectructor has same class name
   2: It has no parameter
   3: It has no Return type
   4: Every Class has a default destructor

   Note: Destructor will automatically call when object being out of scope

   Note: For Statically Allocation of Object Destructor will call automatically
   But for Dinamically Allocation of Object Destructor will call Manually 
 */

class Hero {

  // data members
  private:
  char level;
  public:
  string name;
  int *health = NULL; 
  
  // Default Constructor
  Hero(){
    cout << "Default Consturctor Called\n";
  }
  
  // Over Loaded Constructor
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
    health = new int;
    *(this->health) = *(temp.health);
    this->level = temp.level;
    // cout << "This Pointer Address in Copy Contructor  " << this << "\n";
    // cout << "temp object Address in Copy Contructor  " << 
    // &temp << "\n";
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

  // Destructor
  ~Hero(){
    cout << "Destructor Called\n";
  }

};

int main(){ 
 
 // Statically Allocation
  Hero h1;
 
 // Dynamically Allocation

  Hero *h2 = new Hero;
  // Calling destructor manually
  // Destructor will call in reverse Order
  delete h2;
 
 /*
   Note: 
    1: Default Copy Constructor Or Over Loaded Copy Contructor creates a Shellow Copy.
    2: Shellow Copy is good when all data members of object using stack memory. 
    3: Shellow Copy Creates Problem when any of data members of object using heap memmory
    4: When we use heap memory we should creates our copy cosntructor and create new memory in heap for pointer variable in our Copy Contructor  
 */
}
