#include <iostream>
#include <string>
#include <cctype>
#include "profile.h"
#include "network.h"

Network::Network() {
	numUsers = 0;
	for (int i = 0; i < MAX_USERS; i++) {
        	for(int j = 0; j < MAX_USERS; j++) {
                        following[i][j] = false;
                }
        }
}

int Network::findID (std::string usrn) {
	for (int i = 0; i < MAX_USERS; i++) {
		if(profiles[i].getUsername() == usrn) {
			return i;
		}
	}
	return -1;
}

bool alphanumeric(std::string s) {
	for(int i = 0; i < s.length(); i++) {
		if(isalpha(s[i]) == false && isdigit(s[i]) == false) {
			return false;
		}
	}
	return true;
}

bool Network::addUser(std::string usrn, std::string dspn) {
	if(alphanumeric(usrn) == true && findID(usrn) == -1 && numUsers != MAX_USERS){
		profiles[numUsers] = {usrn, dspn};
		numUsers++;
		return true;
	}
	else {
		return false;
	}
}

bool Network::follow(string usrn1, string usrn2){
        if()
}

void Network::printDot(){
        std::cout << "" << std::endl;
}
