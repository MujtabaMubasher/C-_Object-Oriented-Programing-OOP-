#include<iostream>
using namespace std;

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

    friend void display(Temp &obj);
    friend void getInfo(const Temp &obj);
};

// Pass by Refrence
// Friend Function

void display(Temp &obj){
   cout << "Name: "<< obj.getName()<< "\n";
   cout << "ID: "<< obj.getID()<< "\n";
   obj.id = 50;
   obj.name = "Sir Rana Waqas";

  // cout<< &obj.id;

}

//Using const Keyword
void getInfo(const Temp &obj){
   cout << "Name: "<< obj.id<< "\n";
   cout << "ID: "<< obj.name<< "\n";

  // With the help of const Keyword we can not change the values  

//    obj.id = 50;
//    obj.name = "Sir Rana Waqas";
}

int main()
{
    Temp t(12, "Mujtaba Mubasher");
    getInfo(t);
   
   cout << "Main Object Name: "<< t.getName()<< "\n";
   cout << "Main Object ID: "<< t.getID()<< "\n";
   //cout<< &t.id;
    return 0;
}
