#include <iostream>
using namespace std;

 // Getter only use for getting the values 
 /* Setter is use for set the values for class Private Data Members on the certain given Condition*/ 

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
  Hero h1;
  h1.setName("Mujtaba Mubasher");
  h1.setHealth(95);
  h1.setLevel('B');
  //h1.print();

  cout << h1.getName()<< "\n";
  cout << h1.getHealth()<< "\n";
  cout << h1.getLevel()<< "\n";

    return 0;
}