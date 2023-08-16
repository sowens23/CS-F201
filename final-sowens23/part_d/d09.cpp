/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: d09.cpp
	Program Function:
		Initialize a variable int x{0};
		Implement a while loop. The condition of the while loop should check to see if x is less than 100.
		Within the while loop, prompt the user for an integer.
		Add the user-provided integer to the value of x
		After the loop, print the final value of x
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
	int x {0};
	int temp;
	while (x<100) {
		cout << "Enter a number: ";
		cin >> temp;
		x=x+temp;
	}
	cout << x << endl;
	return 0;
}
