/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep-29

    Program Name : part_b.cpp
Program Function : input 3 characters, call 1 function to combine the 3 inputs into an output to another function that changes all the characters of the combined input into #'s

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

string replace(string s, char c) {
	string new_name {""};
	for (int i=0; i<s.length(); i++) {
		new_name += c;
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
	new_name = replace(full,'#');
	cout << new_name << endl << endl;
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */