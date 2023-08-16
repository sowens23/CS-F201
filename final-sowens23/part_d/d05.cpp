/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: d05.cpp
	Program Function:
		Write a function called string big_or_small(int x) that returns "big" if x is greater than 50, "small" if x is less than 10, and "neither" otherwise. Write a complete C++ program that prompts the user for an integer, calls your function, and prints the result of the function.
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

string big_or_small (int x) {
	if (x > 50) return "big";
	if (x < 10) return "small";
	else return "neither";
}

int main () {
	int i;
	cout << "Please enter an integer: ";
	cin >> i;
	cout << big_or_small(i) << endl;	
	return 0;
}
