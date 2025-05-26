// 2. Write a program to removethe duplicates from an array.

#include<iostream>
using namespace std;
int remove_duplicate(int arr[],int n){
    int arr2[n];
    int j = 0;
    for (int i = 0; i<n;i++){
        bool isDup = false;
        for (int k=0;k<j;k++)
            if (arr[i] == arr2[k])
                isDup = true;
        if(!isDup)
            arr2[j++] = arr[i];
    }
    cout<<" after removing duplicates is :";
    for (int i=0;i<j;i++)
        cout<<arr2[i]<<" ";
}
int main(){
    int arr[]= {1,2,3,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array [ ";
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"] ";
    remove_duplicate(arr,n);
}