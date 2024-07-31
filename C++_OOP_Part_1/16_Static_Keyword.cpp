#include <iostream>
#include <algorithm>
using namespace std;
 
 /*
   Note: 
   1: Static Keyword Belongs to class
   2: Its Independent & its does not belongs to Class Datamembers
   3: For Accessing the Static Keyword from the class does not need to create Object
   4: 
 */

class Hero {

  // data members
  private:
  char level;
  public:
  string name;
  int *health = NULL; 
  static int timeToComplete;
  
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
// :: => Sope Resolution Operator
int Hero::timeToComplete = 5;

int main(){ 
 
 cout << Hero::timeToComplete<<"\n";

 // We can Also Access Static Variable with Object But its not Good Practice

 Hero h2;

 cout << h2.timeToComplete << "\n";
 
}
