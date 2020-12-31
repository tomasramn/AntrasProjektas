#include "pch.h"
#include "../ConsoleApplication2/struktura.h"
TEST(TestCaseName, PirmasTestavimas) {
	studentasc studentasC;
	vector<studentasc> studinfoc;
	studinfoc.clear();
	studinfoc.push_back(studentasC);
	studinfoc[0].setValues("Rokas", "Urbonas", 10, 7);
	string x;
	x = studinfoc[0].getVardas();
	EXPECT_EQ(x, "Rokas");
	EXPECT_TRUE(true);
}
TEST(TestCaseName1, AntrasTestavimas) {

	studentasc studentasC;
	vector<studentasc> studinfoc;
	studinfoc.clear();
	studinfoc.push_back(studentasC);
	studinfoc[0].setValues("Burokas", "NEBEUrbonas", 4, 4);
	studinfoc[0].setGalutinis();
	float x, y;
	x = studinfoc[0].getGalutinis();
	y = 8.2;
	EXPECT_TRUE(x == y);
}