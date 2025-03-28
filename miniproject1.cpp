// 🔹 Mini Project - Basic Calculator
// Your task is to build a calculator that performs basic operations:
// ✔️ Addition (+), Subtraction (-)
// ✔️ Multiplication (*), Division (/)
// ✔️ Modulus (%)
// ✔️ Uses functions for each operation
// ✔️ Takes user input

// 💡 Bonus Challenge:
// 🔹 Extend the calculator to support square root, power, and trigonometric functions (sin, cos, tan).

#include<iostream>
#include<cmath>
using namespace std;
int calculator(int n,int m,char ch)
{
    if (ch == '+') 
        return (n+m);
    else if (ch == '-') 
        return (n-m);
    else if (ch == '*') 
        return (n*m);
    else if (ch == '/') 
    {
        if (m == 0) 
        {
            cout << "Error: Division by zero is not allowed.\n";
            return 0;
        }
        return n / m;
    }
    else if (ch == '%') 
    {
        if (m == 0) 
        {
            cout << "Error: Modulus by zero is not allowed.\n";
            return 0;
        }
        return n % m;
    }
    else
    {
        cout << "Invalid operator!\n";
        return 0;
    }
    
}
double calculator(int n,char ch)
{
    if (ch == 1) 
        return (sqrt(n));
    else if (ch == 2) 
        return (pow(n,2));
    else if (ch == 3) 
        return (sin(n * M_PI / 180));
    else if (ch == 4) 
        return (cos(n * M_PI / 180));
    else 
        return (tan(n * M_PI / 180));
    
}
int main()
{
    int n1;
    cout<<"Which calculator do you want type 1 for basic and 2 for scientific :";
    cin>>n1;
    if (n1 == 1)
    {
    int num1,num2;
    char oper;
    cout<<"Enter first number :";
    cin>>num1;
    cout<<"Enter operator (+,-,*,/,%) :";
    cin>>oper;
    cout<<"Enter second number :";
    cin>>num2;
    if (oper != '+' && oper != '-' && oper != '*' && oper != '/' && oper != '%')
        cout<<"invalid input!!";
    else
        cout<<"So the value of "<<num1<<oper<<num2<<" is :"<<calculator(num1,num2,oper);
    }
    else if (n1 == 2)
    {
    double num1,oper;
    cout<<"Enter first number :";
    cin>>num1;
    cout<<"Enter operator (sqrt(1),pow(2),sin(3),cos(4),tan(5)) :";
    cin>>oper;
    if (oper != 1 && oper != 2 && oper != 4 && oper != 5 && oper != 3)
        cout<<"invalid input!!";
    else
        cout<<"So the value of "<<oper<<"("<<num1<<")"<<" is :"<<calculator(num1,oper);
    }
    else
        cout<<"invalid input!!";
    return 0;
}