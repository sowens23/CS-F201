/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Dec-4

Program Name: Genre.h 
Program Function:
	In Genre.h, declare an enum class Genre that declares all collection of book genres. 
	You should have at least 5 book genres. 
	Examples might include fiction, nonfiction, biography, fantasy, and so on. Include a Genre called unknown
	In Genre.h, declare a function Genre from_string(std::string s);v
*/

#pragma once
#include <iostream>
#include <string>

using std::string;

enum class Genre {
	romance=1, mystery, fiction, horror, nonfiction, children, unknown
};

Genre from_string(string s);
