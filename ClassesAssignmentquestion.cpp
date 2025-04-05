#include<iostream>
using namespace std;
class Bank{
    private:
        string Name,AccType;
        double Accountnum,Balance,depoAmt,withdrawAmt;

    public :
        void set_val()
        {
            cout<<"Enter the name of customer :";
            getline(cin,Name);

            cout<<"Enter the Account no. of customer :";
            cin>>Accountnum;

            cin.ignore();
            cout<<"Enter the Account type (Ex : Saving , Current , etc...) of customer :";
            getline(cin,AccType);

            cout<<"Enter the balance in the account :";
            cin>>Balance;
        }
    
        void get_info(){
            cout << "-----------------------------"<<endl;
            cout<<"Details of the customer is :"<<endl;
            cout<<"Name of customer :"<<Name<<endl;
            cout<<"Balance in Account :"<<Balance<<endl;
        }

        void depo_amt(){
            cout<<"\nEnter the amount you want to deposit :";
            cin>>depoAmt;
            cout<<endl;
            if (depoAmt < 0)
            {
                cout<<"Enter a valid amount to deposit in your bank !!!!";
            }
            else
            {
                Balance += depoAmt;
                cout<<"Balance in Account after updating is :"<<Balance<<endl;
            }
        }

        void withdraw_amt(){
            cout<<"\n Enter the amount you want to withdraw :";
            cin>>withdrawAmt;
            cout<<endl;
            if (withdrawAmt>Balance)
            {
                cout<<"Not enough amount in your bank !!!!"<<endl;
            }
            else 
            {
                Balance -= withdrawAmt;
                cout<<"Balance in Account after withdrawing money is :"<<Balance<<endl;
            }
        }
};

int main(){
    Bank c1;
    c1.set_val();
    while (true)
    {
        int n;
        cout<<"\nSelect an option from below to perform :\n"<<endl;
        cout << "-----------------------------"<<endl;
        cout<<"\n1. Display Info";
        cout<<"\n2. Deposit Amount";
        cout<<"\n3. Withdraw Amount";
        cout<<"\n4. Quit"<<endl<<endl;
        cout << "-----------------------------\n";
        cout<<"\nEnter your input :";
        cin>>n; cout<<endl;

    switch (n)
        {
        case 1:
            c1.get_info();
            break;
        case 2:
            c1.depo_amt();
            break;
        case 3 :
            c1.withdraw_amt();
            break;
        case 4 :
            cout<<endl;
            cout<<"Quitting ....";
            return 0;
        default :
            cout<<"Enter a valid input !!!"<<endl;
        }
        
    } 
}