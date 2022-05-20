class IT_Manager {
private:
  string ITMID;
	string ITMname;
	string ITMemail;
	string ITMtelNum;
	
public:
	IT_Manager();
	IT_Manager(string ID, string Name, string Email, string TelNum);
	void getDetails();
};