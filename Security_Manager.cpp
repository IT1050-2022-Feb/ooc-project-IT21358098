#include<iostream>
#include<string>
#include "Security_Manager.h"

using namespace std;


Security_Manager ::Security_Manager () //Security Manager Constructor
{
  SM_id="";
  name="";
  basicSal= 0;
  allowance=0;
}

Security_Manager :: Security_Manager(string pSM_id,string pname ,double pbasicSal) 
{
  SM_id = pSM_id;
  name= pname;
  basicSal= pbasicSal;
}
void Security_Manager:: setallowance(double pallowance)
{
  allowance = pallowance;
}
float Security_Manager:: CalSalary()
{
  salary = basicSal + allowance;
  return salary;
}

void Security_Manager:: DisplayPaySlip()
{
  cout<<"Security Manager ID          :"<<SM_id<<endl;
  cout<<"Security Manager Name        :"<<name << endl;
  cout<<"Security Manager Basic Salary:"<<basicSal<<endl;
  cout<<"Security Manager Allowancer  :"<<allowance << endl;
  cout<<"Security Manager Net Salary  :"<<salary<< endl;
}

Security_Manager :: ~Security_Manager()
{
  // Srcurity Manager Destructor	
}
