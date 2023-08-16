/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: d07.cpp
	Program Function:
		Prompts the user for a positive integer
		Uses a for loop to iterate over each number from 1 up to and including the provided integer
		If the integer is not positive, don't print anything
		You must use a for loop. You must not use any if statements.
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main () {
	int a;
	cout << "Please enter a positive integer: ";
	cin >> a;
	for (int i=1;i<=a;i++) cout << i << " ";
	cout << endl;
	return 0;
}
