/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: d12.cpp
	Program Function:
		string salutation(string title, string first_name, string last_name) { ... }
		The function should concatenate the three arguments with spaces, and return the resulting string
		Write a complete C++ program that prompts the user to enter a salutation, first name, and last name, then calls the function to obtain a result, and prints the result
*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

string salutation (string title, string first_name, string last_name) {
	string temp {title+" "+first_name+" "+last_name};
	return temp;
}

int main () {
	string title, first_name, last_name;
	cout << "Enter your title, first and last name (x x x): ";
	cin >> title >> first_name >> last_name;
	cout << salutation (title,first_name,last_name) << endl;
	return 0;
}
