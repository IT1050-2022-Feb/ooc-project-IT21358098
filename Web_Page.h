class Web_Page
{
  private:
     string WP_id;
     string WP_Name;
     string WP_Type; 


  public:
     Web_Page();
     Web_Page(string pid , string pName , string pType);
     void getDetails();
     void createWebPage();
     void updateDetails();
   ~Web_Page();

};
