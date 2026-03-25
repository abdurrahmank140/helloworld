#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

class bankaccount{
private:
    string accountholder;
    double balance;
    int accountnumber;
public:
    bankaccount(){
        accountholder="unknown";
        balance=0;
        accountnumber=0;
        }
    bankaccount(string name,double bal,int acc){
    if (bal<0)
    balance=0;
    else
    balance=bal;
    
    if(acc<1000)
    accountnumber=1000;
    else
    accountnumber=acc;
    }
    bankaccount(string name,double bal){
        accountholder=name;
        if(bal<0)
        balance=0;
        else
        balance=bal;

        accountnumber=1000+rand()%9000;
    }
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if(amount>balance)
        cout<<"insufficient balance!"<<endl;
        else
        balance-=amount;
    }
    void display(){
        cout<<"account holder:"<<accountholder<<endl;
        cout<<"balance:"<<balance<<endl;
        cout<<"account number:"<<accountnumber<<endl;
        cout<<"----------------"<<endl;
    }
};
int main(){
        srand(time(0));
    string name;
    double balance;
    int accnumber;

    bankaccount acc1;

    cout<<"enter account holder name for account 2:";
    cin>>name;

    cout<<"enter balance:";
    cin>> balance;

    cout<<"enter account number:";
    cin>>accnumber;

    bankaccount acc2(name,balance,accnumber);

    cout<<"enter account holder name for account 3:";
    cin>>name;

    cout<<"enter initial balance:";
    cin>>balance;

    bankaccount acc3(name,balance);

    double depositamount;

    cout<<"enter amount to deposit into account2:";
    cin>>depositamount;

    acc2.deposit(depositamount);

    double withdrawamount;
    cout<<"enter amount to withdraw from account 3:";
    cin>>withdrawamount;

    acc3.withdraw(withdrawamount);

    cout<<"account ınformation";

    acc1.display();
    acc2.display();
    acc3.display();

    return 0;
}