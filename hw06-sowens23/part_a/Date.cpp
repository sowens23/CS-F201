/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-18

    Program Name : Date.cpp
Program Function : Implement Date class constructors and method. Initialize year month and day to January 1, 2001.
					The body of the default constructor should initialize the year, month and day.
					getYear() should return the year
					getMonth() should return the month
					getDay() should return the day.

Additional Notes;

*/

#include <iostream>
#include <string>
#include "Date.h"
#include "Month.h"

using std::cout;
using std::endl;
using std::string;
using std::endl;

Date::Date() {
	year=2001;
	month=Month(1);
	day=1;
}

Date::Date(int y, Month m, int d) {
	year = y;
	month = m;
	day = d;
	isLeapYear = leapYear();
	if (leapYear() == true) {
		if (year == 2022) cout << year << " is a leap year." << endl;
		if (year < 2022) cout << year << " was a leap year." << endl;
	}
	if (leapYear() == false) {
		if (year == 2022) cout << year << " is not a leap year." << endl;
		if (year < 2022) cout << year << " was not a leap year." << endl;
	}
}

bool Date::leapYear() {
	bool a;
	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 != 0) a = false;
		else a = true;
	}
	return a;
}
		
int Date::getYear() {
	int b = year;
	return b;
}

Month Date::getMonth () {
	Month m = month;
	return m;
}

int Date::getDay () {
	int d = day;
	return d;
}
