class Registered_User {
private:
    string RUid;
    string RUname;
    string RUemail;
    string RUtelNum;
    string RUaddress;
    string RUpassword;
    Order* Ord[1];
public:
    Registered_User();
    Registered_User(string ID, string Name, string Email, string TelNum, string Address, string PW);
    void updateRuserDetails();
    void getRuserDetails();
    void addOrder(Order* O);
    void setPassword();
    void resetPassword();
    ~Registered_User();
};