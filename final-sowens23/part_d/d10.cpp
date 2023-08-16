/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: d10.cpp
	Program Function:
		Initialize a variable vector<int> numbers;
		Write a while loop. The condition of the while loop should check to see if the number of elements in numbers is less than 4.
		Within the while loop, prompt the user for an integer.
		Append the user-provided integer to numbers
		After the loop, determine many numbers are in the numbers vector and tell the user.
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
	vector<int> numbers;
	int temp;
	while (numbers.size() < 4) {
		cout << "Please enter an integer: ";
		cin >> temp;
		numbers.push_back(temp);
	}
	cout << "\nThere are " << numbers.size() << " numbers in the vector.\n";	
	return 0;
}
