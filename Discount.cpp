#include <iostream>
#include <string>
#include "Discount.h

using namespace std;
//IMPLEMENT METHODS OF Discount CLASS

Discount::Discount()
{
    discountPrecent = 0;
    discountCode = "";
}

void Discount::generateDis()
{
    int No;
    string code;
    cout << "Have a Discount Code? (Have = 1, Don't Have = 2): ";
    cin >> No;
    if (No == 1)
    {
        cout << "Enter Code: ";
        cin >> code;
        //After Code Validation
        if (code.length() == 4)
        {
            cout << "Customer Will Get 10% Discount" << endl;
            discountPrecent = 0.1; //10%
        }
        else if (code.length() == 6)
        {
            cout << "Customer Will Get 25% Discount" << endl;
            discountPrecent = 0.25; //25%
        }
        else if (code.length() == 8)
        {
            cout << "Customer Will Get 50% Discount" << endl;
            discountPrecent = 0.5; //50%
        }
    }
    if (No == 2)
    {
        cout << "Customer Will not Get Any Discount" << endl;
        discountPrecent = 0;
    }
}

float Discount::getDiscount()
{
    return discountPrecent;
}

Discount::~Discount()
{

}