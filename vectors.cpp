/*
	Patrick Ging
	Professor Zamanksy
	Lab 12
	vectors.cpp
*/

#include <iostream>
#include <vector>

#include "vectors.h"

std::vector<int> makeVector(int n) {
	/*
		Returns a vector of size n with values ranging
		from 0 to n-1
	*/
	std::vector<int> v;

	for(int i=0;i<n;i++) {
		v.push_back(i);
	}
	return v;
}

std::vector <int> goodVibes(const std::vector<int> &v) {
	/*
		Takes a vector and returns it without negatives
	*/

	std::vector<int> v2;

	for(int i=0; i < v.size(); i++) {
		if (v[i] >= 0) {
			v2.push_back(v[i]);
		}
	}

	return v2;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
	/*
		Takes 2 vectors and appends the items of the second into the first
		and empties the second 
	*/

	for(int i: vegeta) {
		goku.push_back(i);
	}

	vegeta.clear();

	return;
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
	/*
		Returns a vector where items of the same index are added
	*/

	int min_len = std::min(v1.size(), v2.size());
	std::vector<int> v;	
	
	if (v1.size() > v2.size()) {

		v = v1; // copying in vector
		for(int i=0;i<min_len;i++) {
			v[i] += v2[i];
		}	
	}
	else {

		v = v2; // copying in vector
		for(int i=0;i<min_len;i++) {
			v[i] += v1[i];
		}	
	}

	return v;
}