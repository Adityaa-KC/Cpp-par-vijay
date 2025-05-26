// Define a class Person having name as a data member. Inherit two classes Student and
// Employee from Person. Student has additional attributes as course, marks and year and
// Employee has department and salary.Write display() method in all the three classes to
// display the corresponding attributes. Provide the necessary methods to show runtime
// polymorphism.


#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    Person(string n = "") : name(n) {}

    // Virtual function for runtime polymorphism
    virtual void display() {
        cout << "Name: " << name << endl;
    }

    virtual ~Person() {} // Virtual destructor
};

// Derived class: Student
class Student : public Person {
private:
    string course;
    int marks;
    int year;

public:
    Student(string n, string c, int m, int y) : Person(n), course(c), marks(m), year(y) {}

    void display() override {
        cout << "Student Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class: Employee
class Employee : public Person {
private:
    string department;
    float salary;

public:
    Employee(string n, string dept, float sal) : Person(n), department(dept), salary(sal) {}

    void display() override {
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

// ------------------ MAIN FUNCTION ------------------
int main() {
    // Create objects
    Person* p1;
    Student s("Alice", "B.Sc CS", 88, 2);
    Employee e("Bob", "IT", 55000.50);

    // Runtime polymorphism
    p1 = &s;
    cout << "\n--- Displaying Student Info (via Person pointer) ---\n";
    p1->display();  // Calls Student's display()

    p1 = &e;
    cout << "\n--- Displaying Employee Info (via Person pointer) ---\n";
    p1->display();  // Calls Employee's display()

    return 0;
}
