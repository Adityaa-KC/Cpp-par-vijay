// 🔹 Challenging Problems
// Try these for practice:

// 1️⃣ Hard: Reverse a Number
// Problem: Write a program that takes an integer input and prints its reverse.

// #include<iostream>
// using namespace std;
// int revNum(int n)
// {
//     int a = 0;
//     while (n>0){
//         a = a*10 + n%10;
//         n /= 10;
//     }
//     return a;
// }
// int main(){
//     int num;
//     cout<<"Enter the number num :";
//     cin>>num;
//     cout<<"Number "<<num<<" after reversing is : "<<revNum(num);
// }



// 2️⃣ Hard: Check for Prime Number
// Problem: Write a program to check if a number is prime.

// #include<iostream>
// using namespace std;
// int primeCheck(int n)
// {
//     int a = 0;
//     for (int i=2;i<=(n/2);i++){
//         if (n%i == 0)
//             return 1;
//     }
//     return 0;
// }
// int main(){
//     int num;
//     cout<<"Enter the number num :";
//     cin>>num;
//     if(primeCheck(num))
//     cout<<"Number "<<num<<" is not prime.";
//     else
//     cout<<"Number "<<num<<" is prime.";
//     return 0;
// }



// 3️⃣ Very Hard: Print Pascal’s Triangle
// Problem: Write a program to print Pascal's Triangle up to n rows.

#include<iostream>
using namespace std;
int factoriaL(int x)
{
    if (x==0||x==1) return 1;
    return x*factoriaL(x-1);
}
int pascalT(int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=n-i;j>1;j--)
        cout<<" ";
        for (int j = 0;j<=i;j++)
        cout<<(factoriaL(i))/(factoriaL(j)*factoriaL(i-j))<<" ";
        cout<<endl;
    }

    return 0;
}
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    pascalT(n);
    return 0;
}