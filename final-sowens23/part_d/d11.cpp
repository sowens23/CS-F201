/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: d11.cpp
	Program Function:
		Use cin and a while loop to read one string at a time from the user
		After each string is entered, confirm the string to the user
		End the loop when the user types Ctrl-D
*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main () {
	string temp;
	cout << "Please enter a string: ";
	while (cin >> temp) {
		cout << "You entered: " << temp << endl;	
		cout << "Please enter a string: ";
	}
	return 0;
}
