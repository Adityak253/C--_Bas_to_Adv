#include<iostream>

using namespace std;
class BankAccount
{
    private:
    int AccountNumber;
    float Balance;
    public:
    BankAccount(int AccountNumber)
    {
        this->AccountNumber=AccountNumber;
        Balance=0;
    }
    float GetBalance()
    {
        return Balance;
    }
    void DepositMoney()
    {
        float money;
        cout<<"Enter the amount to deposit : ";
        cin>>money;
        Balance+=money;
    }
    void WithdrawMoney()
    {
        float money;
        cout<<"Enter the money to withdraw : ";
        cin>>money;
        if(Balance<money)
        {
            cout<<"Balance not sufficient"<<endl;
        }
        else
        {
            Balance-=money;
        }
    }
    int GetAccountNumber()
    {
        return AccountNumber;
    }
    void AccessAccount()
    {
        cout<<"MENU"<<endl<<"1.Show Balance"<<endl<<"2.Withdraw Money"<<endl<<"3.Deposit Money"<<endl<<"4.Exit"<<endl;
        while(1)
        {
        int choice;
        cout<<"Enter choice : ";
        cin>>choice;
        if(choice ==1)
        {
            cout<<this->Balance<<endl;
        }
        else if(choice ==2 )
        {
            this->WithdrawMoney();
        }
        else if(choice ==3 )
        {
            this->DepositMoney();
        }
        else if(choice==4)
        {
            cout<<"Exit!";
            break;
        }
        else
        {
            cout<<"Invalid Option!"<<endl;
        }
        }
    }
};
int main() 
{
    int AccountNumber;
    cout<<"Enter your Account Number : ";
    cin>>AccountNumber;
    BankAccount b1(AccountNumber);
    b1.AccessAccount();
}