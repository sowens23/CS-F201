/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep-29

    Program Name : part_a.cpp
Program Function : Take 3 inputs, call another function to combine the 3 inputs, then call a function to reverse the characters in the combined variable.

Additional Notes;

*/

#include<iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

string full_name(string first, char middle, string last) {
	string name {first+" "+middle+". "+last};
	return name;
}

string reverse(string s) {
	string new_name {""};
	for (int i=0; i<=s.length(); i++) {
		new_name += s[s.length()-i];
	}
	return new_name;
}

int main () {
	string first {};
	string last {};
	string full {};
	string new_name {};
	char middle {};
	cout << "\nPlease enter your first name, middle initial, and last name: ";
	cin >> first >> middle >> last;
	full = full_name(first,middle,last);	
	cout << full << endl;
	new_name = reverse(full);
	cout << new_name << endl << endl;
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */