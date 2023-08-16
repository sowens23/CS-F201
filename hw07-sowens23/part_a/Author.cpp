/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Dec-4

Program Name: Author.cpp 
Program Function:
	You should create a file in part_d called Author.cpp
	In Author.cpp, implement the body of the Author class's constructors and methods:
	the body of each constructor should initialize the first name, last name, and middle initial member variables
	the body of each get method should return the appropriate member variable value
*/

#include <string>
#include "Author.h"

using std::string;

Author::Author () {
	first_name = "John";
	middle_initial = 'B';
	last_name = "Doe";
}

Author::Author (string last, string first, char middle) {
	first_name = first;
	middle_initial = middle;
	last_name = last;
}

string Author::getFirst() {
	string first = first_name;
	return first;
}

string Author::getLast() {
	string last = last_name;
	return last;
}

char Author::getMiddle () {
	char middle = middle_initial;
	return middle_initial;
}
