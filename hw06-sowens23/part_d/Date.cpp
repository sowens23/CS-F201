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

using std::cout;
using std::endl;
using std::string;

Date::Date() {
	year=2001;
	month=1;
	day=1;
}

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

void Date::getDate() {
	cout << year << "/" << month << "/" << day <<endl;
}

int Date::getYear() {
	int b = year;
	return b;
}

int Date::getMonth () {
	int m = month;
	return m;
}

int Date::getDay () {
	int d = day;
	return d;
}
