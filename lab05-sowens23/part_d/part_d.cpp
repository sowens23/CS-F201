/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep-29

    Program Name : part_d.cpp
Program Function : Using a separate function, input two strings for a name. Call the function to output a single string with both names combined.

Additional Notes;

*/

#include<iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

string full_name(string first, string last) {
	string name = first + " " + last;
	return name;
}

int main () {
	string first {};
	string last {};
	cout << "\nPlease enter your first and last names: ";
	cin >> first >> last;
	cout << full_name(first,last) << endl << endl;
	return 0;
}
/**
 * Feedback:
 * Total: 61/61
 */