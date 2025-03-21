// Day 3: Operators & Expressions in C++
// 1. Overview
// Operators are symbols that perform operations on variables and values. Expressions are combinations of variables, operators, and values that yield a result. Today, you'll learn about:
// ✅ Arithmetic Operators
// ✅ Relational (Comparison) Operators
// ✅ Logical Operators
// ✅ Bitwise Operators
// ✅ Assignment Operators
// ✅ Miscellaneous Operators

// 8. Exercises
// Try solving these problems:

// // 1. Write a program that takes two integers as input and prints their sum, difference, product, and quotient.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1,num2;
//     cout<<"Enter the number num1 : ";
//     cin>>num1;
//     cout<<"Enter the number num2 : ";
//     cin>>num2;
//     cout<<"Sum of "<<num1<<" and "<<num2<<" is :"<<num1+num2<<endl;
//     cout<<"Difference of "<<num1<<" from "<<num2<<" is :"<<num2-num1<<endl;
//     cout<<"Product of "<<num1<<" and "<<num2<<" is :"<<num1*num2<<endl;
//     cout<<"Division of "<<num1<<" and "<<num2<<" will give :"<<num1/num2<<endl;
// }


// // Write a program that takes a number as input and prints whether it is even or odd using the modulus operator.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1;
//     cout<<"Enter the number num1 : ";
//     cin>>num1;
//     if (num1%2==0)
//     cout<<"The number "<<num1<<" is even .";
//     else
//     cout<<"The number "<<num1<<" is odd .";
// }


// // Use bitwise operators to swap two numbers without using a third variable.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x = 5, y = 6;
//     cout<<x<<","<<y<<endl;
//     x = x+y;
//     y = x-y;
//     x = x-y;
//     cout<<x<<","<<y<<endl;
// }

// // Implement a simple calculator using switch-case and arithmetic operators.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1,num2,sub;
//     char op;
//     cout<<"Enter the number num1 : ";
//     cin>>num1;
//     cout<<"Enter the number num2 : ";
//     cin>>num2;
//     cout<<"Enter the operator (+,-,*,/,%) : ";
//     cin>>op;
    
//     switch (op)
//     {
//     case '+':
//     cout<<"Sum of "<<num1<<" and "<<num2<<" is :"<<num1+num2<<endl;
//     break;
//     case '-':
//     cout<<"Difference of "<<num2<<" from "<<num1<<" is :"<<num1-num2<<endl;
//     break;
//     case '*':
//     cout<<"Product of "<<num1<<" and "<<num2<<" is :"<<num1*num2<<endl;
//     break;
//     case '/':
//     cout<<"Division of "<<num1<<" and "<<num2<<" will give :"<<num1/num2<<endl;
//     break;
//     case '%':
//     cout<<"Modulus of "<<num1<<" from "<<num2<<" will give :"<<num1%num2<<endl;
//     break;
//     default :
//     cout<<"Please enter a valid operator !!!.";
//     }
// }


// PRACTICE EXERCISE DONE !!! ✅