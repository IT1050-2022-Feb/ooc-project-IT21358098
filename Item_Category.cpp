// Implementation of Item_Category
#include<iostream>
#include<string>
#include "Item_Category.h"

using namespace std;
Item_Category::Item_Category(string cid , string cName , string pID ,string pName, float pPrice)
{
  IC_id = cid;
  IC_Name = cName;
  Pdt[0] = new Product(pID , pName , pPrice);
}
void Item_Category::getDetails() //Get Item Category Details
{
  cout<<"The Item Category ID = "<<IC_id<<endl;
  cout<<"The Item Category Name = "<< IC_Name<<endl;
  Pdt[0] ->getPdtDetails();
}
void Item_Category::changeProduct() // Change the product
{
  cout<<"Enter the Product to be changed = ";
  cout<<"Enter the category of that product = ";
}
void Item_Category::validateDetails() // Validate the relevant details
{
  if(IC_id == "5")
  {
    cout<<"This is a valid item_category ID";
  }
  else
  {
    cout<<"This is not a valid item_category ID";
  }
}
Item_Category::~Item_Category(){} // Deconstructor Item_Category

