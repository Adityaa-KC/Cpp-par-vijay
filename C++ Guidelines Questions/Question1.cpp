// 1. Write a program to compute the sumofthe first n terms ofthe following series: 1 - 1/2**2 + 1/3**3  ...

#include<iostream>
#include<cmath>
using namespace std;

double calc_sum(int n){
    double sum = 0;
    for (int i = 1 ; i <= n;i++)
        sum += (pow((-1),i+1))*(1.0/pow(i,i));
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;  
    cout<<"The sum of first n terms of series is :";
    cout<<calc_sum(n);
}