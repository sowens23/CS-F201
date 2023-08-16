/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-18

    Program Name : Month.cpp
Program Function : 
	Implement function of 'days_in' that returns days in a month, 28 for Feb.
		use a switch for the returns.
	body of 'name_of' month as a string using a switch-case
	
Additional Notes;

*/

#include <iostream>
#include <string>
#include "Month.h"

using std::cout;
using std::endl;
using std::string;
using std::endl;

int days_in (Month m) {
	int n = 31;
	switch (m) {
		case Month::February:
			n = 28;
			break;
		case Month::April: case Month::June: case Month::September: case Month::November:
			n = 30;
			break;
		default:
			break;
	}
	return n;
}

string name_of(Month m) {
	string name;
	switch (m) {
	case Month::January: name = "January"; break;	
	case Month::February: name = "February"; break;	
	case Month::March: name = "March"; break;	
	case Month::April: name = "April"; break;	
	case Month::May: name = "May"; break;	
	case Month::June: name = "June"; break;	
	case Month::July: name = "July"; break;	
	case Month::August: name = "August"; break;	
	case Month::September: name = "September"; break;	
	case Month::October: name = "October"; break;	
	case Month::November: name = "November"; break;	
	case Month::December: name = "December"; break;	
	}
	return name;
}
