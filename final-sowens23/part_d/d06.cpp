/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: d06.cpp
	Program Function:
		prompts the user for two integers
		uses an if statment, an else if statment, and an else statement to determine whether the first number is greater than, equal to, or less than the second number, and prints a message that displays the two numbers and their relationship
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main () {
	int a,b;
	cout << "Please enter two numbers (x x): ";
	cin >> a >> b;
	if (a > b) cout << a << " is greater than " << b << endl;
	else if (a < b) cout << a << " is less than " << b << endl;
	else cout << a << " is the same as " << b << endl;
	return 0;
}
