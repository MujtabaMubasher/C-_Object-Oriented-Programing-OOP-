#include<iostream>
using namespace std;
/*
 There are Two ways to passing an object in function
  -> Pass by value
  -> pass by refrence

*/

class Temp{
    int id;
    string name;
   public:
    Temp(int id, string name){
        this->id = id;
        this->name = name;
    }

    void setId(int id){
       this->id = id;
    }
    void setName(string name){
       this->name = name;
    }

    int getID(){
        return id;
    }

    string getName(){
        return name;
    }
};

// Pass by Value
void display(Temp obj){
   cout << "Name: "<< obj.getName()<< "\n";
   cout << "ID: "<< obj.getID()<< "\n";
   obj.setId(30);
   obj.setName("Irtaza Mubasher");
   
   cout << "Name: "<< obj.getName()<< "\n";
   cout << "ID: "<< obj.getID()<< "\n";
}
// Pass by Refrence
void getInfo(Temp &obj){
   cout << "Name: "<< obj.getName()<< "\n";
   cout << "ID: "<< obj.getID()<< "\n";
   obj.setId(30);
   obj.setName("Irtaza Mubasher");
}
int main()
{
    Temp t(12, "Mujtaba Mubasher");
    getInfo(t);
   
   cout << "Main Object Name: "<< t.getName()<< "\n";
   cout << "Main Object ID: "<< t.getID()<< "\n";
    return 0;
}
