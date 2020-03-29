#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<sstream>
#include<string>
#include "fifty.h"
// Creating the login page
using namespace std;
string user,pass,ans,first,last,user_new,pass_new,pass_new_1;
int main()
{

cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
cout<<" "<<endl;
cout<<"Welcome to your Virtual Wallet Platform Login Page "<<endl;
cout<<" "<<endl;
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
cout<<" "<<endl;
cout<<"Please type in your username: ";
cin>>user;
cout<<""<<endl;
//Username is "RowdyHacker" and password is "123456"
if(user=="RowdyHacker")
{  cout<<"Your username exists "<<endl;
cout<<""<<endl;
    cout<<"Please type in your password: ";
     cin>>pass;
    if(pass=="123456")
    {
        cout<<""<<endl;
        cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"Congratulations!!! You are successfully logged in."<<endl;
    cout<<""<<endl;
    cout<<"Please try our Virtual Wallet Platform to familiarize yourself!!"<<endl;
    }
    else {
        cout<<"Your password is incorrect. Please try again"<<endl;

    }
}
else
{
    cout<<"Your username does not exist:"<<endl;
    cout<<"Would you like to create an account? [Y/N]  ";
    cin>>ans;
    if (ans=="N")
    {    cout<<"%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<" "<<endl;
        cout<<"Have a good one!!!"<<endl;
        cout<<""<<endl;
        cout<<"%%%%%%%%%%%%%%%%%%%%"<<endl;
    }
    else{
       cout<<"%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<" "<<endl;
        cout<<"Please register by typing in your First name:   ";
        cin>>first;
        cout<<""<<endl;
        cout<<"Please enter your Last name:     ";
        cin>>last;
        cout<<""<<endl;
        cout<<"Please enter a valid username:   ";
        cin>>user_new;
        cout<<""<<endl;
        cout<<"Please enter your password:   ";
        cin>>pass_new;
        cout<<""<<endl;
        cout<<"Please type in your password again to re-confirm:  ";
        cin>>pass_new_1;
      // Matching the passwords


while(pass_new!=pass_new_1)
{
   // cout<<""<<;
    cout<<"Your password(s) did not match. Please type your passwords again:"<<endl;
    cout<<""<<endl;

    cout<<""<<endl;
        cout<<"Please enter your password:";
        cin>>pass_new;
        cout<<""<<endl;
        cout<<"Please type in your password again to re-confirm:  ";
        cin>>pass_new_1;


}

//if(pass==pass_new_1)
{
    cout<<""<<endl;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<""<<endl;
    cout<<"Please verify your information: "<<endl;
    cout<<""<<endl;
    cout<<"Your name is:"<<endl;
    cout<<""<<endl;
    cout<<first<<""<<last<<"";
    cout<<""<<endl;
    cout<<"Your username is: "<<endl;
    cout<<""<<endl;
    cout<<user_new<<endl;
    cout<<""<<endl;
    cout<<"Thank you for creating an account.";
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"Please use our Virtual 50:30:20 application platform.";
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
}


 }


}}
