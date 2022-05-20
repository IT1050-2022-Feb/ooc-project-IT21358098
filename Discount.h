class Discount {
private:
    float discountPrecent;
    string discountCode;
    string payAmount;
public:

    Discount();
    void generateDis();
    float getDiscount();
    ~Discount();
};