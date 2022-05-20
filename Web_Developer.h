class Web_Developer
{
    private:
    string WD_id;
    string WD_Name;
    string WD_Number;
    Web_Page* WP;
    
    public:
    Web_Developer();
    Web_Developer(string ID , string Name , string Number);
    void getDetails();
    void updateDetails();
    void developedWP(Web_Page* wp);
    void validateDetails();
    ~Web_Developer();
};
