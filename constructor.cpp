#include<iostream>
using namespace std;
class random{

public :
    random(){}

    random(string name,int age,string dept,int salary){
        this->salary = salary;
        this->name = name;
        this->age = age;
        this->dept = dept;
    }

    string name,dept;
    int age;
    double salary;

    void getinfo(){
        cout<<name<<endl;
        cout<<dept<<endl;
        cout<<age<<endl;
        cout<<salary<<endl;
    }
};

int main(){
    random t1("Aditya",20,"ComputerScience",25000);
        t1.getinfo();
    random t2(t1);  // copy constructor 
        t2.name = "Ayush";
        t2.getinfo();
}