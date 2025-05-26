// Create a class Student containing fields for Roll No., Name, Class, Year and Total
// Marks. Write a program to store 5 objects of Student class in a file. Retrieve these
// records from the file and display them.


#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    string className;
    int year;
    float totalMarks;

    // Input student details
    void input() {
        cout << "\nEnter Roll No: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Class: ";
        getline(cin, className);

        cout << "Enter Year: ";
        cin >> year;

        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }

    // Output student details
    void display() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nClass: " << className;
        cout << "\nYear: " << year;
        cout << "\nTotal Marks: " << totalMarks << endl;
    }
};

int main() {
    Student s;
    ofstream outFile("students.txt");

    // Write 5 student records to the file
    cout << "Enter details for 5 students:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        s.input();
        outFile << s.rollNo << endl
                << s.name << endl
                << s.className << endl
                << s.year << endl
                << s.totalMarks << endl;
    }
    outFile.close();

    // Read and display records from the file
    ifstream inFile("students.txt");
    cout << "\n\nStored Student Records:\n";

    while (inFile >> s.rollNo) {
        inFile.ignore();
        getline(inFile, s.name);
        getline(inFile, s.className);
        inFile >> s.year >> s.totalMarks;
        inFile.ignore();
        s.display();
    }

    inFile.close();
    return 0;
}
