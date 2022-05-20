//implementing class

class Security_Manager
{
  private:
     string SM_id;
     string name;
     double basicSal;
     double allowance;
     double salary;
     
  public:
    Security_Manager();
    Security_Manager (string pSM_id,string pname, double pbasicSal);
    void DisplayPaySlip();
    void setallowance(double pallowance);
    float CalSalary();

  ~Security_Manager(); 
  
};