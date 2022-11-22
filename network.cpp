#include <iostream>
#include "network.h"

Network::Network() {
	numUsers = 0;
	for (int i = 0; i < MAX_USERS; i++) {
		for(int j = 0; j < MAX_USERS; j++) {
			following[i][j] = false;
		}
	}
}

bool Network::addUser(string usrn, string dspn) {
	if(usrn != "" && profiles.length != MAX_USERS) {
		
		return true;
	}
	else{
		return false;
	}
}

bool Network::follow(string usrn1, string usrn2){
	if()
}

void Network::printDot(){
	std::cout << "" << std::endl;
}
