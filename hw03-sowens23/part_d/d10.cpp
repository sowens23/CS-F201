/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-20

    Program Name : d10.cpp 
Program Function : Write a complete C++ program. You must implement a function called string big_or_small(int x) that returns "big" if x is greater than 50, "small" if x is less than 10, and "neither" otherwise.

Additional Notes;

*/

#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

string big_or_small(int x) {
	string size;
	if (x > 50) size = "big";
	else if (x < 10) size = "small";
	else size = "neither";
	return size;
}

int main () {
	cout << "Enter a rational whole number: ";
	int number;
	cin >> number;
	cout <<"That number is: " << big_or_small(number) <<endl;
	return 0;
}
/**
 * 5/5
 */