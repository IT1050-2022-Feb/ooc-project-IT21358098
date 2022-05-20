class Order {
private:
    string orderID;
    Registered_User* userID; //Customer of Order
    Payment* payment[1];
public:
    Order();
    Order(string ID, Registered_User* UID, string PID, string meth, float pay);
    void getOrderDetails();
    ~Order();
};