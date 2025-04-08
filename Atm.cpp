#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    double balance;
    int choice;
    double amount;
    cout<<"Hello! Please enter your name"<<endl;
    cin>>name;
    cout<<"Enter Your Balance"<<endl;
    cin>>balance;
    while (choice != 4){
        cout<<"1.Check Balance"<<endl;
        cout<<"2.Deposit amount"<<endl;
        cout<<"3.Withdraw amount"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>choice;
        if (choice == 1)
            {cout<<name<<" " <<"Your current balance is "<<balance<<endl;}
        else if (choice == 2)
                {cout<<"Enter amount"<<endl;
                cin>>amount;
                if (amount>0){balance += amount;
                   cout<<amount<<" "<<"Deposited Succesfully"<<endl;
                   cout<<"Available balance="<<" "<<balance<<endl;}
                   else {cout<<"Invalid amount entered"<<endl;}}
        else if (choice == 3)
                 {cout<<"Enter amount"<<endl;
                 cin>>amount;
        if (amount>balance){
            cout<<"Insufficient amount"<<endl;}
          else if (amount<= 0) {
                cout<<"Invalid amount."<<endl;}
                else { balance -= amount;
                cout<<amount<<" " <<"Withdrawn Succesfully."<<endl;}
                cout<<"Available balance="<<" "<<balance<<endl;
                 }
       else if  (choice == 4){
    cout<<"Thankyou"<<" "<<name<<" " <<"Please visit again!!"<<endl;}
    else {cout<<"Invalid option."<<endl;}
       }
    return 0 ;}
                



