//implementation of Web_Developer

#include<iostream>
#include<string>
#include "Web_Developer.h"

using namespace std;
Web_Developer::Web_Developer(string ID , string Name , string Number)
{
  WD_id = ID;
  WD_Name = Name;
  WD_Number = Number;
}
void Web_Developer::getDetails() // get Web Developer Details
{
  cout<<"The Web Developer's ID ="<<WD_id;
  cout<<"The Web Developer's Name ="<<WD_Name;
  cout<<"The Web Developer's Number ="<<WD_Number;
}
void Web_Developer::updateDetails() // Update Web Developer Details
{
   cout<<"Enter the Web Developers ID";
   cin>>WD_id;
   cout<<"Enter the Web Developers Name";
   cin>>WD_Name;
   cout<<"Enter the Web Developers Number";
   cin>>WD_Number;
}
void Web_Developer::validateDetails() // Validate Web Developer Details
{
   cout<<"Enter the Web Developers ID";
   cin>>WD_id;
   cout<<"Enter the Web Developers Number";
   cin>>WD_Number;

  if (WD_id == "5" && WD_Number > "10") 
  {
    cout<<"Details are VALID"; 
  }
  else
  {
    cout<<"Details are INVALID";
  }
}
Web_Developer::~Web_Developer(){} // Deconstructor Web Developer

