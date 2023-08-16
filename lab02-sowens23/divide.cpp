/*
 * divide.cpp
 * Write a program called `divide.cpp`. This program should do the following:
 * - [ ] Prompt the user to enter two numbers
 * - [ ] Use `cin` to read two numbers from the user, storing each as a `double`
 * - [ ] Print a message that presents the user with the result of dividing the first number by the second number
 * - [ ] Use the `{}`-list notation, attempt to convert each of the two numbers from `double` to `int`.
 * - Note the error message.
 *	 - If your error message was `error: expected ';' at end of declaration`, then you need to add the flag `-std=c++17` when you call `g++`.
 *	 - Once you do that, you should get the error message `type 'double' cannot be narrowed to 'int' in initializer list`
 *	 - Fix the error by explicitly casting your existing `double` variables using `static_cast<int>( )`
 * - [ ] Using these two newly converted integer values, print a message that presents the user with the result of dividing the first integer by the second integer
 * - [ ] Using these same two integer values, print a message that presents the user with the result of the first integer modulo the second integer
 *
 * Spencer Owens
 * Date: 09/16/2022
 */

#include<iostream>
using namespace std;

int main () {
	cout << "\033[2J\033[1;1H";
	double a;
	double b;
	cout << "Please enter a number (a): ";
	cin >> a;
	cout << "Please enter a number (b): ";
	cin >> b;
	cout << "\n(Double ) Here is '" << a << "' divided by '" << b << "': " << a / b << "\n";
	int inta = static_cast<int>(a);
	int intb = static_cast<int>(b);
	cout << "(Integer) Here is '" << inta << "' divided by '" << intb << "': " << inta / intb << "\n\n";
	return 0;

}
