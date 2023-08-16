/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-4

    Program Name : part_d.cpp
Program Function : Using a while loop, input a character to a switch-case statement to read values + - * /, and print the name of those arithmetic operators.

Additional Notes;

*/

#include<iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main () {
	char char_input;
	string input;
	cout << endl;
	cout << "Please enter an arithmetic operator: ";
	while (cin >> input) {
		char_input=input[0];
		switch (char_input) {
			case '+':
				cout << "addition" << endl;
				break;
			case '-':
				cout << "subtraction" << endl;
				break;
			case '*':
				cout << "multiplication" << endl;
				break;
			case '/':
				cout << "division" << endl;
				break;
			default:
				cout << "unknown operator" << endl;
				break;
		}
		cout << "Please enter an arithmetic operator: ";
	}
	cout << "\n";
	return 0;
}
/**
 * Feedback:
 * Total: 61/61
 */