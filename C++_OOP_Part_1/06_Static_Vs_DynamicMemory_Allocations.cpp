#include <iostream>
using namespace std;

class Hero {
    // data members
    private:
    string name;
    public:
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
  
  Hero h1;
  h1.health = 90;
  h1.level = 'A';
  h1.setName("Mujtaba Mubasher");

  cout << "Name is " << h1.getName()<<"\n";
  cout << "Health is " << h1.health<<"\n";
  cout << "Level is " << h1.level<<"\n";

  // dynamic allocation 
  
  Hero *h2 = new Hero;

  h2->setName("Irtaza Mubasher");
  h2->health = 80;
  h2->level = 'B';

  cout << "Name is " << (*h2).getName()<<"\n";
  cout << "Health is " << (*h2).health<<"\n";
  cout << "Level is " << (*h2).level<<"\n";
          // Altrenative Way
  cout << "Name is " << h2->getName()<<"\n";
  cout << "Health is " << h2->health<<"\n";
  cout << "Level is " << h2->level<<"\n";


    return 0;
}