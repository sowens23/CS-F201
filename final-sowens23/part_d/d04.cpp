/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: d04.cpp
	Program Function:
		Write a complete C++ program that prompts the user for their favorite color and then reads the user input into a string, and then prints a message telling the user what their the user's favorite color is, followed by a newline.
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main () {
	cout << "What is your favorite color: ";
	string fcolor;
	cin >> fcolor;
	cout << "Your favorite color is: " << fcolor << endl;
	return 0;
}
