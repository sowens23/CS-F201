/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: c15.cpp
	Program Function:
		prompts the user for an initial integer
		Use a loop while (true). Within the loop:
		prompt the user to enter another integer
		uses an if statment, an else if statment, and an else statement to determine whether the new integer is greater than, equal to, or less than the initial integer, and prints a message that displays the two numbers and their relationship
		exits the loop once the user has entered a number that equals the initial integer
		after the loop, print a goodbye message
*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
	int a;
	int b;
	cout << "Please enter an integer: ";
	cin >> a;
	while (a != b) {
		cout << "Enter another integer: ";
		cin >> b;
		if (a > b) cout << a << " is greater than " << b << ".\n";
		else if (b > a) cout << a << " is less than " << b << ".\n";
		else cout << a << " is the same as " << b << ".\n";
	}
	cout << "Goodbye\n";
	return 0;
}
