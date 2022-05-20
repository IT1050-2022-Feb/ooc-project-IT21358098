#include <iostream>
#include <string>
#include "IT_Manager.h"
using namespace std;
 
// IT_Manager
 IT_Manager::IT_Manager(string ID, string Name, string Email, string TelNum)
 
{
   ITMID = ID; ITMname = Name; ITMemail = Email; ITMtelNum = TelNum;
} 

void IT_Manager::getDetails() // Get Details of IT Manager

{
  cout << "IT Manager ID = " << ITMID << endl << "IT Manager Name = " << ITMname << endl << "IT Manager E-mail = " << ITMemail << endl << "IT Manager Tel no = " << ITMtelNum << endl<<endl;
} 