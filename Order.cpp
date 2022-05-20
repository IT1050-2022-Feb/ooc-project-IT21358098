#include <iostream>
#include <string>
#include "Order.h"

using namespace std;

//  IMPLEMENT METHODS OF ORDER CLASS

Order::Order()
{

}

Order::Order(string ID, Registered_User* UID, string PID, string meth, float pay)
{
    orderID = ID;
    userID = UID;
    payment[0] = new Payment(PID, meth, pay);
}

void Order::getOrderDetails() 
{
    cout << "Order ID: " << orderID << endl;
    payment[0]->getPdtPayDetails();
}

Order::~Order()
{

} 