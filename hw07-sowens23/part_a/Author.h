/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Dec-4

Program Name: Author.h 
Program Function:
	In Author.h, declare a class Author that contains:
		std::string first_name; as a private member variable
		char middle_initial; as a private member variable
		std::string last_name; as a private member variable
		a public default constructor Author();
		a public constructor Author(std::string last, std::string first, char middle);
		a public method std::string getFirst();
		a public method std::string getLast();
		a public method char getMiddle();
*/

#pragma once
#include <string>

using std::string;

class Author {
private:
	string first_name;
	char middle_initial;
	string last_name;
public:
	Author ();
	Author (string last, string first, char middle);
	string getFirst();
	string getLast();
	char getMiddle();
};
