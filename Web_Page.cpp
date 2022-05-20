//Implementation of Web_Page

#include<iostream>
#include<string>
#include "Web_Page.h"


using namespace std;
Web_Page::Web_Page(string pid , string pName , string pType)
{
  WP_id = pid;
  WP_Name = pName;
  WP_Type = pType;
}
void Web_Page::getDetails() // Get Web Page Details
{
  cout<<"The webpage ID =";
  cout<<"The webpage Name =";
  cout<<"The webpage Type =";
}
void Web_Page::updateDetails() // Update Web Page Details
{
  cout<<"The updated webpage ID =";
  cin>>WP_id;
  cout<<"The updated webpage Name =";
  cin>>WP_Name;
  cout<<"The updated webpage Type =";
  cin>>WP_Type;
}
void Web_Page::createWebPage()
  
{
  cout << "Input New WebPage ID :";
  cin>>WP_id;
  cout << "Input New WebPage Name :";
  cin>>WP_Name;
}

Web_Page::~Web_Page(){} //Deconstructor Web Page

