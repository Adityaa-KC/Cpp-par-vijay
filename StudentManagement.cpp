#include<iostream>
using namespace std;

class Student{
private:
    char name[50],grade;
    int rollnum = 0;
    float marks[5],average = 0,total = 0;

public:
    void addStud(Student students[],int &count){
        if (count >= 50)
            cout<<"Maximum student limit reached!!!";
        else
        {
            cout<<"Adding new student."<<endl;
            cout<<"Enter the name of the student #"<<count+1<<" :";
            cin.ignore();
            cin.getline(students[count].name,50);
            cout<<"Enter the roll number of the student #"<<count+1<<" :";
            cin>>students[count].rollnum;
            students[count].total = 0;
            for (int i=0;i<5;i++){
                cout<<"Enter marks of subject "<<i+1<<" :";
                cin>>students[count].marks[i];
                students[count].total += students[count].marks[i];
            }
            cout<<"Student added successfully"<<endl;
            students[count].average = students[count].total/5;
        }
            if (students[count].average >= 90) students[count].grade = 'A';
            else if (students[count].average >= 80) students[count].grade = 'B';
            else if (students[count].average >= 70) students[count].grade = 'C';
            else if (students[count].average >= 60) students[count].grade = 'D';
            else students[count].grade = 'F';
            count++;
    }

    void dispInfo(Student students[],int index){
        cout<<"\n===== Student Report Card Menu =====\n"<<endl;
        cout<<"The details of the student "<<index+1<<" is :"<<endl;
        cout<<"Name :"<<students[index].name<<endl;
        cout<<"Roll number :"<<students[index].rollnum<<endl;
        cout<<"Total Marks :"<<students[index].total<<endl;
        cout<<"Grade :"<<students[index].grade<<endl;   
    }

    void studfind(Student students[],int &count, int rolltofind){
        if (rolltofind < 0 or rolltofind > 49){
            cout<<"Enter a valid roll number !!!";
        }
        for (int i = 0;i<count;i++){
           if(students[i].rollnum==rolltofind){
            cout<<"Student found !!"<<endl;
            dispInfo(students,i);
            break;
           } 
        }
    }
};

int main(){
    Student students[50],helper;
    int n,roll,studcount = 0;
    do{
        cout<<"\n=====Select an option from below to perform =====\n"<<endl;
        cout << "-----------------------------"<<endl;
        cout<<"\n1. Add new Student";
        cout<<"\n2. Display report card of all Students";
        cout<<"\n3. Details of a particular students";
        cout<<"\n4. Quit"<<endl<<endl;
        cout << "-----------------------------\n";
        cout<<"\nEnter your input :";
        cin>>n; cout<<endl;
    switch (n)
        {
        case 1:
            helper.addStud(students,studcount);
            break;
        case 2:
            for (int i = 0;i<studcount;i++)
            helper.dispInfo(students,i);
            break;
        case 3 :
            cout<<"Enter the roll number of student you want to find :";
            cin>>roll;
            helper.studfind(students,studcount,roll);
            break;
        case 4 :
            cout<<"Quitting ...."<<endl;
           break;
        default :
            cout<<"Enter a valid input !!!"<<endl;
        } 
    }while(n != 4);
    return 0;
}