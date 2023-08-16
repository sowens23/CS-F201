/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : b19.cpp 
Program Function : Write a complete C++ program. Create a function called int smallest(vector<int> numbers) that returns the smallest number in the vector.

Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>
#include<climits>

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;

int smallest(vector<int> numbers) {
	int smol {INT_MAX};
	for (int q : numbers) if (q<smol) smol=q;
	return smol;
}


int main () {
	vector<int> numbers {99,7,4,2,1};
	cout << smallest(numbers) << endl;
	return 0;
}
/**
 * 3/3
 */