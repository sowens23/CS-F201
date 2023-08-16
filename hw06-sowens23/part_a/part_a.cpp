/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-18

    Program Name : part_a.cpp
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

	A)	Modify date.h so that 'int month;' is not Month month; 
		Modify date.h and Date.cpp so that the return type of getMonth() is Month instead of int
		Configure main file to return the users 'next' birthday " Your next birthday will be December 4, 2022" if it is not 
			their birthday.

Additional Notes;

*/

#include <iostream>
#include <string>
#include "Date.h"
#include "Month.h"

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::cerr;

int main () {
	int year;
	int month_a;
	int day;
	int nextleapyear;	// Yali: int nextleapyear{};
	cout << "\nEnter your birthday (YYYY MM DD): ";
		cin >> year >> month_a >> day;
		Month month_b = Month(month_a);
		Date birthday = Date(year,month_b,day);
	cout << "Enter todays date (YYYY MM DD): ";
		cin >> year >> month_a >> day;
		Month month_c = Month(month_a);
		Date today = Date(year,month_c,day);
	cout << endl;

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
			cout << "Your next birthday will be ";
			cout << name_of(birthday.getMonth()) << " ";
			cout << birthday.getDay() << ", ";
			cout << today.getYear()+1 << endl;
		}

	// Birthday and Today not same month, but birthday has passed..
		else if (birthday.getMonth() < today.getMonth()) {
			cout << "Have a great day! You will be ";
			cout << today.getYear() - birthday.getYear() + 1;
			cout << " years old at your next birthday!" << endl;
			cout << "Your next birthday will be ";
			cout << name_of(birthday.getMonth()) << " ";
			cout << birthday.getDay() << ", ";
			cout << today.getYear()+1 << endl;
		}

	// If birthday has not passed.
		else {
			cout << "Have a great day! You will be ";
			cout << today.getYear() - birthday.getYear();
			cout << " years old at your next birthday!" << endl;
			cout << "Your next birthday will be ";
			cout << name_of(birthday.getMonth()) << " ";
			cout << birthday.getDay() << ", ";
			cout << today.getYear() << endl;
		}

	// Extra credit: If birthday is on leapyear, cout next leap year birthday.
		if (birthday.isLeapYear == true) {
			for(int a=today.getYear();a<=today.getYear()+7;a++) {
				if (a % 4 == 0) {
					if (year % 100 != 1) nextleapyear = a;
					if (year % 100 == 0 && year % 400 == 0) nextleapyear = a;
					if (year % 100 == 0 && year % 400 != 0) nextleapyear = a+4;
				}
			}
			cout << "Your next leap year birthday will be "; 
			cout << name_of(birthday.getMonth()) << " ";
			cout << birthday.getDay() << ", ";
			cout << nextleapyear << endl;
		}
	cout << endl;
	return 0;
}
