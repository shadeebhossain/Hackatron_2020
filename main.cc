#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<sstream>
#include<string>
#include "fifty.h"
using namespace std;


float fiftythirty ::need() // Calling the Fifty : Thirty : Twenty function
    { float i,necessity,entertainment;
        cout<<"Please enter your income again:"<<endl;
        cin>>i;
        necessity=0.5*i;
        cout<<"You should spend in necessities:"<<necessity<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        entertainment=0.3*i;
        cout<<"You should spend in entertainment:"<<entertainment<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<"You should spend in savings:"<<0.2*i<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        return necessity;

    }

     float fiftythirty ::want()// Choose your percentages
    { float n,e,s,t,i,necessity,entertainment;
                           cout<<"Please enter your respective percentage for necessity"<<endl;
        cin>>n;
        cout<<""<<endl;
        cout<<"Please enter your respective percentage for entertainment"<<endl;
        cin>>e;

        cout<<""<<endl;
        cout<<"Please enter your respective percentage for saving"<<endl;
        cin>>s;
        cout<<""<<endl;

        t=s+n+e;
        if (t==100)
        {
            cout<<"Please enter your income again:"<<endl;
        cin>>i;
        necessity=i/100*n;
        cout<<"You should spend in necessities:"<<necessity<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        entertainment=i/100*e;
       cout<<"You should spend in entertainment:"<<entertainment<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<"You should spend in savings:"<<i/100*s<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        }
        else
            {
            cout<<"Your total percentage is not equal to 100. Please try again."<<endl;
             cout<<"Please enter your respective percentage for necessity"<<endl;
        cin>>n;
        cout<<""<<endl;
        cout<<"Please enter your respective percentage for entertainment"<<endl;
        cin>>e;

        cout<<""<<endl;
        cout<<"Please enter your respective percentage for saving"<<endl;
        cin>>s;
        cout<<""<<endl;

        }
        return necessity;
    }


int main()
{ //Introduction to the Application
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
cout<<" "<<endl;
cout<<"Welcome to your Virtual 50:30:20 Application Platform: "<<endl;
cout<<" "<<endl;
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
cout<<" "<<endl;










    string r; // Username
     cout<<"---------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Welcome to your Personal Finance Application:"<<endl;
     cout<<"---------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Please enter your name:";
    cin>>r; // username stored in string r
    cout<<endl;
    cout<<"Welcome,"<<r<<endl;
    //


     //Inquiry about income and 50:30:20 rule
    float i; // Inquiry about income
    string u;// Inquiry about the 50:30:20 rule in Y orN
    cout<<"---------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Can you please share your income to manage your personal finance:";
    cin>>i;
    cout<<"---------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Are you familiar about the 50:30:20 rule? (Y/N)";
    cin>>u;
     //
     //Explaining the 50:30:20 rule
     string t; // whether they would like to continue with the 50: 30:20 model

     cout<<"---------------------------------------------"<<endl;
    cout<<""<<endl;
    if(u=="N")
     {cout<<"According to the 50/30/20 rule"<<endl;
     cout<<"50% of your earning goes to your basic necessities like housing, food and mandatory bills:"<<endl;
     cout<<""<<endl;
     cout<<"30% of your earning goes to entertainment expenses like dining out or movies"<<endl;
     cout<<""<<endl;
     cout<<"20% of your earning goes towards saving"<<endl;
     cout<<""<<endl;


    cout<<"---------------------------------------------"<<endl;
    cout<<""<<endl;
     cout<<"Would you like to continue with this model? (Y/N)";
         cin>>t;
         if(t=="Y")
         {
             fiftythirty o; // Calling the fifty thirty function
             o.need();
         }
         else
         {
             fiftythirty k;
             k.want();
         }
     }
     else if(u=="Y")
     {
         cout<<"Would you like to continue with this model? (Y/N)";
         cin>>t;
         if(t=="Y")
         {
             fiftythirty o; // Calling the fifty thirty function
             o.need();
         }
          else
         {
             fiftythirty k;
             k.want();
         }
     }


// More detailed breakdown

string response;
float rent,income;
cout<<"----------------------------------------------------------------------"<<endl;
cout<<" "<<endl;
cout<<"Would you like a more detailed breakdown (Y/N)"<<endl;
cin>>response;
if (response=="N")
{
    cout<<"Thank you for your time"<<endl;
    cout<<"Good Luck with your finances"<<endl;
}
else
{   cout<<"Please enter your income:"<<endl;
    cin>>income;
    cout<<"Please enter your rent: "<<endl;
    cin>>rent;
    cout<<"-----------------------------------"<<endl;
    cout<<""<<endl;
    if(rent>=0.90*0.5*income)
        {

        cout<<"You are paying too much in rent"<<endl;
        cout<<"Your rent should be less than   "<<0.9*0.5*income<<endl;

    }
    else
    {    cout<<"--------------------------------------------"<<endl;
        cout<<"Your rent seems okay"<<endl;
        cout<<"  "<<endl;
         cout<<"This is how much you should spend in groceries per week   "<<endl;
         cout<<((0.9*0.5*income)-(rent))/5<<endl;
         cout<<"  "<<endl;
         cout<<"  "<<endl;
         cout<<"Try our Shopping Wallet Platform to manage your Shopping "<<endl;
    }
}
}
