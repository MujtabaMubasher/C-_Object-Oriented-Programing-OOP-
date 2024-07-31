#include <iostream>
using namespace std;

class Hero {

  // data members
  private:
  string name;
  public:
  
  // Constructor
  Hero(){
    cout << "Consturctor Called\n";
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
  cout << "Hi\n";
  Hero h1; 
  cout << "Mujtaba\n";
  
  // dynamic allocation 
  cout << "Hi\n";
  Hero *h2 = new Hero;
  cout << "Irtaza";


  

  return 0;
}