#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "profile.h"
#include "network.h"

TEST_CASE("TASK A") {
	Profile p1("annie12", "Anna");
	CHECK(p1.getUsername() == "annie12");
	CHECK(p1.getFullName() == "Anna (@annie12)");

	p1.setDisplayName("Annabelle");
	CHECK(p1.getFullName() == "Annabelle (@annie12)");
}


TEST_CASE("TASK B") {
	Network n;
	CHECK(n.addUser("andy", "jerm") == true);
	CHECK(n.addUser("candance", "pickalayne") == true);
	CHECK(n.addUser("andy", "toys") == false);
}

TEST_CASE("TASK C") {
	Network n;
	n.addUser("andy", "jerm");
	n.addUser("candance", "pickalayne");
	n.addUser("maya", "mouses");

	CHECK(n.follow("andy", "candance") == true);
	CHECK(n.follow("mayaanderson", "andy") == false);
}
