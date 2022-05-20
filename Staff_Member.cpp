#include <iostream>
#include <string>
#include "Staff_Member.h"
using namespace std;


// Staff_Member
Staff_Member::Staff_Member(string ID, string Name, string Email, string TelNum)
 
{
   SMemberID = ID; SMemberName = Name; SMemberEmail = Email; SMemberTelNum = TelNum;
} 

void Staff_Member::getDetails() // Get Details of Staff Members

{
  cout << "Staff Member ID = " << SMemberID << endl << "Staff Member Name = " << SMemberName << endl << "Staff Member E-mail = " << SMemberEmail << endl << "Staff Member Tel no = " << SMemberTelNum << endl << endl;
} 