#include <iostream>
#include <string>
#include "profile.h"

Profile::Profile() {
	username = "";
	displayname = "";
} 

Profile::Profile(std::string usrn, std::string dspn) {
	username = usrn;
	displayname = dspn;
}

std::string Profile::getUsername() {
	return username;
}

std::string Profile::getFullName() {
	return displayname + "(@" + username + ")";
}

void Profile::setDisplayName(std::string dspn) {
	displayname = dspn;
}

/*int main() {
	Profile p1("marco", "Marco");    
    std::cout << p1.getUsername() << std::endl; // marco
    std::cout << p1.getFullName() << std::endl; // Marco (@marco)

  	p1.setDisplayName("Marco Rossi"); 
    std::cout << p1.getUsername() << std::endl; // marco
    std::cout << p1.getFullName() << std::endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    std::cout << p2.getUsername() << std::endl; // tarma1
    std::cout << p2.getFullName() << std::endl; // Tarma Roving (@tarma1)
	
	return 0;
}*/
