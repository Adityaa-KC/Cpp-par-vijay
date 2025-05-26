// 6. Write a program to search a given element in a set of n numbers using Binary search
// (i) with recursion (ii) without recursion.


#include <iostream>
using namespace std;

// (i) Binary Search with Recursion
int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            return binarySearchRecursive(arr, low, mid - 1, key);
        else
            return binarySearchRecursive(arr, mid + 1, high, key);
    }
    return -1; // Not found
}

// (ii) Binary Search without Recursion (Iterative)
int binarySearchIterative(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    // Recursive Binary Search
    int resultRec = binarySearchRecursive(arr, 0, n - 1, key);
    if (resultRec != -1)
        cout << "Recursive: Element found at index " << resultRec << endl;
    else
        cout << "Recursive: Element not found" << endl;

    // Iterative Binary Search
    int resultItr = binarySearchIterative(arr, n, key);
    if (resultItr != -1)
        cout << "Iterative: Element found at index " << resultItr << endl;
    else
        cout << "Iterative: Element not found" << endl;

    return 0;
}
