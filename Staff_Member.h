class Staff_Member {
private:
	string SMemberID;
	string SMemberName;
	string SMemberEmail;
	string SMemberTelNum;
	
public:
	Staff_Member();
	Staff_Member(string ID, string Name, string Email, string TelNum);
	void getDetails();
	
};

