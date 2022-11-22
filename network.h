#pragma once
#include <string>

class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
  int findID (std::string usrn);
public:
  Network();
  bool addUser(std::string usrn, std::string dspn);
};
