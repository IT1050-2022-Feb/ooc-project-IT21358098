//implementing class
class SystemAdmine
{
 private:
   string  SA_id;
   string name;
   string Email;
   string M_num;

public:
    SystemAdmine();
    SystemAdmine( string pSA_id, string pname, string pEmail,string pM_num);
    void DisplayDetails();
    void removeProduct();
    void updateProduct();
    
    ~SystemAdmine();

};