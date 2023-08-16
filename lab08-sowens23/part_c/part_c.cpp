/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-7

    Program Name : part_c.cpp
Program Function : Input a year and determine whether the year is a leap year.

Additional Notes;

*/

#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::to_string;

string leapyear (int year) {
	string is_it {};
	is_it += to_string(year);
	if (year%4==0) is_it += " is a leap year";	// Yali: wrong condition. ((year%4==0) && (year%100!=0)) || (year%400==0)
	else is_it += " is not a leap year";
	return is_it;
}

int main () {
	int year {};
	string prompt {"Enter a year: "};
	cout << endl << prompt;
	while (cin >> year) {
		cout << leapyear(year) << endl << prompt;
	}
	return 0;
}
/**
 * Feedback:
 * if conditions: -2
 * Total: 11/13
 */