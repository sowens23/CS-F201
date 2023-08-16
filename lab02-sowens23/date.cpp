/*
 * Write a program called `date.cpp` that:
 *   - [ ] Prompts the user for a month, day, and year (as integers)
 *   - [ ] Prints the provided date in ISO 8601 format (YYYY-MM-DD)
 *   - [ ] Ensures that leading zeroes are included where necessary (for example 2018-01-22)
 *  
 * date.cpp
 * Spencer Owens
 * 09/16/2022
 */

#include<iostream>
using namespace std;

int main () {
	cout << "\033[2J\033[1;1H";
	cout << "\nEnter the current month, day and year in this format MM DD YYYY: ";
	int month;
	int day;
	int year;
	cin >> day >> month >> year;
	cout << "(YYYY-MM-DD) : (" << year << "-";
	if (month < 10) {
		cout << "0" << month << "-";
	}
	else cout << month << "-";
	if (day < 10) {
		cout << "0" << day;
	}
	else cout << day;
	cout << ")\n\n";
	return 0;
}
