#include <iostream>
using namespace std;

class Students{
public:
    string name,course;
    int rollno,markMath,markEng,markComp;
    
    Students(string name,string course,int rollno,int markMath,int markEng,int markComp){
        this->name=name;
        this->course=course;
        this->rollno=rollno;
        this->markMath=markMath;
        this->markEng=markEng;
        this->markComp=markComp;            
    }
        
    int markAverage(){
        return (markMath+markComp+markEng)/3.0;
    }
    
    void getInfo(){
        cout<<"\n_____________________________________________"<<endl;
        cout<<"Name of the student :"<<name<<endl;
        cout<<"Course of the student :"<<course<<endl;
        cout<<"Roll no. of the student :"<<rollno<<endl;
        cout<<"Marks obtained in Eng :"<<markEng<<endl;
        cout<<"Marks obtained in Mathematics :"<<markMath<<endl;
        cout<<"Marks obtained in C++ :"<<markComp<<endl;
    }

    ~Students(){

    }
    
};

int main() {
    int n;
    cout<<"Enter the total number of students :";
    cin>>n;
    cin.ignore();
    Students* students[n];
    
    for (int i=0;i<n;i++){
        string name,course;
        int rollno,markMath,markEng,markComp;
        cout<<"Enter the details of student "<<i+1<<endl;
        cout<<"Enter the name of the student :";
        getline(cin,name);
        cout<<"Enter Course of the student :";
        getline(cin,course);
        cout<<"Enter Roll no. of the student :";
        cin>>rollno;
        cout<<"Enter Marks obtained in Eng :";
        cin>>markEng;
        cout<<"Enter Marks obtained in Mathematics :";
        cin>>markMath;
        cout<<"Enter Marks obtained in C++ :";
        cin>>markComp;
        cout<<endl;
        cin.ignore();

        students[i] = new Students(name,course,rollno,markMath,markEng,markComp);
    }

    int topperMarks = students[0]->markAverage(),topperIndex=0;
    for (int i = 1;i<n;i++)
            if (topperMarks<students[i]->markAverage())
            {    
                topperMarks=students[i]->markAverage();
                topperIndex = i;
            }
    cout<<"\nStudents Details\n";
    for (int i = 0;i<n;i++)
        students[i]->getInfo();
 
    cout<<"\nThe topper student details are :";
    students[topperIndex]->getInfo();

    for (int i=0;i<n;i++)
        delete students[i];
    return 0;
}