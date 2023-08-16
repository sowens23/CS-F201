/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Dec-4

Program Name: Book.cpp 
Program Function:
	In Book.cpp, implement the body of the Book class's constructors and methods:
	the body of each constructor should initialize the member variables
	the body of each get method should return the appropriate member variable value
*/

#include <string>
#include "Author.h"
#include "Book.h"

using std::string;

Book::Book () {
	title = "'Missing Title'";
	author = Author();
	copyright_date = 1776;
}

Book::Book (string temp_title, Author temp_author, int temp_copyright_date) {
	title = temp_title;
	author = temp_author;
	copyright_date = temp_copyright_date;
}

string Book::getTitle () {
	string temp_title = title;
	return temp_title;
}

Author Book::getAuthor () {
	Author temp_author = author;
	return temp_author;
}

int Book::getCopyright () {
	int temp_copyright_date = copyright_date;
	return temp_copyright_date;
}
