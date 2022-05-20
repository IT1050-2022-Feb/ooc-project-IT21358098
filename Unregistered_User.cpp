#include <iostream>
#include <string>
#include "Unregistered_User.h"

using namespace std;

//IMPLEMENT METHODS OF Unregistered_User CLASS

Unregistered_User::Unregistered_User()
{
    UUname = "";
    UUemail = "";
    UUtelNum = "";
}

void Unregistered_User::Registering()
{
    cout << "Register in Store to get a unique shopping experience" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Enter Your Name: ";
    cin >> UUname;
    cout << "Enter Your Email: ";
    cin >> UUemail;
    cout << "Enter Your Mobile Number: ";
    cin >> UUtelNum;
    cout << "Registration Successful" << endl;
}

Unregistered_User::~Unregistered_User()
{

}