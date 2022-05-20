//IMPLEMENT METHODS OF Product CLASS
#include<iostream>
#include<string>
#include "Product.h"


using namespace std;
Product::Product()
{

}

Product::Product(string ID, string Name, float Price)
{
    productID = ID;
    productName = Name;
    productPrice = Price;
}

void Product::getPdtDetails()
{
    cout << "Product ID: " << productID << endl << "Product Name: " << productName << endl << "Product Price: " << productPrice << endl << endl;
}

float Product::getPrice()
{
    return productPrice;
}

void Product::updatePdtDetails()
{
    int type;
    cout << "Update Product Details" << endl;
    cout << "----------------------" << endl;
    cout << "What Product Detail, Want to Update (Pdt ID = 1, Pdt Name = 2, Pdt Price = 3, Pdt Category = 4) (Input 1/2/3/4 or -1 to exit): ";
    cin >> type;
    while (type >= 1 && type <= 4)
    {
        if (type == 1)
        {
            cout << "Enter New Product ID: ";
            cin >> productID;
            cout << "Product ID is Updated" << endl;
        }
        else if (type == 2)
        {
            cout << "Enter New Name: ";
            cin >> productName;
            cout << "ProductName is Updated" << endl;
        }
        else if (type == 3)
        {
            cout << "Enter New Product Price: ";
            cin >> productPrice;
            cout << "Product Prise is Updated" << endl;
        }
        else if (type == 4)
        {
            cout << "Enter New Product Category: ";

            cout << "Product Category is Updated" << endl;
        }
        else if (type == -1)
        {
            break;
        }
        cout << "What Detail, You Want to Update (Name = 1, Email = 2, Mobile Number = 3, Address = 4) (Input 1/2/3/4 or -1 to exit): ";
        cin >> type;
    }
}

Product::~Product()
{}
