/*
	Patrick Ging
	Professor Zamanksy
	Lab 12
	tests.cpp
*/
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <iostream>
#include <vector>

#include "doctest.h"
#include "vectors.h"

bool v_equals(std::vector<int> &v1, std::vector<int> &v2 ) {
	/*
		Returns whether or not a vector is same length and
		has same items in same order
	*/
	if(v1.size() != v2.size()) {
		return false;
	}

	for(int i=0;i<v1.size();i++) {
		if (v1[i] != v2[i]) {
			return false;
		}
	}
	return true;
}


TEST_CASE("Vector.cpp functionalities") {

	//make vec
	std::vector<int> v = makeVector(5);
	std::vector<int> v_ref = {0,1,2,3,4};

	CHECK(v.size() == 5);
	CHECK(v_equals(v,v_ref));

	// Good vibes
	v = {-2,-1,0,1,2};
	v_ref = {0,1,2};

	v = goodVibes(v);

	CHECK(v.size() == 3);
	CHECK(v_equals(v,v_ref));

	//Gogeta
	v = {0,1,2};
	v_ref = {0,1,2};

	std::vector<int> sol = {0,1,2,0,1,2};

	gogeta(v,v_ref);

	CHECK(v.size() == 6);
	CHECK(v_ref.size() == 0);
	CHECK(v_equals(v,sol));

	// sumPairWise

	v = {0,1,2};
	v_ref = {0,0,0,3,4,5};
	sol = {0,1,2,3,4,5};

	v = sumPairWise(v,v_ref);

	CHECK(v.size() == 6);
	CHECK(v_equals(v,sol));

}
