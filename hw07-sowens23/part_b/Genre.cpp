/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Dec-4

Program Name: Genre.cpp 
Program Function:
	In Genre.cpp, implement the body of the function Genre from_string(std::string s) { ... }
	This function should return the genre as a Genre object.
	Use if statements to implement this method
	Return Genre::unknown in the default case
*/

#include <iostream>
#include <string>
#include "Genre.h"

using std::string;

Genre from_string(string s) {
	if (s == "romance") return Genre::romance;
	if (s == "mystery") return Genre::mystery;
	if (s == "fiction") return Genre::fiction;
	if (s == "horror") return Genre::horror;
	if (s == "nonfiction") return Genre::nonfiction;
	if (s == "children") return Genre::children;
	return Genre::unknown;
}; 
