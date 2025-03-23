// 🔹 Solve 10 Coding Problems
// Here are 10 coding problems to strengthen your concepts:

// Loops & Conditionals:
// 1️⃣ Find the sum of all even numbers between 1 to 100.
// 2️⃣ Check if a number is prime.
// 3️⃣ Reverse a given number (e.g., 123 → 321).
// 4️⃣ Print this pattern using loops:
// *
// * *
// * * *
// * * * *
// * * * * *
// Functions & Recursion:
// 5️⃣ Write a function to check if a number is palindrome.
// 6️⃣ Find the factorial of a number using recursion.
// 7️⃣ Generate the Fibonacci series up to ‘n’ terms using recursion.
// 8️⃣ Write a function to count the number of vowels in a given string.

// Pointers & Arrays:
// 9️⃣ Reverse an array using pointers.
// 🔟 Find the largest and smallest number in an array using pointers.


// // 1️⃣ Find the sum of all even numbers between 1 to 100.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int sum = 0;
//     for (int i = 0; i <= 100; i+=2)
//         sum += i;
//     cout<<sum;
//     return 0;
// }


// // 2️⃣ Check if a number is prime.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int primeCheck(int n)
// {
//     for (int i = 2;i<=sqrt(n);i++)
//         if (n%i == 0)
//             return 1;
//     return 0;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number n :";
//     cin>>n;
//     if (primeCheck(n))
//         cout<<"Number "<<n<<" is not prime .";
//     else
//         cout<<"Number "<<n<<" is prime .";
// }


// // 3️⃣ Reverse a given number (e.g., 123 → 321).
// #include<iostream>
// using namespace std;
// int revNum(int n)
// {
//     int a = 0; 
//     while (n>0)
//     {
//         a = a*10 + n%10;
//         n /= 10;
//     }
//     return a;
// }
// int main()
// {
//     int n;
//     cout<<"Enter a number n : ";
//     cin>>n;
//     cout<<"Number "<<n<<" after reversing is : "<<revNum(n);
//     return 0;
// }


// // 4️⃣ Print this pattern using loops:
// // *
// // * *
// // * * *
// // * * * *
// // * * * * *
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number n : ";
//     cin>>n;
//     for (int i = 0;i<n;i++)
//     {
//         for (int j = 0;j<=i;j++)
//             cout<<"* ";
//         cout<<endl;
//     }
// return 0;
// }


// // 5️⃣ Write a function to check if a number is palindrome.
// #include<iostream>
// using namespace std;
// int palinCheck(int n)
// {
//     int b = 0,c = n;
//     while (c>0)
//     {
//         b = b*10 + c%10;
//         c /= 10;
//     }
//     if (b == n)
//         return 1;
//     return 0;
// }
// int main()
// {
//     int n;
//     cout<<"Enter a number n : ";
//     cin>>n;
//     if (palinCheck(n))
//         cout<<"Number "<<n<<" is a palindrome .";
//     else
//         cout<<"Number "<<n<<" is not a palindrome .";
// }


// // 6️⃣ Find the factorial of a number using recursion.
// #include<iostream>
// using namespace std;
// int factL(int n)
// {
//     if (n==0||n==1) return 1;
//     return n*factL(n-1);
// }
// int main()
// {
//     int n;
//     cout<<"Enter a number n : ";
//     cin>>n;
//     cout<<"Factorial of number "<<n<<" is :"<<factL(n);
//     return 0;
// }


// // 7️⃣ Generate the Fibonacci series up to ‘n’ terms using recursion.
// #include<iostream>
// using namespace std;
// int fibona(int n)
// {
//     if (n==0) return 0;
//     if (n==1) return 1;
//     return fibona(n-1)+fibona(n-2);
// }
// int main()
// {
//     int n;
//     cout<<"Enter a number n : ";
//     cin>>n;
//     cout<<"Fibonacci series of "<<n<<" is :";
//     for (int i = 0;i<n;i++)
//         cout<<fibona(i)<<' ';
//     return 0;
// }


// // 8️⃣ Write a function to count the number of vowels in a given string.
// #include<iostream>
// using namespace std;
// int vowelCheck(string str)
// {
//     int a = 0;
//     for (int i = 0;i<=str.length();i++)
//         if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
//             a++;
//     return a;
// }
// int main()
// {
//     string vov;
//     cout<<"Enter a string : ";
//     cin>>vov;
//     cout<<"So the number of vowel in string '"<<vov<<"' is : "<<vowelCheck(vov);
// }

// // 9️⃣ Reverse an array using pointers.
// #include<iostream>
// using namespace std;
// void revArr(int* arr,int n)
// {
//     int arr2[n];
//     for (int i = 0 ; i < n ; i++)
//         arr2[i]=*(arr+i);
//     for (int i = 0 ; i < n ; i++)
//         *(arr+i)=arr2[n-(i+1)];
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int *ptr = arr;
//     for (int i = 0 ; i < n; i++)
//     cout<<arr[i];
//     cout<<endl;
//     revArr(ptr,n);
//     for (int i = 0 ; i < n; i++)
//     cout<<arr[i];
// }


// // // 🔟 Find the largest and smallest number in an array using pointers.
// #include<iostream>
// using namespace std;
// void minMax(int *arr,int n)
// {
//     int min = *arr;
//     int max = *arr;
//     for(int i = 0; i < n;i++)
//     {
//         if (*(arr+i)>max) 
//             max = *(arr+i);
//         if (*(arr+i)<min) 
//             min = *(arr+i);
//     }
//     cout<<"The minimum of all the elements in the array is :"<<min<<endl;
//     cout<<"The maximum of all the elements in the array is :"<<max;
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     minMax(arr,n);
//     return 0;
// }
