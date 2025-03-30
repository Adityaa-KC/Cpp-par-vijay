#include<iostream>
using namespace std;

class student{
public:
    string name;
    double *cgpaPtr;
    
    student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double ;
        *cgpaPtr = cgpa;
    }

    student(student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr);
    }

    void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"cgpa :"<<*cgpaPtr<<endl;
    }
};



int main(){

    student s1("Aditya Kumar",9.2);
        
    student s2(s1);
    s1.getinfo();
    s2.name = "Ayush";
    *(s2.cgpaPtr) = 10;
    s1.getinfo();
    s2.getinfo();



}