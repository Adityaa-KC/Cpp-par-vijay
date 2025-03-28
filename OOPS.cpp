#include<iostream>
using namespace std;

class Bank{
public:
    string name;
    double AccountNo;

private :
    string Password;
    double Balance;

public :
    void setBal(double newBal){
        Balance = newBal;
    }

    void setPass(string newpass){
            Password = newpass;
    }

    void getBal(){
        string pass;
        cout<<"Enter the password for account no. '"<<AccountNo<<"' : ";
        cin>>pass;
        if (pass == Password)
        cout<<"Your balance is :"<<Balance;
    }
};

int main()
{   

    Bank cust1;
    cust1.name = "Aditya Kumar Chaudhary";
    cust1.AccountNo = 23432;

    double bal;
    string pass,inp;

    cout<<"Enter the balance of your bank Account :";
    cin>>bal;
    cust1.setBal(bal);

    cout<<"Enter the new password of your bank Account :";
    cin>>pass;
    cust1.setPass(pass);

    cout<<"If you want to check your bank balance then type yes:";
    cin>>inp;
    
    if (inp == "yes"){
        cust1.getBal();
    }
}