#include<iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;
    };
    class Student{
    public:
        int rollno;
    };
    class GradStud : public Student, public Person{
    public:
        GradStud(){
            cout<<"This is multiple Inherited class.\n";
        }
        string courses;
     
        void getInfo(){
            cout<<"name :"<<name<<endl;
            cout<<"age :"<<age<<endl;
            cout<<"rollno. :"<<rollno<<endl;
            cout<<"course :"<<courses<<endl;
        }
    };
    
    int main(){
        GradStud s1;
        s1.name = "Arceus";
        s1.age = 21;
        s1.rollno = 241207;
        s1.courses = "Computer Science";
        s1.getInfo();
        return 0;
    }