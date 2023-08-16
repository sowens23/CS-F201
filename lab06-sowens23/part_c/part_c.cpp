/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-4

    Program Name : part_c.cpp 
    Program Function : Using a while loop, input a character and call it to a function w/ a switch-case statement to read values + - * /, and print the name of those arithmetic operators.

Additional Notes;

*/

#include<iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

string operator_name (char operator_name) {
	string output = "";
	switch (operator_name) {
		case '+':
			output = "addition";
			break;
		case '-':
			output = "subtraction";
			break;
		case '*':
			output = "multiplication";
			break;
		case '/':
			output = "division";
			break;
		default:
			output = "unknown operator";
			break;
	}
	return (output);
}


int main () {
	char char_input = ' ';
	string input;
	cout << endl;
	cout << "Please enter an arithmetic operator: ";
	while (cin >> input) {
		char_input=input[0];
		cout << operator_name(char_input) << endl;
		cout << "Please enter an arithmetic operator: ";
	}
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */