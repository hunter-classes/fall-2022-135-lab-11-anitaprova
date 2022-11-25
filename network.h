#pragma once
#include <string>
class Network {
private:
    static const int MAX_USERS = 20;  
	int numUsers;                    // number of registered users
    Profile profiles[MAX_USERS];     // user profiles array:
    int findID (std::string usrn);
    bool following[MAX_USERS][MAX_USERS];
public:
    Network();
    bool addUser(std::string usrn, std::string dspn);
    bool follow(std::string usrn1, std::string usrn2);
    void printDot();
};
