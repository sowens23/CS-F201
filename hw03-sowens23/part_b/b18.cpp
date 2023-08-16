/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-21

    Program Name : b18.cpp 
Program Function : Write a complete C++ program. Create a function called string op_name(char op). If the parameter op is '+', '-', '/', or '*', return the string corresponding to the name of that arithmetic operator ("addition", "substraction", "division", or "multiplication"), or "unknown" if the parameter op had any other value.

Additional Notes;

*/

#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

string op_name(char op) {
	switch (op) {
		case '+':
			return "addition";
			break;
		case '-':
			return "subtraction";
			break;
		case '*':
			return "multiplication";
			break;
		case '/':
			return "division";
			break;
		default:
			return "unknown";
			break;
	}
}

int main () {
	//I'm assuming Mr. Shwarts meant to add additional instructions saying to take an input from the user.
	//I'm adding in an input from the user here because the instructions are unclear.
	
	char op;
	cout << "Input an operator: ";
	cin >> op;
	cout << op_name(op) <<endl;
	return 0;
}
/**
 * 3/3
 */