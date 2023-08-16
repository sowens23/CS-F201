/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-18

    Program Name : Date.h
Program Function : Declare 'class Date' that contains int; year, month, day. With a default constructor, and a public constructor. Public method int getYear, getMonth, getDay.

Additional Notes;

*/

#pragma once
#include <string>
#include "Month.h"

using std::string;

class Date {
	private:
		int year, day;
		Month month;
	public:
		bool isLeapYear;
		Date();
		Date(int y, Month m, int d);
		
		int getYear();
		Month getMonth();
		int getDay();
		bool leapYear();	
};
