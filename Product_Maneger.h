class Product_Maneger
{
private:
    string Pid;
    string PName;
    string Email;
    string TelNum;
public:
    Product_Maneger();
    Product_Maneger(string pid, string pname, string Emils, string telnum);
    void product_ManegerUpdate();
    void getPMDetails();
    void addinganewProduct_Maneger(string pid, string pname, string Emils, string telnum);
    ~Product_Maneger();
};

