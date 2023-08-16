/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-18

    Program Name : part_c.cpp
Program Function : Implement int main(); create variables year, month, day. Prompt user for birthday
	D)	Construct a Date object called birthday with provided values. 
		Construct a Date object and prompt user to enter todays date
		compare dates using getYear, getMonth, getDay methods
		if today is users birthday, print celebratory message with users age.
			otherwise tell them how old they will be at their next birthday.

		Also, create a makefile, with clean and cleanest.
	
	C) 	Create a new function in Date.cpp/Date.h that checks submitted years for leapyear bool and print result.	

Additional Notes;

*/

#include <iostream>
#include <string>
#include "Date.h"

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::cerr;

int main () {
	int year;
	int month;
	int day;
	cout << "\nEnter your birthday (YYYY MM DD): ";
	cin >> year >> month >> day;
	Date birthday = Date(year,month,day);
	cout << "Enter todays date (YYYY MM DD): ";
	cin >> year >> month >> day;
	Date today = Date(year,month,day);
	// If birthday == today
	if (birthday.getMonth() == today.getMonth() & birthday.getDay() == today.getDay()) {	// Yali: &&
		cout << "Happy birthday! You just turned ";
		cout << today.getYear() - birthday.getYear();
		cout << " years old!" << endl;
	}
	// Birthday and Today same month, but birthday has passed..
	else if (birthday.getMonth() == today.getMonth() & birthday.getDay() < today.getDay()) {	// Yali: &&
		cout << "Have a great day! You will be ";
		cout << today.getYear() - birthday.getYear() + 1;
		cout << " years old at your next birthday!" << endl;
	}
	// Birthday and Today not same month, but birthday has passed..
	else if (birthday.getMonth() < today.getMonth()) {
		cout << "Have a great day! You will be ";
		cout << today.getYear() - birthday.getYear() + 1;
		cout << " years old at your next birthday!" << endl;
	}
	// If birthday has not passed.
	else {
		cout << "Have a great day! You will be ";
		cout << today.getYear() - birthday.getYear();
		cout << " years old at your next birthday!" << endl;
	}
	cout << "\n";
	return 0;
}
