/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: b19.cpp
	Program Function:
		Create a function called int smallest(vector<int>& numbers) that returns the smallest number in the vector. Write a complete C++ program that reads integers from the user until the user enters Ctrl-D, storing the integers in a vector. Call the function and print the result.
*/

#include <iostream>
#include <string>
#include <vector>
#include <climits>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int smallest(vector<int>& numbers) {
	int min {INT_MAX};
	for (int i: numbers) {
		if (i < min) min = i;
	}
	return min;
};

int main () {
	vector<int> count;
	int temp;
	cout << "Please enter a number: ";
	while (cin >> temp) {
		count.push_back(temp);
		cout << "Please enter a number: ";
	}
	cout << endl << smallest(count) << endl;
	return 0;
}
