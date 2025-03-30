#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){
        cout<<"Hello I am Parent class\n";
    }
    ~Person(){
        cout<<"Hello I am  parent destructor.\n";
    }
};

class Patient : public Person{
public :
    string Disease;

    Patient(){
        cout<<"Hello I am Child class\n";
    }
    ~Patient(){
        cout<<"Hello I am  child destructor.\n";
    }
    void Getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"Disease :"<<Disease<<endl;
    }
};

int main(){

    Patient p1;
    p1.name = "Akash";
    p1.age = 19;
    p1.Disease = "Fever";
    p1.Getinfo();
}