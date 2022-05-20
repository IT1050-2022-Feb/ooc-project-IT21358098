#include <iostream>
#include <string>
#include "Registered_User.h"

using namespace std;

//IMPLEMENT METHODS OF Registered_User CLASS


Registered_User::Registered_User()
{

}

Registered_User::Registered_User(string ID, string Name, string Email, string TelNum, string Address, string PW)
{
    RUid = ID;
    RUname = Name;
    RUemail = Email;
    RUtelNum = TelNum;
    RUaddress = Address;
    RUpassword = PW;
}

void Registered_User::getRuserDetails()
{
    cout << "User ID: " << RUid << endl << "User Name: " << RUname << endl << "User Email: " << RUemail << endl << "User Mobile Number: " << RUtelNum << endl << "User Address: " << RUaddress << endl;
}

void Registered_User::updateRuserDetails()
{
    int type;
    cout << "Enter Your Updated Details" << endl;
    cout << "--------------------------" << endl;
    cout << "What Detail, You Want to Update (Name = 1, Email = 2, Mobile Number = 3, Address = 4) (Input 1/2/3/4 or -1 to exit): ";
    cin >> type;
    while (type >= 1 && type <= 4)
    {
        if (type == 1)
        {
            cout << "Enter New Name: ";
            cin >> RUname;
            cout << "Your Name is Updated" << endl;
        }
        else if (type == 2)
        {
            cout << "Enter New Email: ";
            cin >> RUemail;
            cout << "Your Email is Updated" << endl;
        }
        else if (type == 3)
        {
            cout << "Enter New Mobile Number: ";
            cin >> RUtelNum;
            cout << "Your Mobile Number is Updated" << endl;
        }
        else if (type == 4)
        {
            cout << "Enter New Address: ";
            cin >> RUaddress;
            cout << "Your Address is Updated" << endl;
        }
        else if (type == -1)
        {
            break;
        }
        cout << "What Detail, You Want to Update (Name = 1, Email = 2, Mobile Number = 3, Address = 4) (Input 1/2/3/4 or -1 to exit): ";
        cin >> type;
    }
}

void Registered_User::addOrder(Order* O)
{
    Ord[0] = O;
}

void Registered_User::setPassword()
{
    string OPW, NPW, CPW;
    cout << "Change Your Password" << endl;
    cout << "--------------------" << endl;
    cout << "Enter Your Old Passsword: " << endl;
    cin >> OPW;
    if (OPW == RUpassword)
    {
        cout << "Enter New Password: " << endl;
        cin >> NPW;
        cout << "Confirm New Password: " << endl;
        cin >> CPW;
        if (NPW == CPW)
        {
            RUpassword = NPW;
            cout << "Password is Updated" << endl;
        }
        else
        {
            cout << "Cannot Confirm the New Password" << endl;
        }
    }
    else
    {
        cout << "Your Old Password is incorrect!" << endl;
    }
}

void Registered_User::resetPassword()
{
    int OTPtype, OTP;
    string NPW, CPW;
    cout << "Reset Your Password" << endl;
    cout << "-------------------" << endl;
    cout << "Get OTP Code to Your Email or Mobile Number (Email = 1, Mobile No. = 2) (Input 1/2)" << endl;
    cin >> OTPtype;
    if (OTPtype == 1)
    {
        cout << "OTP code was send your Email" << endl;
    }
    if (OTPtype == 2)
    {
        cout << "OTP code was send your Mobile Number" << endl;
    }
    cout << "Input OTP Code: " << endl;
    cin >> OTP;
    if (OTP == OTP)
    {
        cout << "Enter New Password: " << endl;
        cin >> NPW;
        cout << "Confirm New Password: " << endl;
        cin >> CPW;
        if (NPW == CPW)
        {
            RUpassword = NPW;
            cout << "Password is Updated" << endl;
        }
        else
        {
            cout << "Cannot Confirm the New Password" << endl;
        }
    }
    else
    {
        cout << "OTP Code is Incorrect!" << endl;
    }
}

Registered_User::~Registered_User()
{

}