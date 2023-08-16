/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-18

    Program Name : Month.h
Program Function : Declaring enum class Month that declares all 12 months, 'days in' and 'name of' month functions.

Additional Notes;

*/

#pragma once
#include <string>

using std::string;

enum class Month {
	January=1, February, March, April, May, June, July, August, September, October, November, December
};

// days in takes a month variable and returns int of days in the month
int days_in(Month m);

string name_of(Month m);
	

