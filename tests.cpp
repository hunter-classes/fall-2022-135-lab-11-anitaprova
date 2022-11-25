#include <iostream>
#include <string>
#include "doctest.h"
#include "profile.h"
#include "network.h"

TEST_CASE("TASK A") {
	Profile p1("annie12", "Anna");
	CHECK(p1.getUsername() == "annie12");
	CHECK(p1.getFullName() == "Anna (@annie12)");

	p1.setDisplayName("Annabelle12");
	CHECK(p1.getUsername() == "Annabelle12");
	CHECK(p1.getFullName() == "Anna (@Annabelle12)");

	Profile p2();
	CHECK(p2.getUsername() == "");
}

/*
TEST_CASE("TASK B") {

}

TEST_CLASS("TASK C") {

}
*/

