#include<iostream>
#include<string>
#include "SystemAdmine.h"

using namespace std;


SystemAdmine :: SystemAdmine() //System Admine constructor
{
  SA_id= "";
  name= "";
  Email="";
  M_num="";
}

SystemAdmine :: SystemAdmine(  string pSA_id,string pname,string pEmail,string pM_num)
{
 SA_id= pSA_id;
  name= pname;
  Email=pEmail;
  M_num=pM_num;
}

void SystemAdmine:: DisplayDetails()
{
  cout << "System Admin Number         :" << SA_id << endl;
  cout << "System Admin Name           :" << name << endl;
  cout << "System Admin Email Address  :" << Email << endl;
  cout << "System Admin Mobile Number  :" << M_num << endl;
}

void SystemAdmine:: removeProduct()
{
  cout<<"System Admine Removed old product" <<endl;
}

void SystemAdmine:: updateProduct()
{
  cout<<"System Admine Update New product"<<endl;
}

SystemAdmine :: ~SystemAdmine()
{
	//System Admine  Destructor
}
