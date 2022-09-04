// CODE STARTS HERE
#include <iostream>
#include <stdlib.h>
using namespace std;
// function prototypes
void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();
// global variable (use this variable to store the user’s menu selection)
char menuInput;
int usrname;
int password;

// the main function
int main()
{
cout<< " Hi! Welcome to Mr. Zamar’s ATM Machine!\n";
start();
return 0;
}

void printIntroMenu()
{
cout<<"\n\nPlease select an option from the menu below:\n"<<endl;
cout<<"l -> Login"<<endl<<"c -> Create New Account"<<endl<<"q ->Quit"<<endl;
cin>>menuInput;
if (menuInput=='L'|| menuInput=='l')
    login();
else if (menuInput=='c'|| menuInput=='C')
    createAccount();
else if (menuInput=='q'|| menuInput=='Q')
    {exit(0);}
else
{
    cout<<"Please enter the correct option";
    printIntroMenu();
}
}

void printMainMenu()
{
int acc_balance=0;
int money;
while (true){
cout<<"d -> Deposit Money"<<endl<<"w -> Withdraw Money"<<endl<<"r -> Request Balance"<<endl;
cin>>menuInput;
if (menuInput=='d'|| menuInput=='D')
    {
        cout<< "\nAmount of deposit: $";
        cin>>money;
        acc_balance+=money;
    }
else if (menuInput=='w'|| menuInput=='W')
    {   cout<< "\nAmount of withdrawal: $";
        cin>>money;
        acc_balance-=money;}
else if (menuInput=='r'|| menuInput=='R')
    cout<<"Your balance is $"<<acc_balance<<endl;
else if (menuInput=='q'|| menuInput=='Q')
{    cout<<"\nThanks for stopping by!";
  exit(0);
}
}
}
void start()
{
// EXPLANATION OF CODE THAT GOES HERE IS BELOW
printIntroMenu();
}
void createAccount()
{

cout<<"\nPlease enter your user id: ";
cin>> usrname;
cout<< "\nPlease enter your password: ";
cin>> password;
cout<<"\nThank You! Your account has been created!\n";
login();
}
void login() {
int userId, userpassword;
cout<<endl<<"Please enter your user id: ";
cin>> userId;
cout<<endl<< "Please enter your password: ";
cin>>userpassword;

if (userpassword== password & usrname==userId){
        cout<<"Access Granted\n";
    printMainMenu();}
else {
    cout<<endl<<endl<<"\n******** LOGIN FAILED! ********\n";
    printIntroMenu();

}
}
// CODE ENDS HERE
