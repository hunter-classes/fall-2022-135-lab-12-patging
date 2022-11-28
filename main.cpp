/*
	Patrick Ging
	Professor Zamanksy
	Lab 12
	main.cpp
*/


#include <iostream>
#include <vector>

#include "vectors.h"

void printVec(std::vector<int> & v) {
	std::cout << "{";
	for (int i : v) {
		std::cout << i << ",";
	}
	std::cout << "}";
	std::cout << std::endl;
}


int main() {

	std::cout << "Generated Vector using makeVector()" << std::endl;
	std::vector<int> v = makeVector(5);
	printVec(v);

	std::cout << "Have vector {-1,0,1} and applying goodVibes\n";
	std::vector<int> v2 = {-1,0,1};
	v2 = goodVibes(v2);
	printVec(v2);

	std::cout << "Applying gogeta to two vectors \nBefore:";
	printVec(v2);
	printVec(v);

	gogeta(v2,v);

	std::cout << "After\n";

	printVec(v2);
	printVec(v);

	std::vector<int> v3 = makeVector(5);
	std::vector<int> v4 = makeVector(5);

	std::cout << "Applying sumpairwise to two vectors \nInputs:";
	printVec(v3);
	printVec(v4);

	std::vector<int> v5 = sumPairWise(v3,v4);

	std::cout << "Output\n";

	printVec(v5);

	return 0;
}