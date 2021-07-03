#include <iostream>
using namespace std;
class bank_account
{
 char depname[20];
 char account_type[2];
 int account_number;
 float amount;
 public:
 
void getdata()
 {
 cout<<"\nenter depositer name : ";
 cin>>depname;
 cout<<"enter account type : ";
 cin>>account_type;
 cout<<"enter account number : ";
 cin>>account_number;
 cout<<"enter amount : ";
 cin>>amount;
 }
void deposit() {
 int depo;
cout<<"enter amount to deposit"<<endl;
 cin>>depo;
 amount=amount+depo;
 cout<<"the current/updated amount is"<<amount<<endl;
 }
void withdraw()
 {
 int with;
 cout<<"enter amount to withdraw"<<endl;
 cin>>with;
 if(with>1000)
 {
 amount=amount-with;
 cout<<"the amount is updated"<<endl;
 }
 else
 {
 cout<<"invalid credentials"<<endl;
 }
 }
 int getaccount_num()
 { return account_number; }
};
int main()
{
 int i,ch,a,flag=0;
 bank_account ba[2];
 for(i=0;i<2;i++)
 {
 cout<<"\nEnter depositer information : "<<i+1<<endl;
 ba[i].getdata();
 }
 cout<<"\nenter the option to perform required operation"<<endl;
 cout<<"enter 1 for deposit"<<endl;
 cout<<"enter 2 for withdraw"<<endl;
 cin>>ch;
 switch(ch)
 {
 case 1:
 cout<<"enter account number"<<endl;
 cin>>a;
 for(i=0;i<2;i++)
 {
 if(ba[i].getaccount_num()==a)
 {
 flag=1;
 break;
 }
 else
 {
 flag=0;
 }
 }
 if(flag=0)
 {
 cout<<"invalid account holder"<<endl;
 }
 else
 {
 ba[i].deposit();
 }
 break;
 case 2:
 cout<<"enter account number to withdraw"<<endl;
 cin>>a; for(i=0;i<2;i++)
 {
 if(ba[i].getaccount_num()==a)
 { flag=1;
 break; }
 else
 {
 flag=0;
 }
 }
 if(flag=0)
 {
 cout<<"invalid account holder"<<endl;
 }
 else
 {
 ba[i].withdraw();
 }
 break; 
 }
 
 return 0;
}