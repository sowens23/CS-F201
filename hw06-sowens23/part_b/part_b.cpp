/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-18

    Program Name : part_b.cpp
Program Function : 
	D)	Implement int main(); create variables year, month, day. Prompt user for birthday
		Construct a Date object called birthday with provided values. 
		Construct a Date object and prompt user to enter todays date
		compare dates using getYear, getMonth, getDay methods
		if today is users birthday, print celebratory message with users age.
			otherwise tell them how old they will be at their next birthday.

		Also, create a makefile, with clean and cleanest.
		
	C) 	Create a new function in Date.cpp/Date.h that checks submitted years for leapyear bool and print result.	

	B)	Create a Month.h and Month.cpp
		in Month.h
			declare enum class Month that declares all 12 months
			declare a function int days_in(Month m);
			declare a function std::string name_of(Month m);
		in Month.cpp
			implement the body of the function int days_in(Month m) { ... }; that returns days in month, always 28 for Feb.
			use switch (m) { ... } and implement the appropriate cases. (see in_date function at end of CHPTR 9)
		in part_b.cpp 
			prompt user for number, if number is in range 1-12, use days_in and is_date to get the number of days in that month
				and name of the month, then print that info.
				- re prompt for bad entry
			when non-integer or EOF (cin.eof()) is entered, say "Goodbye"


Additional Notes;

*/

#include <iostream>
#include <string>
//#include "Date.h"
#include "Month.h"

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::cerr;

int main () {
	int days;
	cout << "Please enter a month as a number in the range of 1-12: ";
	while (cin >> days) {
		while (days > 12 || days < 1) {
			cout << "Please enter a month as a number in the range of 1-12: ";
			cin >> days;
		}
		Month a_days = Month(days);
		cout << "There are ";
		cout << days_in(a_days);
		cout << " days in ";
		cout << name_of(a_days) << endl;
		cout << "Please enter a month as a number in the range of 1-12: ";
	}
	cout << "\nGoodbye\n";
/*
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
	if (birthday.getMonth() == today.getMonth() & birthday.getDay() == today.getDay()) {
		cout << "Happy birthday! You just turned ";
		cout << today.getYear() - birthday.getYear();
		cout << " years old!" << endl;
	}
	// Birthday and Today same month, but birthday has passed..
	else if (birthday.getMonth() == today.getMonth() & birthday.getDay() < today.getDay()) {
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
	cout << "\n";*/
	return 0;
}
