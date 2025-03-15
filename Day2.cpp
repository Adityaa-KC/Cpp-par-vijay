// Day 2: Basic Syntax & Data Types
// 🔹 Understand variables & data types (int, float, char, string, bool)
// 🔹 Learn about constants (const keyword)
// 🔹 Practice simple input/output (cin, cout)


// // 🔹 Understand variables & data types (int, float, char, string, bool)
// #include<iostream>
// using namespace std;
// int main()
// {
//     string Name = "Aditya";
//     int Age = 20;
//     char Grade = 'A';
//     float height = 5.8 ;
//     bool isStudent = true;

//     cout<<"The Child name is : "<<Name<<endl;
//     cout<<"The Child Age is : "<<Age<<endl;
//     cout<<"He got grade : "<<Grade<<endl;
//     cout<<"His height is : "<<height<<endl;
//     cout<<"Is he a student : "<<isStudent<<endl;
// }


// // 🔹 Learn about constants (const keyword)
// #include<iostream>
// using namespace std;
// int main()
// {
//     const double PI =  3.14159;  
//     cout<<"The value of PI is :"<<PI; 
//     // PI = 3.14; //This will give an error as value of PI is fixed.
// }


// // 🔹 Practice simple input/output (cin, cout)
// #include<iostream>
// using namespace std;
// int main()
// {
//     string Name;
//     int Age;
//     cout<<"Enter the name : ";
//     cin>>Name;
//     cout<<"Enter the Age : ";
//     cin>>Age;
//     cout<<"Welcome back !! "<<Name<<" Your age is : "<<Age<<endl;
//     // As cin only reads first word so we'll use getline to read the whole line.
//     string Line;
//     cout<<"Enter a line :";
//     cin.ignore(); // As cin includes a \n character so it will ignore getline so we have used this.
//     getline(cin,Line);
//     cout<<"Entered line is : "<<Line;
// }


// // 🔹 Type Conversion (Implicit & Explicit)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 12;
//     double b = a; //Implicit type conversion (Automatic done by compiler.)
//
//     int a = 15;
//     b = (float)a; // Explicit type conversion (Type casting.)
// }


// // 🔹 Take two float numbers as input and print their sum.
// #include<iostream>
// using namespace std;
// int main()
// {
//     float num1,num2;
//     cout<<"Enter the first number :";
//     cin>>num1;
//     cout<<"Enter the second number :";
//     cin>>num2;
//     cout<<"The sum of "<<num1<<" and "<<num2<<" is : "<<num1+num2;
// }



// 🔹 Practice Exercises
// ✅ 1. Write a program that asks the user for their name and age, then prints: "Hello, [Name]! You are [Age] years old."
// ✅ 2. Write a program that declares an int, double, and char, assigns values, and prints them.
// ✅ 3. Modify the above program to use constants instead of regular variables.
// ✅ 4. Take two float numbers as input and print their sum.
// ✅ 5. Convert a double value into an integer using type casting.

// Already done above ✅