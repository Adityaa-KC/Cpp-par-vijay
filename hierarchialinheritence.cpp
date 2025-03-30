#include<iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
};
class Student : public Person{
public :
    int rollno;    
    void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll no. :"<<rollno<<endl;
    }
};
class Teacher: public Person{
public :
    string dept;
    void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"dept :"<<dept<<endl;
    }
};

int main(){
    Student s1;
    s1.name = "Aditya";
    s1.age = 20;
    s1.rollno = 241207;
    s1.getinfo();
    Teacher t1;
    t1.name = "Jaadu";
    t1.age = 45;
    t1.dept = "Mathematics";
    t1.getinfo();
}