class Item_Category
{
  private:
     string IC_id;
     string IC_Name;
     Product* Pdt[1];


  public:
     Item_Category(string cid , string cName , string pID , string pName, float pPrice);
     void getDetails();
     void changeProduct();
     void validateDetails();
    ~Item_Category();
};
