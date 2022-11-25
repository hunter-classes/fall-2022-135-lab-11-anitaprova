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

bool Network::follow(std::string usrn1, std::string usrn2){
    if(findID(usrn1) != -1 && findID(usrn2) != -1) {
		following[findID(usrn1)][findID(usrn2)] == true;
		return true;
	}
	else{return false;}
}

void Network::printDot(){
	std::cout << "digraph { \n";
	for(int i = 0; i < MAX_USERS; i++) { //prints the usernames
		std::cout << "\t\"@" << following[i][0] << "\"" << std::endl;
	}	

	for(int i = 0; i < MAX_USERS; i++) {
		for(int j = 0; j < MAX_USERS; j++) {
			if(following[i][j] == true) {
				std::cout << "\"@" << following[i][0] << "\" -> \"@" << following[0][j] << "\"" << std::endl;
			}
		}
	}
	std::cout << "}" << std::endl;
}
