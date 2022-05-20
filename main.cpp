#include <iostream>
#include <string>
#include "Registered_User.h"
#include "Unregistered_User.h"
#include "Order.h"
#include "Payment.h"
#include "Discount.h"
#include "Web_Developer.h"
#include "Web_Page.h"
#include "Product.h"
#include "Item_Category.h"
#include "Product_Maneger.h"
#include "Review.h"
#include "Security_Manager.h"
#include "SystemAdmine.h"
#include "IT_Manager.h"
#include "Staff_Member.h"
#include "Resources.h"

using namespace std;
int main()
{
    Registered_User* RU1 = new Registered_User("RU001", "Tom ", "tom@gmail.com", "+14553248567", "No.24, Yorkville, Toronto", "Tom@2000");
    Registered_User* RU2 = new Registered_User("RU002", "Kate ", "kate@gmail.com", "+14553458597", "No.65, Edmonton, Alberta", "KatE$&2");

    Order* OD1 = new Order("OD001", RU1, "Pay01", "Debit Card", 61.99);
    Order* OD2 = new Order("OD002", RU2, "Pay02", "PayPal", 87.00);

    Discount* Dis1 = new Discount();
    Discount* Dis2 = new Discount();

    Review* Rev1 = new Review("We pleased with your product", "Pdt001");
    Review* Rev2 = new Review("I got only two 5kg dumbell without bar", "Pdt002");
    Review* Rev3 = new Review("Customer Protection is perfect. Also package was taken good quality", "Pdt003");
    Review* Rev4 = new Review("Product displaying was very well organized", "Pdt004");

    Product_Maneger* PM1 = new Product_Maneger("PM001", "David", "david@gmail.com", "+14558889342");
    Product_Maneger* PM2 = new Product_Maneger("PM001", "David", "david@gmail.com", "+14558889342");
    Product_Maneger* PM3 = new Product_Maneger("PM001", "David", "david@gmail.com", "+14558889342");

    IT_Manager* IM1 = new IT_Manager("IT001", "Mark", "mark@gmail.com", "+14559872731");
    IT_Manager* IM2 = new IT_Manager("IT002", "John", "john2@gmail.com", "+14559772639");

    Staff_Member* SM1 = new Staff_Member("SM001", "Cara", "cara@gmail.com", "+14552863730");
    Staff_Member* SM2 = new Staff_Member("SM002", "Kevin", "kevin3@gmail.com", "+14555883737");
    Staff_Member* SM3 = new Staff_Member("SM003", "Ryan", "ryan1995@gmail.com", "+14552746457");

    Security_Manager* CM1 = new Security_Manager("CM001", "Michel", 10000);
    Security_Manager* CM2 = new Security_Manager("CM002", "Robin", 10000);
    Security_Manager* CM3 = new Security_Manager("CM003", "William", 10000);

    SystemAdmine* SA1 = new SystemAdmine("SA001", "Kate", "kate1994@gmail.com", "+14569830023");
    SystemAdmine* SA2 = new SystemAdmine("SA002", "Alex", "Alex01@gmail.com", "+14561820103");

    Web_Developer* WD1 = new Web_Developer("WD001", "Harry", "+14558339043");
    Web_Developer* WD2 = new Web_Developer("WD002", "Joe", "+14558349209");

    Web_Page* WP1 = new Web_Page("WP001", "HomePage", "WPT647");
    Web_Page* WP2 = new Web_Page("WP002", "Login", "WPT345");

    Item_Category* IC1 = new Item_Category("IC001", "Fashion", "Pdt001", "ADDIDAS T-Shirt 00", 29.99);
    Item_Category* IC2 = new Item_Category("IC002", "Fitness", "Pdt002", "5kg Dumbell Full Set", 32.00);
    Item_Category* IC3 = new Item_Category("IC003", "Games", "Pdt003", "ROCKSTAR - GTA V", 59.00);
    Item_Category* IC4 = new Item_Category("IC004", "Kitchen Accessories", "Pdt004", "Whistle Kettle", 28.00);

    cout << "------------------------------------------------" << endl;
    cout << "Customer and Their Order Details" << endl << endl;
    cout << "------------------------------------------------" << endl;
    cout << "--------------------Order 1---------------------" << endl;
    cout << "Included Product Details in Order 1" << endl;
    IC1->getDetails();
    IC2->getDetails();
    OD1->getOrderDetails();
    Dis1->generateDis();

    cout << endl << "-----------Customer Who Makes Order 1-----------" << endl;
    RU1->getRuserDetails();
    cout << "------------------------------------------------" << endl << endl;
    cout << "------------------------------------------------" << endl;
    cout << "--------------------Order 2---------------------" << endl;
    cout << "Included Product Details in Order 2" << endl;
    IC3->getDetails();
    IC4->getDetails();
    OD2->getOrderDetails();
    Dis2->generateDis();

    cout << endl << "-----------Customer Who Makes Order 2-----------" << endl;
    RU2->getRuserDetails();
    cout << "------------------------------------------------" << endl << endl;

    cout << "Manager Details" << endl << endl;
    cout << "------------------------------------------------" << endl;
    cout << "-----------------Product Manager----------------" << endl;
    PM1->getPMDetails();
    PM2->getPMDetails();
    PM3->getPMDetails();
    cout << endl;
    cout << "-------------------IT Manager-------------------" << endl;
    IM1->getDetails();
    IM2->getDetails();
    cout << endl;
    cout << "----------------Security Manager----------------" << endl;
    CM1->setallowance(100);
    CM1->DisplayPaySlip();
    CM2->setallowance(200);
    CM2->DisplayPaySlip();
    CM3->setallowance(150);
    CM3->DisplayPaySlip();
    cout << "------------------------------------------------" << endl << endl;

    cout << "Employee Details" << endl << endl;
    cout << "------------------------------------------------" << endl;
    cout << "------------------Staf Members------------------" << endl;
    SM1->getDetails();
    SM2->getDetails();
    SM3->getDetails();
    cout << "------------------System Admin------------------" << endl;
    SA1->DisplayDetails();
    SA2->DisplayDetails();
    cout << "------------------Web Developer-----------------" << endl;
    WD1->getDetails();
    WD2->getDetails();
    cout << "------------------------------------------------" << endl << endl;

    cout << "Other Details" << endl << endl;
    cout << "------------------------------------------------" << endl;
    cout << "--------------Item Category Details-------------" << endl;
    IC1->getDetails();
    Rev1->getPdtReview();
    IC2->getDetails();
    Rev2->getPdtReview();
    IC3->getDetails();
    Rev3->getPdtReview();
    IC4->getDetails();
    Rev4->getPdtReview();
    cout << "----------------Web Page Details----------------" << endl;
    WP1->getDetails();
    WP2->getDetails();
    cout << "------------------------------------------------" << endl;
}