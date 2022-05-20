class Product {
private:
    string productID;
    string productName;
    float productPrice;

public:
    Product();
    Product(string ID, string Name, float Price);
    void getPdtDetails();
    float getPrice();
    void updatePdtDetails();
    ~Product();
};
