/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep-29

    Program Name : part_c.cpp
Program Function : To read in 3 inputs, output combined inputs and length of output string.

Additional Notes;

*/

#include<iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

string full_name(string first, char middle, string last) {
	string name {first+" "+middle+". "+last};
	cout << "Full name is " << name.length () << " characters long." << endl;
	return name;
}

int main () {
	string first {};
	string last {};
	char middle {};
	cout << "\nPlease enter your first name, middle initial, and last name: ";
	cin >> first >> middle >> last;
	cout << full_name(first, middle, last) << endl << endl;
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */