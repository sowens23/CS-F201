/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-4

    Program Name : part_a.cpp
Program Function : Using a while loop, input a character to a function that has a switch-case statement 
		   to read values + - * / ( ) %, a single digit number or something else and return the name 
		   of those arithmetic operators, the number in english or unknown operator and print the result.

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
		case '1': output = "one"; break;
		case '2': output = "two"; break;
		case '3': output = "three"; break;
		case '4': output = "four"; break;
		case '5': output = "five"; break;
		case '6': output = "six"; break;
		case '7': output = "seven"; break;
		case '8': output = "eight"; break;
		case '9': output = "nine"; break;
		case '+': output = "addition"; break;
		case '-': output = "subtraction"; break;
		case '*': output = "multiplication"; break;
		case '/': output = "division"; break;
		case '(': output = "left parenthesis"; break;
		case ')': output = "right parenthesis"; break;
		case '%': output = "modulo"; break;
		default: output = "unknown operator"; break;
	}
	return (output);
}


int main () {
	char char_input = ' ';
	string input;
	cout << endl;
	cout << "Please enter an arithmetic operator: ";	// Yali: "Please enter an arithmetic operator or single digit number: "
	while (cin >> input) {
		char_input=input[0];
		cout << operator_name(char_input) << endl;
		cout << "Please enter an arithmetic operator: ";
	}
	return 0;
}
/**
 * Feedback:
 * Uses cout to present user with requisite prompts at the appropriate times: -0.25
 * Total: 12.75/13
 */