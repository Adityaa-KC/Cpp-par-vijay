// Write a menu driven program to perform string manipulation (without using inbuilt string functions):
// Show address of cach character in string
// b. Concatenate two strings.
// C. Compare two strings
// d. Calculate length of the string (use pointers)
// e. Convert all lowercase characters to uppercase
// f. Reverse the string
// g. Insert a string in another string at a user specified position


#include <iostream>
using namespace std;

void show_address(char *str1){
    for (int i= 0;str1[i] !='\0';i++){
        cout<<"The adress of "<<str1[i]<<" is "<<(void*)&str1[i]<<endl;
    }
}

void concatenate_str(char *str1,char *str2){
    int i=0,j=0,k=0;
    char str3[200];
    while(str1[i]!='\0')
    str3[j++] = str1[i++];
    while(str2[k]!='\0')
    str3[j++] =str2[k++];
    cout<<str3;
}

void compare_strings(char *str1,char *str2){
    int i=0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]){
        cout<<"The strings are not equal !!";
        return;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
        cout<<"The strings are equal !!";
    else
        cout<<"The strings are not equal !!";
}

int length_of_str(char *str){
    int length = 0,i=0;
    while (*(str+length)!='\0'){
        length++;
    }
    return length;
}

void to_uppercase(char *str){
    int i = 0;
    // char str5[length_of_str(str)];
    while(str[i] != '\0'){
        char x = str[i];
        if (x >= 'a' && x <= 'z')
        str[i] -= 32;
        i++;
    }
    cout<<str;
}

void reverseString(char *str){
    int n = length_of_str(str),i=0;
    while(i<(n/2)){
    char x = str[i];
    str[i] = str[n-i-1];
    str[n-i-1] = x;
    i++;
    }
    cout<<str;
}

void insert_str(char *str1,char *str2,int n){
    int i=0,j=0,k=0;
    char str3[200];
    while(str1[i]!='\0' && i<=n)
    str3[j++] = str1[i++];
    while(str2[k]!='\0')
    str3[j++] =str2[k++];
    while(str1[i]!='\0')
    str3[j++]=str1[i++];
    str3[j]='\0';
    cout<<str3;
}

int main(){
    char str2[] = "Hello";
    char str4[] = "World!!";
    // show_address(str2);
    // concatenate_str(str2,str4);
    // compare_strings(str2,str4);
    // cout<<"The length of string '"<<str2<<"' is : "<<length_of_str(str2);
    // to_uppercase(str2);
    // reverseString(str2);
    insert_str(str2,str4,3);
}