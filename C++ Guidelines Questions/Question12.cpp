// Copy the contents of onetext file to another file, after removing all whitespaces.

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    ifstream fin;
    char ch;
    fout.open("file1.txt");
    fout<<"Helllo I am Aditya";
    fout.close();
    fin.open("file1.txt");
    fout.open("file2.txt");
    while(fin.get(ch)){
        if(!isspace(ch))
            fout<<ch;
        }
    fin.close();
    fout.close();
}
