stream>
using namespace std;
int main()
{
    int num1,num2,sub;
    char op;
    cout<<"Enter the number num1 : ";
    cin>>num1;
    cout<<"Enter the number num2 : ";
    cin>>num2;
    cout<<"Enter the operator (+,-,*,/,%) : ";
    cin>>op;
    
    switch (sub)
    {
    case '+':
    cout<<"Sum of "<<num1<<" and "<<num2<<" is :"<<num1+num2<<endl;
    break;
    case '-':
    cout<<"Difference of "<<num2<<" from "<<num1<<" is :"<<num1-num2<<endl;
    break;
    case '*':
    cout<<"Product of "<<num1<<" and "<<num2<<" is :"<<num1*num2<<endl;
    break;
    case '/':
    cout<<"Division of "<<num1<<" and "<<num2<<" will give :"<<num1/num2<<endl;
    break;
    case '%':
    cout<<"Modulus of "<<num1<<" from "<<num2<<" will give :"<<num1%num2<<endl;
    break;
    default :
    cout<<"Please enter a valid operator !!!.";
    }
}