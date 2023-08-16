/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Dec-4

Program Name: Book.h 
Program Function:
	In Book.h, declare a class Book that contains:
	std::string title; as a private member variable
	Author author as a private member variable
	int copyright_date; as a private member variable
	a public default constructor Book();
	a public constructor Book(std::string title, Author author, int year);
	a public method std::string getTitle();
	a public method Author getAuthor();
	a public method int getCopyright();
*/

#pragma once
#include <string>
#include "Author.h" 

using std::string;

class Book {
private:
	string title;
	Author author;
	int copyright_date;
public:
	Book ();
	Book (string title, Author author, int year);
	string getTitle();
	Author getAuthor();
	int getCopyright();
};
