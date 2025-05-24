#include<iostream>
using namespace std;
class account{
private:
    string name,acc_num,acc_type;
public:
    account(){
        set_val();
    }
    double balance;
    void set_val();
    void deposit_money();
    void withdraw_money();
};

void account :: set_val(){
    cout<<"\nEnter the name of customer :";
    cin>>name;
    cout<<"Enter the account number :";
    cin>>acc_num;
    cout<<"Enter the account type :";
    cin>>acc_type;
    cout<<"Enter the balance in customer's account :";
    cin>>balance;
}

void account :: deposit_money(){
    double money;
    cout<<"\n Enter the money that you want to deposit :";
    cin>>money;
    balance += money;
    cout<<"The balance after deposition is :"<<balance;
}

class  cur_acc: public account{
    double minimum_bal;
public:
    void withdraw_money();
    void service_charge();
};
void cur_acc:: service_charge(){
    double charges;
    if (balance < minimum_bal){
        balance -= charges;
        cout<<"Service charge has been deducted for not maintaining minimum balance !!!";
    }
}
void cur_acc :: withdraw_money(){
    double money;
    cout<<"\n Enter the money that you want to withdraw :";
    cin>>money;
    balance -= money;
    service_charge();
    cout<<"The balance after withdrawl is :"<<balance;
}

class sav_acc : public account{
public:  
    void int_bonus();
};