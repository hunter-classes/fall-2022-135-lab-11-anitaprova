#include <iostream>
#include <string>
#include "doctest.h"
#include "profile.h"
#include "network.h"

TEST_CASE("TASK A") {
	Profile p1("annie12", "Anna");
	std::string s = p1.getUsername();
	CHECK(s == "annie12");
	CHECK(p1.getFullName() == "Anna (@annie12)");

	p1.setDisplayName("Annabelle12");
	s = p1.getUsername();
	CHECK(s == "Annabelle12");
	CHECK(p1.getFullName() == "Anna (@Annabelle12)");

	Profile p2();
	//s = p2.getUsername();
	CHECK(s == "");
}

/*
TEST_CASE("TASK B") {

}

TEST_CLASS("TASK C") {

}
*/

