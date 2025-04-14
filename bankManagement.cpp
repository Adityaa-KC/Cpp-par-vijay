#include<iostream>
#include <iomanip>
using namespace std;
class Bank{
    private:
        char Name[50];
        string AccType,Accountnum;
        double Balance;

    public :
        void add_cust(Bank cust[],int count)
        {
            if (count > 50)
                cout<<"Maximum cusomers reached !!!"<<endl;
            else
            {   cout<<"Enter the details of the customer "<<count+1<<" :"<<endl;
                cout<<"Enter the name of customer :";
                cin.ignore();
                cin.getline(cust[count].Name,50);
                cout<<"Enter the Account no. of customer :";
                cin>>cust[count].Accountnum;
                cout<<"Enter the Account type (Ex : Saving , Current , etc...) of customer :";
                cin>>cust[count].AccType;
                cout<<"Enter the balance in the account :";
                cin>>cust[count].Balance;
            }
        }
        
        void get_info(Bank cust[],int count)
        {
            int i=0;
            string index;
            cout<<"Enter the account number of customer :";
            cin>>index;
            bool found = false;
            for (i;i<count;i++)
            if (cust[i].Accountnum == index)
            {    found = true;
            cout << "-----------------------------"<<endl;
            cout<<"Details of the customer is :"<<endl;
            cout<<"Name of customer :"<<cust[i].Name<<endl;
            cout<<"Type of Account :"<<cust[i].AccType<<endl;
            cout<<"Account Number :"<<cust[i].Accountnum<<endl;
            cout << fixed << setprecision(2) << "Balance: Rs. " <<cust[i].Balance<< endl;
            }
            if (!found)
            cout<<"Customer with account number '"<<index<<"' not found !!!";
        }
        
        void depo_amt(Bank cust[],int count)
        {
            double depoAmt;
            string accountnum1;
            int i = 0 ;
            cout<<"\nEnter the account number in which you want to deposit :";
            cin>>accountnum1;
            cout<<"\nEnter the amount you want to deposit :";
            cin>>depoAmt;
            cout<<endl;
            bool found = false;
            for (i;i<count;i++)
                if (cust[i].Accountnum == accountnum1){
                    found = true;
                    if (depoAmt < 0)
                        cout<<"Enter a valid amount to deposit in your bank !!!!";
                    else
                    {
                        cust[i].Balance += depoAmt;
                        cout<<"Balance in Account after updating is : Rs. "<<cust[i].Balance<<endl;
                    }
                        } 
            if (!found)
                cout<<"Customer with account number '"<<accountnum1<<"' not found !!!";
        }


        void withdraw_amt(Bank cust[],int count)
        {
            double withdrawAmt;
            string accountnum1;
            int i = 0 ;
            cout<<"\nEnter the account number from which you want to withdraw :";
            cin>>accountnum1;
            cout<<"\nEnter the amount you want to withdraw :";
            cin>>withdrawAmt;
            cout<<endl;
            bool found = false;
            for (i;i<count;i++)
                if (cust[i].Accountnum == accountnum1){
                    found = true;
                    if (withdrawAmt < 0)
                        cout<<"Enter a valid amount !!!!"<<endl;
                    else if (withdrawAmt > cust[i].Balance)
                        cout<<"Not enough amount in your bank !!!!"<<endl;
                    else
                    {
                        cust[i].Balance -= withdrawAmt;
                        cout<<"Balance in Account after updating is : Rs. "<<cust[i].Balance<<endl;
                    }
                        } 
            if (!found)
                cout<<"Customer with account number '"<<accountnum1<<"' not found !!!";
        }
};

int main(){
    Bank cust[50],helper;
    int n,count = 0;
    cout<<"Welcome to AKC bankings ltd. \n";
    do
    {
        cout<<"\nSelect an option from below to perform :\n"<<endl;
        cout << "-----------------------"<<endl;
        cout<<"\n0. Add Customer";
        cout<<"\n1. Display Info";
        cout<<"\n2. Deposit Amount";
        cout<<"\n3. Withdraw Amount";
        cout<<"\n4. Quit"<<endl<<endl;
        cout << "-----------------------\n";
        cout<<"\nEnter your input :";
        cin>>n; cout<<endl;

    switch (n)
        {
        case 0:
            helper.add_cust(cust,count);
            count++;
            break;
        case 1:
            helper.get_info(cust,count);
            break;
        case 2:
            helper.depo_amt(cust,count);
            break;
        case 3 :
            helper.withdraw_amt(cust,count);
            break;
        case 4 :
            cout<<"Quitting ...."<<endl;
            break;
        default :
            cout<<"Enter a valid input !!!"<<endl;
        } 
    }while(n!=4);
    cout<<"\nThank you for visiting !!!";
    return 0;
}