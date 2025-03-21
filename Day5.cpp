// 🏆 Challenging Exercises
// 1️⃣ Power Function: Implement power(a, b) to calculate a^b using recursion.
// 2️⃣ Greatest Common Divisor (GCD): Write a function to find GCD of two numbers.
// 3️⃣ Swap Function: Implement a function to swap two numbers (using reference).
// 4️⃣ Fibonacci Series: Generate Fibonacci numbers using recursion.


// // 1️⃣ Power Function: Implement power(a, b) to calculate a^b using recursion.
// #include<iostream>
// using namespace std;
// int Power(int x,int y)
// {
//     if(y==0)
//         return 1;
//     else
//         return x*(Power(x,y-1));
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter first number :";
//     cin>>a;
//     cout<<"Enter second number :";
//     cin>>b;
//     cout<<"Number "<<a<<" raised to power "<<b<<" is :"<<Power(a,b);
//     return 0;
// }


// // 2️⃣ Greatest Common Divisor (GCD): Write a function to find GCD of two numbers.
// #include<iostream>
// using namespace std;
// int GCD(int x,int y)
// {
//     if (y==0) return x;
//     return GCD(y, x%y);
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter first number :";
//     cin>>a;
//     cout<<"Enter second number :";
//     cin>>b;
//     cout<<"GCD of "<<a<<" and "<<b<<" is : "<<GCD(a,b);
// }


// // 3️⃣ Swap Function: Implement a function to swap two numbers (using reference).
// #include<iostream>
// using namespace std;
// void swapNum(int &x,int &y);
// int main()
// {
//     int a,b;
//     cout<<"Enter first number :";
//     cin>>a;
//     cout<<"Enter second number :";
//     cin>>b;
//     cout<<"Numbers before swapping :"<<a<<","<<b<<endl;
//     swapNum(a,b);
//     cout<<"Numbers after swapping :"<<a<<","<<b;
// }

// void swapNum(int &x,int &y)
// {
//     x = x+y;
//     y = x-y;    
//     x = x-y;    
// }


// // 4️⃣ Fibonacci Series: Generate Fibonacci numbers using recursion.
// #include<iostream>
// using namespace std;
// int fibona(int n )
// {
//     if (n==1)
//         return 0;
//     else if (n==2)
//         return 1;
//     return fibona(n-1)+fibona(n-2);
// }
// int main()
// {
//     int n ;
//     cout<<"Enter a number n:";
//     cin>>n;
//     for (int i=1;i<=n;i++)
//     cout<<fibona(i)<<" ";
// }


// // Using iteration
// #include <iostream>
// using namespace std;

// void fibonacci(int n) {
//     int a = 0, b = 1, next;

//     for (int i = 1; i <= n; i++) {
//         cout << a << " ";
//         next = a + b;
//         a = b;
//         b = next;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     fibonacci(n);
// }
