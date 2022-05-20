#include <iostream>
#include <string>
#include "Payment.h"

using namespace std;

//IMPLEMENT METHODS OF Payment CLASS

Payment::Payment()
{

}

Payment::Payment(string ID, string Method, float Amount)
{
    paymentID = ID;
    paymentMethod = Method;
    paymentAmount = Amount;
}

void Payment::getPdtPayDetails()
{
    cout << "Payment ID: " << paymentID << endl << "Payment Method: " << paymentMethod << endl << "Payment Amount: " << paymentAmount << endl;
}

void Payment::updateUserPayDetails()
{ 
    int type;
    cout << "Update Your Payment" << endl;
    cout << "-------------------" << endl;
    cout << "Enter the Payment Method (Credit Card = 1, Debit Card = 2, PayPal = 3) (Input 1/2/3): ";
    cin >> type;
    if (type == 1)
    {
        cout << "Enter Credit Card Number: ";
        cout << "Enter Credit Card Expire Date (MM/YY): ";
        cout << "Enter Credit Card CVC: ";
        cout << "Yor Credit Card Details are Updated" << endl;
    }
    if (type == 2)
    {
        cout << "Enter Debit Card Number: ";
        cout << "Enter Debit Card Expire Date (MM/YY): ";
        cout << "Enter Debit Card CVC: ";
        cout << "Yor Debit Card Details are Updated" << endl;
    }
    if (type == 3)
    {
        cout << "Enter PayPal ID: ";
        cout << "Enter PayPal Password: ";
        cout << "Yor Credit Card Details are Updated" << endl;
    }
}

void Payment::calPayment()
{
    float total = 0;
    float Price=0 ;
    
    while (Price >= 0)
    {
        total += Price;
        cout << "Input Price: ";
        cin >> Price;   
    }
    cout << "Total Payment: " << total << endl;
}

Payment::~Payment()
{

}