// Write a program to calculate GCD of two numbers 
// (i) with recursion (ii) without recursion.

#include <iostream>
using namespace std;

// (i) GCD with Recursion
int gcdRecursive(int a, int b) {
    if (b == 0)
        return a;
    return gcdRecursive(b, a % b);
}

// (ii) GCD without Recursion (Iterative)
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Recursive GCD
    int resultRec = gcdRecursive(num1, num2);
    cout << "GCD (Recursive): " << resultRec << endl;

    // Iterative GCD
    int resultItr = gcdIterative(num1, num2);
    cout << "GCD (Iterative): " << resultItr << endl;

    return 0;
}
