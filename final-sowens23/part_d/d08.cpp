/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: d08.cpp
	Program Function:
		Uses the following variable: vector<string> animals {"moose", "caribou", "salmon", "fox"};
		Uses a for-each loop to iterate over each item in the vector, printing its value.
		You may not use a for loop
*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main () {
	vector<string> animals {"moose", "caribou", "salmon", "fox"};
	for (string i: animals) cout << i <<endl;
	return 0;
}
