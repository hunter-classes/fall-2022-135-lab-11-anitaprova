#pragma once
class Network {
private:
  	static const int MAX_USERS = 20; // max number of user profiles
  	int numUsers;                    // number of registered users
  	Profile profiles[MAX_USERS];     // user profiles array:
  	int findID (string usrn);
	bool following[MAX_USERS][MAX_USERS];
public:
  	Network();
  	bool addUser(string usrn, string dspn);
	bool follow(string usrn1, string usrn2);
	void printDot();
};
