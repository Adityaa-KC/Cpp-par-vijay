#include<iostream>
#include<cctype>
using namespace std;

int main(int argc,char** argv){
    int count[26]={0};
    for(int i = 1;i<argc;i++){
        char * arg = argv[i];
        for(int j=0;arg[j]!='\0';j++){
            char ch = arg[j];
            if(isalpha(ch)){
                ch = tolower(ch);
            }
            int index = ch - 'a';
            count[index]++;
        } 
    }
    cout<<"Table"<<endl;
    cout<<"Letter"<<"  "<<"Count"<<endl;
    for (int i = 0;i<26;i++){
        if (count[i]>0){
            char ch = 'a' + i;
            cout<<ch;
            cout<<"       "<<count[i]<<"\n";
        }
    }
}
