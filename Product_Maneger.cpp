#include <iostream>
#include <string>
#include "Product_Maneger.h"
using namespace std;





//IMPLEMENT METHODS OF Product_Manager CLASS
Product_Maneger::Product_Maneger(string pid, string pname, string Emils, string telnum)
{
    Pid = pid;
    PName = pname;
    Email = Emils;
    TelNum = telnum;
  
}


void Product_Maneger::product_ManegerUpdate()
{
    cout << "Uptade Product_Maneger Pname:";
    cin >> PName;
    cout << "__________" << endl;

    cout << "Uptade Product_Maneger E mail:";
    cin >> Email;
    cout << "__________" << endl;

    cout << "Uptade Product_Maneger Telno:";
    cin >> TelNum;
    cout << "__________" << endl;
}

void Product_Maneger::getPMDetails()
{
    cout << "Product_maneger ID:" << Pid << endl;
    cout << "Product_manege Name:" << PName << endl;
    cout << "Product_maneger Email:" << Email << endl;
    cout << "Product_maneger Telno:" << TelNum << endl << endl;
}

void Product_Maneger::addinganewProduct_Maneger(string pid, string pname, string Emils, string telnum)
{
    cout << "Enter Your New Product Maneger:" << endl;
    cout << "Enter NewProduct_Maneger Id Number:";
    cin >> pid;
    cout << "Enter NewProduct_Maneger Name:";
    cin >> pname;
    cout << "Enter NewProduct_Maneger Emali:";
    cin >> Emils;
    cout << "Enter NewProduct_Maneger TepNO:";
    cin >> telnum;
}

Product_Maneger::~Product_Maneger()
{

}
