class Payment {
private:
    string paymentID;
    string paymentMethod;
    float paymentAmount;

public:
    Payment();
    Payment(string ID, string Method, float Amount);
    void getPdtPayDetails();
    void updateUserPayDetails();
    void calPayment();
    ~Payment();

};