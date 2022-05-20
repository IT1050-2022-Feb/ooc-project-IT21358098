#include <iostream>
#include <string>
#include "Review.h"
using namespace std;
//IMPLEMENT METHODS OF Review CLASS


Review::Review()
{

}

Review::Review(string rev, string PID,int Numberofrewiteam,int productid)

{
    review = rev;
    PdtID = PID;
    numberofiteam=Numberofrewiteam;
    produtMid=productid;
    
}

void Review::getPdtReview()
{
  cout << "Review for This Product: " << endl;
  cout << review;
  cout<<"Display Product Id:"<<endl;
  cout<<PdtID;
  cout<<"Number Of Iteam:";
  cout<<numberofiteam;
  cout<<"Product Id:";
  cout<<produtMid;
  cout << endl << endl;
}
Review::~Review()
{

}