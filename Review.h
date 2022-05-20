class Review {
private:
    string review;
    string PdtID;
    int numberofiteam;
    int produtMid;//Product which is reviewed by customer

public:
    Review();
    Review(string rev, string PID,int Numberofrewiteam,int productid);
    void getPdtReview();
    ~Review();
};