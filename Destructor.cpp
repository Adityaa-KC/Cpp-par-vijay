#include<iostream>
using namespace std;

class Student{

public:
    string name;
    double *cgpaPtr;

    Student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    ~Student(){  // destructor
        cout<<"Hii I am destructor!!!\n";
        delete cgpaPtr;
    }
};

int main()
{
    Student s1("Aditya Chaudhary",10);
}